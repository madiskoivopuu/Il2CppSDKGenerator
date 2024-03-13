#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BawlSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BawlSystem"));
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
		return ((T (*)(BawlSystem*))(Il2CppBase() + 0x16B90E8))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(BawlSystem*))(Il2CppBase() + 0x16B92C8))(this);
	}

};

