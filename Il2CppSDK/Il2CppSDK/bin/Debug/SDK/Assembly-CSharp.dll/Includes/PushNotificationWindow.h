#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class PushNotificationWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ApplyButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PushNotifficationGroupHelpers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _currentGroupSettings() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _changedGroupSettings() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BAF10))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BB140))(this);
	}
	template <typename T = void> T InitNotificationGroupSettings() {
		return ((T (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BB1AC))(this);
	}
	template <typename T = void> T OnPushNotificationGroupChangeHandler(uintptr_t pushNotificationGroupData) {
		return ((T (*)(PushNotificationWindow*, uintptr_t))(Il2CppBase() + 0x11BB478))(this, pushNotificationGroupData);
	}
	template <typename T = void> T ApplyPushNotificationGroupChanges(uintptr_t pushNotificationGroupData) {
		return ((T (*)(PushNotificationWindow*, uintptr_t))(Il2CppBase() + 0x11BB54C))(this, pushNotificationGroupData);
	}
	template <typename T = bool> T IsPushGroupSettingWasChanged() {
		return ((T (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BB5CC))(this);
	}
	template <typename T = void> T OnApplyButtonClick() {
		return ((T (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BB6A8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPushNotificationGroupList(bool cloned) {
		return ((T (*)(PushNotificationWindow*, bool))(Il2CppBase() + 0x11BB36C))(this, cloned);
	}

};

}
