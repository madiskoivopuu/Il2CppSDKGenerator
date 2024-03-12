#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIBattleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIBattleComponent"));
	}

	template <typename T = Il2CppString*> T& GroupTag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& StartInEvade() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EvadeDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EvadeMagics() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& EvadeItem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DefaultActiveTargets() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Phases() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Weapons() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& WeaponSwitchCooldown() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Schedule() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DeathActiveTargets() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& DestroyChildren() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = bool> T TryGetPhase(int32_t index, uintptr_t* phase) {
		return ((T (*)(AIBattleComponent*, int32_t, uintptr_t*))(Il2CppBase() + 0x1D95ED4))(this, index, phase);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AIBattleComponent*, uintptr_t))(Il2CppBase() + 0x1D95F70))(this, target);
	}

};

}
