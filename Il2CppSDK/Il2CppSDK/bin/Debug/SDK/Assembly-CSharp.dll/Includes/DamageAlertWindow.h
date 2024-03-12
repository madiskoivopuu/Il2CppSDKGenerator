#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class DamageAlertWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageAlertWindow"));
	}

	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& Life() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _timer() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(DamageAlertWindow*))(Il2CppBase() + 0x164AD70))(this);
	}
	template <typename T = void> T ApplyDamage() {
		return ((T (*)(DamageAlertWindow*))(Il2CppBase() + 0x164AD0C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DamageAlertWindow*, float))(Il2CppBase() + 0x164AD7C))(this, deltaTime);
	}

};

}
