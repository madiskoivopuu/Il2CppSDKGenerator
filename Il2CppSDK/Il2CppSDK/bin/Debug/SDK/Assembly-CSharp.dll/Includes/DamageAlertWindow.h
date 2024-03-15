#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DamageAlertWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageAlertWindow"));
	}

	template <typename R = uintptr_t> R& Animator() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& Life() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& _timer() {
		return *(R*)((uintptr_t)this + 0x84);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(DamageAlertWindow*))(Il2CppBase() + 0x164AD70))(this);
	}
	template <typename R = void> R ApplyDamage() {
		return ((R (*)(DamageAlertWindow*))(Il2CppBase() + 0x164AD0C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DamageAlertWindow*, float))(Il2CppBase() + 0x164AD7C))(this, deltaTime);
	}

};

