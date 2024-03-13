#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanHelper"));
	}


	template <typename T = uint8_t> static T GetFreeCellIndex(ICommonContexts* world, ClanEntity* clan) {
		return ((T (*)(void *, ICommonContexts*, ClanEntity*))(Il2CppBase() + 0x1585DDC))(0, world, clan);
	}
	template <typename T = bool> static T IsCombat(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x158610C))(0, world);
	}
	template <typename T = Nullable1int32_t>*> static T GetLocationGrade(ClanEntity* clanEntity, Il2CppString* locationTag) {
		return ((T (*)(void *, ClanEntity*, Il2CppString*))(Il2CppBase() + 0x1586314))(0, clanEntity, locationTag);
	}
	template <typename T = Nullable1int32_t>*> static T GetLocationGrade_1(ClanEntity* clanEntity, LocationEntity* location) {
		return ((T (*)(void *, ClanEntity*, LocationEntity*))(Il2CppBase() + 0x1586414))(0, clanEntity, location);
	}
	template <typename T = bool> static T SetLocationGrade(ClanEntity* clanEntity, Il2CppString* locationTag, int32_t value) {
		return ((T (*)(void *, ClanEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1586624))(0, clanEntity, locationTag, value);
	}

};

