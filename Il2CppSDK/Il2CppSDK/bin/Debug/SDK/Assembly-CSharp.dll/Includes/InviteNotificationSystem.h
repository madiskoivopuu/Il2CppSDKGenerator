#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteNotificationSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<InviteEntity*>* GetTrigger(IContext1<InviteEntity*>* context) {
		return ((ICollector1<InviteEntity*>* (*)(InviteNotificationSystem*, IContext1<InviteEntity*>*))(Il2CppBase() + 0x12475F8))(this, context);
	}
	template <typename R = bool> R Filter(InviteEntity* entity) {
		return ((R (*)(InviteNotificationSystem*, InviteEntity*))(Il2CppBase() + 0x124764C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<InviteEntity*>* entities) {
		return ((R (*)(InviteNotificationSystem*, Il2CppList<InviteEntity*>*))(Il2CppBase() + 0x12477EC))(this, entities);
	}

};

