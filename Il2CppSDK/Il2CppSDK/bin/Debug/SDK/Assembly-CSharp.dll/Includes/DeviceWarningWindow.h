#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DeviceWarningWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceWarningWindow"));
	}

	template <typename R = uintptr_t> R& DontShowAgainToggle() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& OkButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(DeviceWarningWindow*))(Il2CppBase() + 0xEC2808))(this);
	}
	template <typename R = void> R OnDontShowAgainToggleValueChanged(bool isOn) {
		return ((R (*)(DeviceWarningWindow*, bool))(Il2CppBase() + 0xEC299C))(this, isOn);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(DeviceWarningWindow*))(Il2CppBase() + 0xEC2A70))(this);
	}
	template <typename R = void> R OnShowb__3_0() {
		return ((R (*)(DeviceWarningWindow*))(Il2CppBase() + 0xEC2B18))(this);
	}

};

