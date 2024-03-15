#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnNotificationSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = UIWindowsManager*> R& _manager() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 ICollector1NotificationEntity*>* GetTrigger(IContext1NotificationEntity*>* context) {
		return ((ICollector1NotificationEntity*>* (*)(OnNotificationSystem*, IContext1NotificationEntity*>*))(Il2CppBase() + 0x11DCB20))(this, context);
	}
	template <typename R = bool> R Filter(NotificationEntity* entity) {
		return ((R (*)(OnNotificationSystem*, NotificationEntity*))(Il2CppBase() + 0x11DCC44))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<NotificationEntity*>* entities) {
		return ((R (*)(OnNotificationSystem*, Il2CppList<NotificationEntity*>*))(Il2CppBase() + 0x11DCC4C))(this, entities);
	}

};

