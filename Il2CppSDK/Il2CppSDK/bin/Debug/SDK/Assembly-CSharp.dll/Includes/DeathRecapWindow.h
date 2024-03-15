#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DeathRecapWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathRecapWindow"));
	}

	template <typename R = TextButtonMonoBehaviour*> R& _reviveButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = DamagerStatView*> R& _damagerStatViewPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = DamagerView*> R& _damagerView() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _defaultDamager() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	 Il2CppDictionary<Il2CppString*, DamagerStat*>*& _stats() {
		return *(Il2CppDictionary<Il2CppString*, DamagerStat*>**)((uintptr_t)this + 0xA0);
	}
	 Il2CppList<DamagerStatView*>*& _damagers() {
		return *(Il2CppList<DamagerStatView*>**)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(DeathRecapWindow*))(Il2CppBase() + 0xEB22F4))(this);
	}
	template <typename R = Il2CppString*> R GetKey(DamageStatComponent* damageStat) {
		return ((R (*)(DeathRecapWindow*, DamageStatComponent*))(Il2CppBase() + 0xEB2398))(this, damageStat);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(DeathRecapWindow*))(Il2CppBase() + 0xEB24D4))(this);
	}
	template <typename R = void> R FillDamagerParams(DamagerStat* damager) {
		return ((R (*)(DeathRecapWindow*, DamagerStat*))(Il2CppBase() + 0xEB32CC))(this, damager);
	}
	template <typename R = void> R OnDamagerClickEvent(DamagerStatView* view) {
		return ((R (*)(DeathRecapWindow*, DamagerStatView*))(Il2CppBase() + 0xEB3B8C))(this, view);
	}
	template <typename R = void> R ShowDamager(DamagerStatView* view) {
		return ((R (*)(DeathRecapWindow*, DamagerStatView*))(Il2CppBase() + 0xEB392C))(this, view);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DeathRecapWindow*, float))(Il2CppBase() + 0xEB3B90))(this, deltaTime);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(DeathRecapWindow*))(Il2CppBase() + 0xEB3F70))(this);
	}
	template <typename R = void> R OnReviveClick() {
		return ((R (*)(DeathRecapWindow*))(Il2CppBase() + 0xEB3FA8))(this);
	}

};

