#pragma once
#include "pch.h"
#include "Functions.h"

#include <xlocmon>

#include "Address.h"
#include "Memory.h"

void FN::SET_GOD()
{
	MEM::WRITE(AD::OBJ_Player, OFFSET::GodMode, 10);
}

void FN::SET_HP(double HP)
{
	MEM::WRITE(AD::OBJ_Player, OFFSET::AngelHP, HP);
}

void FN::SET_JUMP_COUNT(double Count)
{
	MEM::WRITE(AD::OBJ_Player, OFFSET::JumpCount, Count);
}

void FN::SET_GRAVITY(double Gravity)
{
	MEM::WRITE(AD::OBJ_Player, OFFSET::Gravity, Gravity);
}

void FN::SET_FALL_SPEED(double Speed)
{
	MEM::WRITE(AD::OBJ_Player, OFFSET::FallSpeed, Speed);
}

void FN::SET_SLIDING_DURATION(double Duration)
{
	MEM::WRITE(AD::OBJ_Player, OFFSET::SlidingDuration, Duration);
}

void FN::SET_CHARACTER(double Guy)
{
	MEM::WRITE(AD::OBJ_Player, OFFSET::Character, Guy);
}

void FN::SET_WEAPON_COOLDOWN(double CoolDown)
{
	MEM::WRITE(AD::OBJ_Player, OFFSET::WeaponCoolDown, CoolDown);
}

void FN::HIDE_STATUS(bool Enable)
{
	if (Enable)
	{
		auto Enable = "\x90\x90\x3b\xf9";
		WriteProcessMemory(hProcess, reinterpret_cast<void*>(BaseAddress + ADDRESS::ShowStatus), Enable, 4, NULL);
	}
	else
	{
		auto Disable = "\xdd\x07\x3b\xf9";
		WriteProcessMemory(hProcess, reinterpret_cast<void*>(BaseAddress + ADDRESS::ShowStatus), Disable, 4, NULL);
	}
}

void FN::SET_TIME(int Index, double Value)
{
	WriteProcessMemory(hProcess, (LPVOID)(AD::Time + OFFSET::Save[Index]), &Value, sizeof(Value), NULL);
}

void FN::SET_DEATH(int Index, double Value)
{
	WriteProcessMemory(hProcess, (LPVOID)(AD::Death + OFFSET::Save[Index]), &Value, sizeof(Value), NULL);
}

void FN::SET_STAGE_TIME(int Index, double Value)
{
	WriteProcessMemory(hProcess, (LPVOID)(AD::StageTime + OFFSET::Save[Index]), &Value, sizeof(Value), NULL);
}

void FN::SET_STAGE_DEATH(int Index, double Value)
{
	WriteProcessMemory(hProcess, (LPVOID)(AD::StageDeath + OFFSET::Save[Index]), &Value, sizeof(Value), NULL);
}

void FN::SET_BOSS_HP(double Value)
{
	WriteProcessMemory(hProcess, (LPVOID)(AD::OBJ_Boss + OFFSET::BossHP), &Value, sizeof(Value), NULL);
}

void FN::KILL_BOSS()
{
	double Value = -9999;
	WriteProcessMemory(hProcess, (LPVOID)(AD::OBJ_Boss + OFFSET::BossHP), &Value, sizeof(Value), NULL);
}

void FN::SET_BOSS_MOVECOUNT(double Value)
{
	WriteProcessMemory(hProcess, (LPVOID)(AD::OBJ_Boss + OFFSET::MoveCount), &Value, sizeof(Value), NULL);
}

void FN::SET_BOSS_MOVECOUNT_(double Value)
{
	WriteProcessMemory(hProcess, (LPVOID)(AD::OBJ_Boss + OFFSET::MoveCount_2), &Value, sizeof(Value), NULL);
}


double FN::GET_HP()
{
	return MEM::READ(AD::OBJ_Player, OFFSET::AngelHP);
}

double FN::GET_JUMP_COUNT()
{
	return MEM::READ(AD::OBJ_Player, OFFSET::JumpCount);
}

double FN::GET_GRAVITY()
{
	return MEM::READ(AD::OBJ_Player, OFFSET::Gravity);
}

double FN::GET_FALL_SPEED()
{
	return MEM::READ(AD::OBJ_Player, OFFSET::FallSpeed);
}

double FN::GET_SLIDING_DURATION()
{
	return MEM::READ(AD::OBJ_Player, OFFSET::SlidingDuration);
}

double FN::GET_CHARACTER()
{
	return MEM::READ(AD::OBJ_Player, OFFSET::Character);
}

double FN::GET_WEAPON_COOLDOWN()
{
	return MEM::READ(AD::OBJ_Player, OFFSET::WeaponCoolDown);
}

double FN::GET_TIME(int Index)
{
	return MEM::READ(AD::Time, OFFSET::Save[Index]);
}

double FN::GET_DEATH(int Index)
{
	return MEM::READ(AD::Death, OFFSET::Save[Index]);
}

double FN::GET_STAGE_TIME(int Index)
{
	return MEM::READ(AD::StageTime, OFFSET::Save[Index]);
}

double FN::GET_STAGE_DEATH(int Index)
{
	return MEM::READ(AD::StageDeath, OFFSET::Save[Index]);
}