#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorSyncSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorSyncSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1EffectEntity*>*> T& _effects() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(AnimatorSyncSystem*))(Il2CppBase() + 0x188DC08))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(AnimatorSyncSystem*))(Il2CppBase() + 0x188DD0C))(this);
	}

};

