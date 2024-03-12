#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationGroupDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationGroupDataController"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _pushNotificationGroupDatas() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_PushNotificationGroupData() {
		return ((T (*)(PushNotificationGroupDataController*))(Il2CppBase() + 0x11BAAEC))(this);
	}
	template <typename T = void> T Init(Il2CppList<uintptr_t>* pushNotificationGroupDatas) {
		return ((T (*)(PushNotificationGroupDataController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x11BAAF4))(this, pushNotificationGroupDatas);
	}
	template <typename T = void> T AddOrUpdate(uintptr_t pushNotificationGroupData) {
		return ((T (*)(PushNotificationGroupDataController*, uintptr_t))(Il2CppBase() + 0x11BAB7C))(this, pushNotificationGroupData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNotActiveGroupName() {
		return ((T (*)(PushNotificationGroupDataController*))(Il2CppBase() + 0x11BACD4))(this);
	}

};

}
