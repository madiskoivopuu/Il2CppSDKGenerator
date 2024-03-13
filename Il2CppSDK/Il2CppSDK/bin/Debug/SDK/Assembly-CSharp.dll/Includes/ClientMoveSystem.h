#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientMoveSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientMoveSystem"));
	}

	template <typename T = ITimeManager*> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ArenaClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IGroup1InputEntity*>*> T& _inputs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = IGroup1GameEntity*>*> T& _targets() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = InputTickComparer*> static T& _inputTickComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ClientMoveSystem*))(Il2CppBase() + 0xE19EFC))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ClientMoveSystem*))(Il2CppBase() + 0xE19FC8))(this);
	}
	template <typename T = void> T UpdateInput(GameEntity* avatar, int64_t now) {
		return ((T (*)(ClientMoveSystem*, GameEntity*, int64_t))(Il2CppBase() + 0xE1A958))(this, avatar, now);
	}

};

