#pragma once

#ifndef  MEMORY_H
#define MEMORY_H

extern DWORD GamePID;
extern HANDLE hProcess;
extern uintptr_t BaseAddress;

namespace AD
{
	extern uintptr_t OBJ_Player;
	extern uintptr_t OBJ_Boss;
	extern uintptr_t Time;
	extern uintptr_t Death;
	extern uintptr_t StageTime;
	extern uintptr_t StageDeath;
}

namespace MEM
{
	bool IS_TRAINER_READY();

	void WRITE(std::vector<int> Pointer, double Value);

	void WRITE(std::vector<int> Pointer, int Offset, double Value);

	void WRITE(uintptr_t Address, int Offset, double Value);

	double READ(std::vector<int> Pointer);

	double READ(std::vector<int> Pointer, int Offset);

	double READ(uintptr_t Address, int Offset);

	uintptr_t RETURN_ADDRESS(std::vector<int> Pointer);

	void GET_ADDRESS_TICK();

	void GET_ADDRESS();

	void REFRESH();
}

#endif