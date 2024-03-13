#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass280
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass28_0"));
	}

	template <typename T = PlayGamesLocalUser*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Action2CommonStatusCodes*, PlayerStats*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T GetStatsb__0(CommonStatusCodes* rc, PlayerStats* stats) {
		return ((T (*)(cDisplayClass280*, CommonStatusCodes*, PlayerStats*))(Il2CppBase() + 0x10B0464))(this, rc, stats);
	}

};

