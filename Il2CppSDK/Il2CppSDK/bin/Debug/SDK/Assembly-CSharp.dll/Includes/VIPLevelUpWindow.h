#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class VIPLevelUpWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPLevelUpWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& OldVipLevel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NewVipLevel() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VIPLevelUpWindow*))(Il2CppBase() + 0x15C0F44))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(VIPLevelUpWindow*))(Il2CppBase() + 0x15C0FE0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(VIPLevelUpWindow*))(Il2CppBase() + 0x15C104C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(VIPLevelUpWindow*, float))(Il2CppBase() + 0x15C13B4))(this, deltaTime);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(VIPLevelUpWindow*))(Il2CppBase() + 0x15C1100))(this);
	}

};

}
