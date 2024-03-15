#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthBarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthBarView"));
	}

	template <typename R = uintptr_t> R& _healthProgress() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _shieldProgress() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1float>*& _oldHpCoef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x28);
	}
	 Nullable1float>*& _oldMaxHealth() {
		return *(Nullable1float>**)((uintptr_t)this + 0x30);
	}
	 Nullable1float>*& _oldHealth() {
		return *(Nullable1float>**)((uintptr_t)this + 0x38);
	}
	 Nullable1float>*& _oldShield() {
		return *(Nullable1float>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R UpdateView(GameEntity* entity, AccountEntity* ownerAccount, bool active, Nullable1float>* overideHpCoef) {
		return ((R (*)(HealthBarView*, GameEntity*, AccountEntity*, bool, Nullable1float>*))(Il2CppBase() + 0x128ACD8))(this, entity, ownerAccount, active, overideHpCoef);
	}

};

