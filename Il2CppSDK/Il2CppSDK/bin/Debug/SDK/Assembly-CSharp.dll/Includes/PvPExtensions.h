#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvPExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPExtensions"));
	}


	template <typename R = float> static R GetDuration(PvPEntity* pvp) {
		return ((R (*)(void *, PvPEntity*))(Il2CppBase() + 0x11BE038))(0, pvp);
	}
	template <typename R = float> static R GetSearchDuration(PvPEntity* pvp) {
		return ((R (*)(void *, PvPEntity*))(Il2CppBase() + 0x11BE080))(0, pvp);
	}
	template <typename R = int64_t> static R GetEndTick(PvPEntity* pvp) {
		return ((R (*)(void *, PvPEntity*))(Il2CppBase() + 0x11BE0CC))(0, pvp);
	}

};

