#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanHelper"));
	}


	template <typename T = unsigned char> static T GetFreeCellIndex(uintptr_t world, uintptr_t clan) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1585DDC))(0, world, clan);
	}
	template <typename T = bool> static T IsCombat(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x158610C))(0, world);
	}
	template <typename T = void*> static T GetLocationGrade(uintptr_t clanEntity, Il2CppString* locationTag) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1586314))(0, clanEntity, locationTag);
	}
	template <typename T = void*> static T GetLocationGrade_1(uintptr_t clanEntity, uintptr_t location) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1586414))(0, clanEntity, location);
	}
	template <typename T = bool> static T SetLocationGrade(uintptr_t clanEntity, Il2CppString* locationTag, int32_t value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1586624))(0, clanEntity, locationTag, value);
	}

};

}
