#pragma once
#include "pch.h"
#include "Address.h"

std::vector<int> POINTER::Player{ 0x00395EFC, 0x448, 0xB0, 0x8, 0x4 }; // Angel Mode HP
std::vector<int> POINTER::Boss{ 0x00395EFC, 0x43C, 0xBC, 0x8, 0x4 }; // Boss HP

std::vector<int> POINTER::Time{ 0x0039B1E8, 0x4, 0x30, 0x4, 0x4 }; // Value of displayed on the top bar
std::vector<int> POINTER::Death{ 0x0039B1E8, 0x4, 0x20, 0x4, 0x4 }; // Value of displayed on the top bar
std::vector<int> POINTER::StageTime{ 0x0039B1E8, 0x4, 0x30, 0x8, 0x80, 0x4, 0x4 }; // Value reflected in score calculation when clearing a stage
std::vector<int> POINTER::StageDeath{ 0x0039B1E8, 0x4, 0x20, 0x8, 0x80, 0x4, 0x4 }; // Value reflected in score calculation when clearing a stage

int OFFSET::AngelHP = 0x60;
int OFFSET::GodMode = 0x370; // 10 - Enable
int OFFSET::JumpCount = 0x3A0;
int OFFSET::Gravity = 0x420;
int OFFSET::FallSpeed = 0x4A0;
int OFFSET::SlidingDuration = 0x490;
int OFFSET::Character = 0x350; // 1 - TTT 2 - BG
int OFFSET::WeaponCoolDown = 0x550; // 0 - No Limit
/*
 auto DifferentGodMode = 0x380;
auto DifferentGodMode2 = 0x390;
 */

 // Boss Object
int OFFSET::BossHP = 0x60;
int OFFSET::Timer = 0x260; // I don't know what it does, but I'm sure it's a timer
int OFFSET::MoveCount = 0x900; // Boss not attack player, Just moves by count (Maybe Deus and Leina only)
int OFFSET::MoveCount_2 = 0x910; // maybe same

// Save
std::vector<int> OFFSET::Save{ 0x10, 0x20, 0x30 };

int ADDRESS::ShowStatus = 0x109971;