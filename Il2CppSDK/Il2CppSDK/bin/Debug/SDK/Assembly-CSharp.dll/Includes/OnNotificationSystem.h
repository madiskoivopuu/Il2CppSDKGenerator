#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnNotificationSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = UIWindowsManager*> T& _manager() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = ICollector1NotificationEntity*>*> T GetTrigger(IContext1NotificationEntity*>* context) {
		return ((T (*)(OnNotificationSystem*, IContext1NotificationEntity*>*))(Il2CppBase() + 0x11DCB20))(this, context);
	}
	template <typename T = bool> T Filter(NotificationEntity* entity) {
		return ((T (*)(OnNotificationSystem*, NotificationEntity*))(Il2CppBase() + 0x11DCC44))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<NotificationEntity*>* entities) {
		return ((T (*)(OnNotificationSystem*, Il2CppList<NotificationEntity*>*))(Il2CppBase() + 0x11DCC4C))(this, entities);
	}

};

