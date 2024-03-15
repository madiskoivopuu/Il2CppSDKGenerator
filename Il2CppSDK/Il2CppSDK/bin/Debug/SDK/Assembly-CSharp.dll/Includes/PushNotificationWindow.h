#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PushNotificationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ApplyButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppArray<PushNotifficationGroupHelper*>*> R& PushNotifficationGroupHelpers() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = PushNotificationGroupDataController*> R& _currentGroupSettings() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = PushNotificationGroupDataController*> R& _changedGroupSettings() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BAF10))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BB140))(this);
	}
	template <typename R = void> R InitNotificationGroupSettings() {
		return ((R (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BB1AC))(this);
	}
	template <typename R = void> R OnPushNotificationGroupChangeHandler(PushNotificationGroupData* pushNotificationGroupData) {
		return ((R (*)(PushNotificationWindow*, PushNotificationGroupData*))(Il2CppBase() + 0x11BB478))(this, pushNotificationGroupData);
	}
	template <typename R = void> R ApplyPushNotificationGroupChanges(PushNotificationGroupData* pushNotificationGroupData) {
		return ((R (*)(PushNotificationWindow*, PushNotificationGroupData*))(Il2CppBase() + 0x11BB54C))(this, pushNotificationGroupData);
	}
	template <typename R = bool> R IsPushGroupSettingWasChanged() {
		return ((R (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BB5CC))(this);
	}
	template <typename R = void> R OnApplyButtonClick() {
		return ((R (*)(PushNotificationWindow*))(Il2CppBase() + 0x11BB6A8))(this);
	}
	 Il2CppList<PushNotificationGroupData*>* GetPushNotificationGroupList(bool cloned) {
		return ((Il2CppList<PushNotificationGroupData*>* (*)(PushNotificationWindow*, bool))(Il2CppBase() + 0x11BB36C))(this, cloned);
	}

};

