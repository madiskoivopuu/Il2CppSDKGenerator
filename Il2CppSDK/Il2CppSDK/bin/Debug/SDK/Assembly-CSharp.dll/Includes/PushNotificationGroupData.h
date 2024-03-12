#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationGroupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationGroupData"));
	}

	template <typename T = bool> T& IsOn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& GroupNameEnum() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_GroupName() {
		return ((T (*)(PushNotificationGroupData*))(Il2CppBase() + 0x11BA6DC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PushNotificationGroupData*))(Il2CppBase() + 0x11BAA60))(this);
	}
	template <typename T = void> T Update(uintptr_t groupData) {
		return ((T (*)(PushNotificationGroupData*, uintptr_t))(Il2CppBase() + 0x11BA7B0))(this, groupData);
	}

};

}
