#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientMoveSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientMoveSystem"));
	}

	template <typename R = ITimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 IGroup1InputEntity*>*& _inputs() {
		return *(IGroup1InputEntity*>**)((uintptr_t)this + 0x20);
	}
	 IGroup1GameEntity*>*& _targets() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = InputTickComparer*> static R& _inputTickComparer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ClientMoveSystem*))(Il2CppBase() + 0xE19EFC))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ClientMoveSystem*))(Il2CppBase() + 0xE19FC8))(this);
	}
	template <typename R = void> R UpdateInput(GameEntity* avatar, int64_t now) {
		return ((R (*)(ClientMoveSystem*, GameEntity*, int64_t))(Il2CppBase() + 0xE1A958))(this, avatar, now);
	}

};

