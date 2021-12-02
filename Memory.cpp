#pragma once
#include "pch.h"
#include "Memory.h"
#include "Address.h"

DWORD GamePID;
HANDLE hProcess;
uintptr_t BaseAddress;

uintptr_t AD::OBJ_Player;
uintptr_t AD::OBJ_Boss;
uintptr_t AD::Time;
uintptr_t AD::Death;
uintptr_t AD::StageTime;
uintptr_t AD::StageDeath;

DWORD_PTR GET_BASEADDRESS(DWORD processID)
{
	//https://stackoverflow.com/a/26573045

	DWORD_PTR   baseAddress = 0;
	HANDLE      processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processID);
	HMODULE* moduleArray;
	LPBYTE      moduleArrayBytes;
	DWORD       bytesRequired;

	if (processHandle)
	{
		if (EnumProcessModules(processHandle, NULL, 0, &bytesRequired))
		{
			if (bytesRequired)
			{
				moduleArrayBytes = (LPBYTE)LocalAlloc(LPTR, bytesRequired);

				if (moduleArrayBytes)
				{
					unsigned int moduleCount;

					moduleCount = bytesRequired / sizeof(HMODULE);
					moduleArray = (HMODULE*)moduleArrayBytes;

					if (EnumProcessModules(processHandle, moduleArray, bytesRequired, &bytesRequired))
					{
						baseAddress = (DWORD_PTR)moduleArray[0];
					}

					LocalFree(moduleArrayBytes);
				}
			}
		}
		CloseHandle(processHandle);
	}
	return baseAddress;
}

bool MEM::IS_TRAINER_READY()
{
	HWND GameWindowHandle = FindWindow(nullptr, L"I Wanna Be The Justice Guy 1.2.0");
	GetWindowThreadProcessId(GameWindowHandle, &GamePID);
	if (GamePID == 0)
		return false;

	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, GamePID);
	BaseAddress = GET_BASEADDRESS(GamePID);
	//printf("game is ready\n");
	return true;
}

void MEM::WRITE (std::vector<int> Pointer, double Value)
{
	auto Address = BaseAddress;
	auto Size = Pointer.size();

	for (int a = 0; a < Size; a++)
	{
		if (a == Size - 1)
		{
			WriteProcessMemory(hProcess, LPVOID(Address + Pointer[a]), &Value, sizeof(Value), NULL);
			return;
		}

		ReadProcessMemory(hProcess, LPVOID(Address + Pointer[a]), &Address, sizeof(Address), NULL);
	}
}

void MEM::WRITE(std::vector<int> Pointer, int Offset, double Value)
{
	auto Address = BaseAddress;

	for (int a = 0; a < Pointer.size(); a++)
	{
		ReadProcessMemory(hProcess, LPVOID(Address + Pointer[a]), &Address, sizeof(Address), NULL);
	}

	WriteProcessMemory(hProcess, LPVOID(Address + Offset), &Value, sizeof(Value), NULL);
}

void MEM::WRITE(uintptr_t Address, int Offset, double Value)
{
	WriteProcessMemory(hProcess, LPVOID(Address + Offset), &Value, sizeof(Value), NULL);
}

double MEM::READ(std::vector<int> Pointer)
{
	auto Address = BaseAddress;
	auto Size = Pointer.size();
	double Result;

	for (int a = 0; a < Size; a++)
	{
		if (a == Size - 1)
		{
			ReadProcessMemory(hProcess, LPVOID(Address + Pointer[a]), &Result, sizeof(double), NULL);
			return Result;
		}

		ReadProcessMemory(hProcess, LPVOID(Address + Pointer[a]), &Address, sizeof(Address), NULL);
		//printf("%p\n", Address);
	}
}

double MEM::READ(std::vector<int> Pointer, int Offset)
{
	auto Address = BaseAddress;
	double Result;

	for (int a = 0; a < Pointer.size(); a++)
	{
		ReadProcessMemory(hProcess, LPVOID(Address + Pointer[a]), &Address, sizeof(Address), NULL);
	}

	ReadProcessMemory(hProcess, LPVOID(Address + Offset), &Result, sizeof(double), NULL);
	return Result;
}

double MEM::READ(uintptr_t Address, int Offset)
{
	double Result;

	ReadProcessMemory(hProcess, LPVOID(Address + Offset), &Result, sizeof(Result) , NULL);
	return Result;
}

uintptr_t MEM::RETURN_ADDRESS(std::vector<int> Pointer)
{
	auto Address = BaseAddress;

	for (int a = 0; a < Pointer.size(); a++)
	{
		ReadProcessMemory(hProcess, LPVOID(Address + Pointer[a]), &Address, sizeof(Address), NULL);
	}

	return Address;
}

void MEM::GET_ADDRESS_TICK()
{
	AD::OBJ_Player = MEM::RETURN_ADDRESS(POINTER::Player);
	AD::OBJ_Boss = MEM::RETURN_ADDRESS(POINTER::Boss);
}

void MEM::GET_ADDRESS()
{
	MEM::GET_ADDRESS_TICK();
	AD::Time = MEM::RETURN_ADDRESS(POINTER::Time);
	AD::Death = MEM::RETURN_ADDRESS(POINTER::Death);
	AD::StageTime = MEM::RETURN_ADDRESS(POINTER::StageTime);
	AD::StageDeath = MEM::RETURN_ADDRESS(POINTER::StageDeath);
}

void MEM::REFRESH()
{
	CloseHandle(hProcess);
}