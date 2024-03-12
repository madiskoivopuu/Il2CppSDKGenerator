#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotifficationGroupHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotifficationGroupHelper"));
	}

	template <typename T = uintptr_t> T& NotificationGroupData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& OnPushNotifficationGroupStatusChanged() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _toggle() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_OnPushNotifficationGroupStatusChanged(void* value) {
		return ((T (*)(PushNotifficationGroupHelper*, void*))(Il2CppBase() + 0x11BA384))(this, value);
	}
	template <typename T = void> T remove_OnPushNotifficationGroupStatusChanged(void* value) {
		return ((T (*)(PushNotifficationGroupHelper*, void*))(Il2CppBase() + 0x11BA424))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PushNotifficationGroupHelper*))(Il2CppBase() + 0x11BA4C4))(this);
	}
	template <typename T = void> T OnToggleValueChanged(bool isOn) {
		return ((T (*)(PushNotifficationGroupHelper*, bool))(Il2CppBase() + 0x11BA5B8))(this, isOn);
	}
	template <typename T = void> T UpdateGroupData(uintptr_t groupData) {
		return ((T (*)(PushNotifficationGroupHelper*, uintptr_t))(Il2CppBase() + 0x11BA768))(this, groupData);
	}
	template <typename T = void> T UpdateGroupData_1(bool isOn) {
		return ((T (*)(PushNotifficationGroupHelper*, bool))(Il2CppBase() + 0x11BA8B8))(this, isOn);
	}

};

}
