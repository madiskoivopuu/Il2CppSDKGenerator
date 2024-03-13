#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvPExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPExtensions"));
	}


	template <typename T = float> static T GetDuration(PvPEntity* pvp) {
		return ((T (*)(void *, PvPEntity*))(Il2CppBase() + 0x11BE038))(0, pvp);
	}
	template <typename T = float> static T GetSearchDuration(PvPEntity* pvp) {
		return ((T (*)(void *, PvPEntity*))(Il2CppBase() + 0x11BE080))(0, pvp);
	}
	template <typename T = int64_t> static T GetEndTick(PvPEntity* pvp) {
		return ((T (*)(void *, PvPEntity*))(Il2CppBase() + 0x11BE0CC))(0, pvp);
	}

};

