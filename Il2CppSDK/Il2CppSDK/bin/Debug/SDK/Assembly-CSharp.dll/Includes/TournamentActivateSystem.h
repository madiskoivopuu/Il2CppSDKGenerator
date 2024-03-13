#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentActivateSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentActivateSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(TournamentActivateSystem*))(Il2CppBase() + 0x14FCA58))(this);
	}

};

