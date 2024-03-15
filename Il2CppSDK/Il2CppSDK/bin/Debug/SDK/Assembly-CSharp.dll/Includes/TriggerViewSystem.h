#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1GameEntity*>*& _sources() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& _nextTick() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(TriggerViewSystem*))(Il2CppBase() + 0x1525CDC))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(TriggerViewSystem*))(Il2CppBase() + 0x1525EBC))(this);
	}

};

