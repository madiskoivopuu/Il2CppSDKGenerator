#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<EffectEntity*>*& _effects() {
		return *(IGroup1<EffectEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(TimeEffectSystem*))(Il2CppBase() + 0x14F05C4))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(TimeEffectSystem*))(Il2CppBase() + 0x14F0708))(this);
	}

};

