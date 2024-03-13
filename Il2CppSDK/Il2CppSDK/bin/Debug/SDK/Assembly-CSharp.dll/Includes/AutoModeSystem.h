#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoModeSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoModeSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& AggroRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IGroup1GameEntity*>*> T& _miningTargets() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Resource*>*> T& _resources() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(AutoModeSystem*))(Il2CppBase() + 0x1A642A4))(this);
	}
	template <typename T = void> T SetAggroTarget(int32_t id) {
		return ((T (*)(AutoModeSystem*, int32_t))(Il2CppBase() + 0x1A64484))(this, id);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(AutoModeSystem*))(Il2CppBase() + 0x1A644E0))(this);
	}
	template <typename T = GameEntity*> T SelectAttackTarget(GameEntity* entity, EntitiesWithPositionNear1GameEntity*>* entitiesNear) {
		return ((T (*)(AutoModeSystem*, GameEntity*, EntitiesWithPositionNear1GameEntity*>*))(Il2CppBase() + 0x1A64B64))(this, entity, entitiesNear);
	}
	template <typename T = ValueTuple2CantCollectReason*, GameEntity*>*> T SelectResourceTarget(GameEntity* entity) {
		return ((T (*)(AutoModeSystem*, GameEntity*))(Il2CppBase() + 0x1A650B4))(this, entity);
	}

};

