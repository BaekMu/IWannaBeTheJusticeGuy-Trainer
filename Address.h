#pragma once

#ifndef  ADDRESS_H
#define  ADDRESS_H

namespace POINTER
{
	extern std::vector<int> Player; // Angel Mode HP
	extern std::vector<int> Boss; // Boss HP

	extern std::vector<int> Time; // Value of displayed on the top bar
	extern std::vector<int> Death; // Value of displayed on the top bar
	extern std::vector<int> StageTime; // Value reflected in score calculation when clearing a stage
	extern std::vector<int> StageDeath; // Value reflected in score calculation when clearing a stage
}

namespace OFFSET
{
	// Player Object
	extern int AngelHP;
	extern int GodMode; // 10 - Enable
	extern int JumpCount;
	extern int Gravity;
	extern int FallSpeed;
	extern int SlidingDuration;
	extern int Character; // 1 - TTT 2 - BG
	extern int WeaponCoolDown; // 0 - No Limit
	/*
	 auto DifferentGodMode = 0x380;
	auto DifferentGodMode2 = 0x390;
	 */

	 // Boss Object
	extern int BossHP;
	extern int Timer; // I don't know what it does, but I'm sure it's a timer
	extern int MoveCount; // Boss not attack player, Just moves by count (Maybe Deus and Leina only)
	extern int MoveCount_2; // maybe same

	// Save
	/* Pointer Address = Save1 */
	extern std::vector<int> Save;
}

namespace ADDRESS
{
	extern int ShowStatus; // \xdd\x07\x3b\xf9
}

#endif