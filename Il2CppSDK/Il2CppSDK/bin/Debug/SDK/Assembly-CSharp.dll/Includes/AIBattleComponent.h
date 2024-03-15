#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIBattleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIBattleComponent"));
	}

	template <typename R = Il2CppString*> R& GroupTag() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& StartInEvade() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& EvadeDelay() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& EvadeMagics() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& EvadeItem() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<ActiveTarget*>*> R& DefaultActiveTargets() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<Phase*>*> R& Phases() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<WeaponRecord*>*> R& Weapons() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& WeaponSwitchCooldown() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<ScheduleRecord*>*> R& Schedule() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<ActiveTarget*>*> R& DeathActiveTargets() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& DestroyChildren() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = bool> R TryGetPhase(int32_t index, uintptr_t* phase) {
		return ((R (*)(AIBattleComponent*, int32_t, uintptr_t*))(Il2CppBase() + 0x1D95ED4))(this, index, phase);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AIBattleComponent*, Il2CppObject*))(Il2CppBase() + 0x1D95F70))(this, target);
	}

};

