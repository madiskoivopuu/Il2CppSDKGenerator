#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorSyncSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorSyncSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1EffectEntity*>*& _effects() {
		return *(IGroup1EffectEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(AnimatorSyncSystem*))(Il2CppBase() + 0x188DC08))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(AnimatorSyncSystem*))(Il2CppBase() + 0x188DD0C))(this);
	}

};

