#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _entities() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(StateViewSystem*))(Il2CppBase() + 0x148F624))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(StateViewSystem*))(Il2CppBase() + 0x148F768))(this);
	}
	template <typename R = void> R Update(GameEntity* actor, GameEntity* target, Il2CppArray<Item*>* values, bool firstOf) {
		return ((R (*)(StateViewSystem*, GameEntity*, GameEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0x148F974))(this, actor, target, values, firstOf);
	}

};

