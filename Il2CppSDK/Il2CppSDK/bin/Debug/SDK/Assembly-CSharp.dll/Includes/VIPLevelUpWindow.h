#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class VIPLevelUpWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPLevelUpWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& OldVipLevel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& NewVipLevel() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(VIPLevelUpWindow*))(Il2CppBase() + 0x15C0F44))(this);
	}
	template <typename R = void> R OnCloseButtonClick() {
		return ((R (*)(VIPLevelUpWindow*))(Il2CppBase() + 0x15C0FE0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(VIPLevelUpWindow*))(Il2CppBase() + 0x15C104C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(VIPLevelUpWindow*, float))(Il2CppBase() + 0x15C13B4))(this, deltaTime);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(VIPLevelUpWindow*))(Il2CppBase() + 0x15C1100))(this);
	}

};

