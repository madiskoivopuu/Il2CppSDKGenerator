#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetTriggerConditionsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetTriggerConditionsComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RelationshipTypes> R& Relationship() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& IsAggroTarget() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	 Nullable1<float>*& HpCoefLess() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x28);
	}
	 Nullable1<float>*& HpCoefMore() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& MinDistance() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& MaxDistance() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	 Nullable1<bool>*& IsTriggerOwner() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x40);
	}
	 Nullable1<float>*& ViewAngle() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x44);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TargetTriggerConditionsComponent*, Il2CppObject*))(Il2CppBase() + 0x16A5DDC))(this, target);
	}
	template <typename R = bool> R IsValid(ICommonContexts* world, GameEntity* target, MagicEntity* magicTrigger, GameEntity* source) {
		return ((R (*)(TargetTriggerConditionsComponent*, ICommonContexts*, GameEntity*, MagicEntity*, GameEntity*))(Il2CppBase() + 0x16A5EC8))(this, world, target, magicTrigger, source);
	}
	template <typename R = bool> R IsOwner(ICommonContexts* world, MagicEntity* magicEntity, GameEntity* target) {
		return ((R (*)(TargetTriggerConditionsComponent*, ICommonContexts*, MagicEntity*, GameEntity*))(Il2CppBase() + 0x16A62FC))(this, world, magicEntity, target);
	}

};

