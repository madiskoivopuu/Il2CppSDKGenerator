#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentActivateSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentActivateSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Execute() {
		return ((R (*)(TournamentActivateSystem*))(Il2CppBase() + 0x14FCA58))(this);
	}

};

