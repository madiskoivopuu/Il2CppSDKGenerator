#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BawlSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BawlSystem"));
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
		return ((R (*)(BawlSystem*))(Il2CppBase() + 0x16B90E8))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(BawlSystem*))(Il2CppBase() + 0x16B92C8))(this);
	}

};

