#pragma once

#ifndef FUNTIONS_H
#define FUNCTIONS_H

namespace FN
{
	void SET_GOD();
	void SET_HP(double HP); // Angel mode only
	void SET_JUMP_COUNT(double Count);
	void SET_GRAVITY(double Gravity);
	void SET_FALL_SPEED(double Speed);
	void SET_SLIDING_DURATION(double Duration);
	void SET_CHARACTER(double Guy);
	void SET_WEAPON_COOLDOWN(double CoolDown);

	void HIDE_STATUS(bool Enable);

	void SET_TIME(int Index, double Value);
	void SET_DEATH(int Index, double Value);
	void SET_STAGE_TIME(int Index, double Value);
	void SET_STAGE_DEATH(int Index, double Value);

	void SET_BOSS_HP(double Value);
	void KILL_BOSS();
	void SET_BOSS_MOVECOUNT(double Value);
	void SET_BOSS_MOVECOUNT_(double Value);


	double GET_HP();
	double GET_JUMP_COUNT();
	double GET_GRAVITY();
	double GET_FALL_SPEED();
	double GET_SLIDING_DURATION();
	double GET_CHARACTER();
	double GET_WEAPON_COOLDOWN();

	double GET_TIME(int Index);
	double GET_DEATH(int Index);
	double GET_STAGE_TIME(int Index);
	double GET_STAGE_DEATH(int Index);
}

#endif