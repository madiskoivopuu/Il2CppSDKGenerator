#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class DeathRecapWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathRecapWindow"));
	}

	template <typename T = uintptr_t> T& _reviveButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _damagerStatViewPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _damagerView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _defaultDamager() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _stats() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _damagers() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DeathRecapWindow*))(Il2CppBase() + 0xEB22F4))(this);
	}
	template <typename T = Il2CppString*> T GetKey(uintptr_t damageStat) {
		return ((T (*)(DeathRecapWindow*, uintptr_t))(Il2CppBase() + 0xEB2398))(this, damageStat);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(DeathRecapWindow*))(Il2CppBase() + 0xEB24D4))(this);
	}
	template <typename T = void> T FillDamagerParams(uintptr_t damager) {
		return ((T (*)(DeathRecapWindow*, uintptr_t))(Il2CppBase() + 0xEB32CC))(this, damager);
	}
	template <typename T = void> T OnDamagerClickEvent(uintptr_t view) {
		return ((T (*)(DeathRecapWindow*, uintptr_t))(Il2CppBase() + 0xEB3B8C))(this, view);
	}
	template <typename T = void> T ShowDamager(uintptr_t view) {
		return ((T (*)(DeathRecapWindow*, uintptr_t))(Il2CppBase() + 0xEB392C))(this, view);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DeathRecapWindow*, float))(Il2CppBase() + 0xEB3B90))(this, deltaTime);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(DeathRecapWindow*))(Il2CppBase() + 0xEB3F70))(this);
	}
	template <typename T = void> T OnReviveClick() {
		return ((T (*)(DeathRecapWindow*))(Il2CppBase() + 0xEB3FA8))(this);
	}

};

}
