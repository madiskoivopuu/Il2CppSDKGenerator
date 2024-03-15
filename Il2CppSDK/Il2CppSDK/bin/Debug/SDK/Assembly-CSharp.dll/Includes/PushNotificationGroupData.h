#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationGroupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationGroupData"));
	}

	template <typename R = bool> R& IsOn() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = PushNotificationGroupName> R& GroupNameEnum() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = Il2CppString*> R get_GroupName() {
		return ((R (*)(PushNotificationGroupData*))(Il2CppBase() + 0x11BA6DC))(this);
	}
	template <typename R = PushNotificationGroupData*> R Clone() {
		return ((R (*)(PushNotificationGroupData*))(Il2CppBase() + 0x11BAA60))(this);
	}
	template <typename R = void> R Update(PushNotificationGroupData* groupData) {
		return ((R (*)(PushNotificationGroupData*, PushNotificationGroupData*))(Il2CppBase() + 0x11BA7B0))(this, groupData);
	}

};

