#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationGroupDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationGroupDataController"));
	}

	template <typename T = Il2CppList<PushNotificationGroupData*>*> T& _pushNotificationGroupDatas() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<PushNotificationGroupData*>*> T get_PushNotificationGroupData() {
		return ((T (*)(PushNotificationGroupDataController*))(Il2CppBase() + 0x11BAAEC))(this);
	}
	template <typename T = void> T Init(Il2CppList<PushNotificationGroupData*>* pushNotificationGroupDatas) {
		return ((T (*)(PushNotificationGroupDataController*, Il2CppList<PushNotificationGroupData*>*))(Il2CppBase() + 0x11BAAF4))(this, pushNotificationGroupDatas);
	}
	template <typename T = void> T AddOrUpdate(PushNotificationGroupData* pushNotificationGroupData) {
		return ((T (*)(PushNotificationGroupDataController*, PushNotificationGroupData*))(Il2CppBase() + 0x11BAB7C))(this, pushNotificationGroupData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNotActiveGroupName() {
		return ((T (*)(PushNotificationGroupDataController*))(Il2CppBase() + 0x11BACD4))(this);
	}

};

