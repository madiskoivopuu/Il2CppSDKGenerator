#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoModeSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoModeSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> static R& AggroRadius() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 IGroup1GameEntity*>*& _miningTargets() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x18);
	}
	 Il2CppList<Resource*>*& _resources() {
		return *(Il2CppList<Resource*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(AutoModeSystem*))(Il2CppBase() + 0x1A642A4))(this);
	}
	template <typename R = void> R SetAggroTarget(int32_t id) {
		return ((R (*)(AutoModeSystem*, int32_t))(Il2CppBase() + 0x1A64484))(this, id);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(AutoModeSystem*))(Il2CppBase() + 0x1A644E0))(this);
	}
	template <typename R = GameEntity*> R SelectAttackTarget(GameEntity* entity, EntitiesWithPositionNear1GameEntity*>* entitiesNear) {
		return ((R (*)(AutoModeSystem*, GameEntity*, EntitiesWithPositionNear1GameEntity*>*))(Il2CppBase() + 0x1A64B64))(this, entity, entitiesNear);
	}
	 ValueTuple2CantCollectReason*, GameEntity*>* SelectResourceTarget(GameEntity* entity) {
		return ((ValueTuple2CantCollectReason*, GameEntity*>* (*)(AutoModeSystem*, GameEntity*))(Il2CppBase() + 0x1A650B4))(this, entity);
	}

};

