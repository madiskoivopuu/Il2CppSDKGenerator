#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotifficationGroupHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotifficationGroupHelper"));
	}

	template <typename R = PushNotificationGroupData*> R& NotificationGroupData() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action1PushNotificationGroupData*>*& OnPushNotifficationGroupStatusChanged() {
		return *(Action1PushNotificationGroupData*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _toggle() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R add_OnPushNotifficationGroupStatusChanged(Action1PushNotificationGroupData*>* value) {
		return ((R (*)(PushNotifficationGroupHelper*, Action1PushNotificationGroupData*>*))(Il2CppBase() + 0x11BA384))(this, value);
	}
	template <typename R = void> R remove_OnPushNotifficationGroupStatusChanged(Action1PushNotificationGroupData*>* value) {
		return ((R (*)(PushNotifficationGroupHelper*, Action1PushNotificationGroupData*>*))(Il2CppBase() + 0x11BA424))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PushNotifficationGroupHelper*))(Il2CppBase() + 0x11BA4C4))(this);
	}
	template <typename R = void> R OnToggleValueChanged(bool isOn) {
		return ((R (*)(PushNotifficationGroupHelper*, bool))(Il2CppBase() + 0x11BA5B8))(this, isOn);
	}
	template <typename R = void> R UpdateGroupData(PushNotificationGroupData* groupData) {
		return ((R (*)(PushNotifficationGroupHelper*, PushNotificationGroupData*))(Il2CppBase() + 0x11BA768))(this, groupData);
	}
	template <typename R = void> R UpdateGroupData_1(bool isOn) {
		return ((R (*)(PushNotifficationGroupHelper*, bool))(Il2CppBase() + 0x11BA8B8))(this, isOn);
	}

};

