#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthBarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthBarView"));
	}

	template <typename T = uintptr_t> T& _healthProgress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _shieldProgress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1float>*> T& _oldHpCoef() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Nullable1float>*> T& _oldMaxHealth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Nullable1float>*> T& _oldHealth() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Nullable1float>*> T& _oldShield() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T UpdateView(GameEntity* entity, AccountEntity* ownerAccount, bool active, Nullable1float>* overideHpCoef) {
		return ((T (*)(HealthBarView*, GameEntity*, AccountEntity*, bool, Nullable1float>*))(Il2CppBase() + 0x128ACD8))(this, entity, ownerAccount, active, overideHpCoef);
	}

};

