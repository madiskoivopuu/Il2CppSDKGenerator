#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DeviceWarningWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceWarningWindow"));
	}

	template <typename T = uintptr_t> T& DontShowAgainToggle() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& OkButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(DeviceWarningWindow*))(Il2CppBase() + 0xEC2808))(this);
	}
	template <typename T = void> T OnDontShowAgainToggleValueChanged(bool isOn) {
		return ((T (*)(DeviceWarningWindow*, bool))(Il2CppBase() + 0xEC299C))(this, isOn);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(DeviceWarningWindow*))(Il2CppBase() + 0xEC2A70))(this);
	}
	template <typename T = void> T OnShowb__3_0() {
		return ((T (*)(DeviceWarningWindow*))(Il2CppBase() + 0xEC2B18))(this);
	}

};

