#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(GradeViewSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x12E27CC))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(GradeViewSystem*, GameEntity*))(Il2CppBase() + 0x12E2824))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(GradeViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x12E2840))(this, entities);
	}
	template <typename R = void> R ChangeAnimation(GameEntity* entity, int32_t grade) {
		return ((R (*)(GradeViewSystem*, GameEntity*, int32_t))(Il2CppBase() + 0x12E29AC))(this, entity, grade);
	}
	template <typename R = void> R ChangeAddExpByGrade(GameEntity* entity, GameDataEntity* entityData, int32_t grade) {
		return ((R (*)(GradeViewSystem*, GameEntity*, GameDataEntity*, int32_t))(Il2CppBase() + 0x12E2D5C))(this, entity, entityData, grade);
	}

};

