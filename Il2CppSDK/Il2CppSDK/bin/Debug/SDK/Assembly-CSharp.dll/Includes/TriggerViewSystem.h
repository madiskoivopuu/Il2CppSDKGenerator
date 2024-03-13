#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerViewSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1GameEntity*>*> T& _sources() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& _nextTick() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(TriggerViewSystem*))(Il2CppBase() + 0x1525CDC))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(TriggerViewSystem*))(Il2CppBase() + 0x1525EBC))(this);
	}

};

