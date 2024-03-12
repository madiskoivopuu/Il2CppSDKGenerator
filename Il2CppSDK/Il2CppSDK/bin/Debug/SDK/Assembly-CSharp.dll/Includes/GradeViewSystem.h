#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(GradeViewSystem*, void*))(Il2CppBase() + 0x12E27CC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(GradeViewSystem*, uintptr_t))(Il2CppBase() + 0x12E2824))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(GradeViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x12E2840))(this, entities);
	}
	template <typename T = void> T ChangeAnimation(uintptr_t entity, int32_t grade) {
		return ((T (*)(GradeViewSystem*, uintptr_t, int32_t))(Il2CppBase() + 0x12E29AC))(this, entity, grade);
	}
	template <typename T = void> T ChangeAddExpByGrade(uintptr_t entity, uintptr_t entityData, int32_t grade) {
		return ((T (*)(GradeViewSystem*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x12E2D5C))(this, entity, entityData, grade);
	}

};

}
