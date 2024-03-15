#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanHelper"));
	}


	template <typename R = uint8_t> static R GetFreeCellIndex(ICommonContexts* world, ClanEntity* clan) {
		return ((R (*)(void *, ICommonContexts*, ClanEntity*))(Il2CppBase() + 0x1585DDC))(0, world, clan);
	}
	template <typename R = bool> static R IsCombat(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x158610C))(0, world);
	}
	 static Nullable1int32_t>* GetLocationGrade(ClanEntity* clanEntity, Il2CppString* locationTag) {
		return ((Nullable1int32_t>* (*)(void *, ClanEntity*, Il2CppString*))(Il2CppBase() + 0x1586314))(0, clanEntity, locationTag);
	}
	 static Nullable1int32_t>* GetLocationGrade_1(ClanEntity* clanEntity, LocationEntity* location) {
		return ((Nullable1int32_t>* (*)(void *, ClanEntity*, LocationEntity*))(Il2CppBase() + 0x1586414))(0, clanEntity, location);
	}
	template <typename R = bool> static R SetLocationGrade(ClanEntity* clanEntity, Il2CppString* locationTag, int32_t value) {
		return ((R (*)(void *, ClanEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1586624))(0, clanEntity, locationTag, value);
	}

};

