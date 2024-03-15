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
	 Nullable1<float>*& _oldHpCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x28);
	}
	 Nullable1<float>*& _oldMaxHealth() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x30);
	}
	 Nullable1<float>*& _oldHealth() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x38);
	}
	 Nullable1<float>*& _oldShield() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R UpdateView(GameEntity* entity, AccountEntity* ownerAccount, bool active, Nullable1<float>* overideHpCoef) {
		return ((R (*)(HealthBarView*, GameEntity*, AccountEntity*, bool, Nullable1<float>*))(Il2CppBase() + 0x128ACD8))(this, entity, ownerAccount, active, overideHpCoef);
	}

};

