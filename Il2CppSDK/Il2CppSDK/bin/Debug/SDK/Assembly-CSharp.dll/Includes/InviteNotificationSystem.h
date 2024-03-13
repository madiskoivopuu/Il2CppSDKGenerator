#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteNotificationSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1InviteEntity*>*> T GetTrigger(IContext1InviteEntity*>* context) {
		return ((T (*)(InviteNotificationSystem*, IContext1InviteEntity*>*))(Il2CppBase() + 0x12475F8))(this, context);
	}
	template <typename T = bool> T Filter(InviteEntity* entity) {
		return ((T (*)(InviteNotificationSystem*, InviteEntity*))(Il2CppBase() + 0x124764C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<InviteEntity*>* entities) {
		return ((T (*)(InviteNotificationSystem*, Il2CppList<InviteEntity*>*))(Il2CppBase() + 0x12477EC))(this, entities);
	}

};

