#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FollowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1GameEntity*>*& _followers() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(FollowSystem*))(Il2CppBase() + 0x15F9DAC))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(FollowSystem*))(Il2CppBase() + 0x15F9E28))(this);
	}

};

