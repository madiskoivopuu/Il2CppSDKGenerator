#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeUpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpComponent"));
	}

	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<ConditionText>*> R& Conditions() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Resource>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& ToItemName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& SilverPrice() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& Chance() {
		return *(R*)((uintptr_t)this + 0x3C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GradeUpComponent*, Il2CppObject*))(Il2CppBase() + 0x12E21A8))(this, target);
	}
	 ValueTuple2<bool, Il2CppString*>* CheckConditions(ICommonContexts* world, GameEntity* player) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(GradeUpComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x12E2298))(this, world, player);
	}
	template <typename R = bool> R CheckResources(ICommonContexts* world, GameEntity* player) {
		return ((R (*)(GradeUpComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x12E23BC))(this, world, player);
	}
	template <typename R = bool> R CheckResourcesAndConditions(ICommonContexts* world, GameEntity* player) {
		return ((R (*)(GradeUpComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x12E2404))(this, world, player);
	}

};

