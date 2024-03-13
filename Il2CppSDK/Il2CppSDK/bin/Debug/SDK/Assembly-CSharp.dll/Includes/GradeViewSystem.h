#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeViewSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(GradeViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x12E27CC))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(GradeViewSystem*, GameEntity*))(Il2CppBase() + 0x12E2824))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(GradeViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x12E2840))(this, entities);
	}
	template <typename T = void> T ChangeAnimation(GameEntity* entity, int32_t grade) {
		return ((T (*)(GradeViewSystem*, GameEntity*, int32_t))(Il2CppBase() + 0x12E29AC))(this, entity, grade);
	}
	template <typename T = void> T ChangeAddExpByGrade(GameEntity* entity, GameDataEntity* entityData, int32_t grade) {
		return ((T (*)(GradeViewSystem*, GameEntity*, GameDataEntity*, int32_t))(Il2CppBase() + 0x12E2D5C))(this, entity, entityData, grade);
	}

};

