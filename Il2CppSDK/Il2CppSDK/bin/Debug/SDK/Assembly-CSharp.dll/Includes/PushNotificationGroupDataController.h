#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationGroupDataController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationGroupDataController"));
	}

	 Il2CppList<PushNotificationGroupData*>*& _pushNotificationGroupDatas() {
		return *(Il2CppList<PushNotificationGroupData*>**)((uintptr_t)this + 0x10);
	}

	 Il2CppList<PushNotificationGroupData*>* get_PushNotificationGroupData() {
		return ((Il2CppList<PushNotificationGroupData*>* (*)(PushNotificationGroupDataController*))(Il2CppBase() + 0x11BAAEC))(this);
	}
	template <typename R = void> R Init(Il2CppList<PushNotificationGroupData*>* pushNotificationGroupDatas) {
		return ((R (*)(PushNotificationGroupDataController*, Il2CppList<PushNotificationGroupData*>*))(Il2CppBase() + 0x11BAAF4))(this, pushNotificationGroupDatas);
	}
	template <typename R = void> R AddOrUpdate(PushNotificationGroupData* pushNotificationGroupData) {
		return ((R (*)(PushNotificationGroupDataController*, PushNotificationGroupData*))(Il2CppBase() + 0x11BAB7C))(this, pushNotificationGroupData);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R GetNotActiveGroupName() {
		return ((R (*)(PushNotificationGroupDataController*))(Il2CppBase() + 0x11BACD4))(this);
	}

};

