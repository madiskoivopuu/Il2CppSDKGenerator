#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteNotificationSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(InviteNotificationSystem*, void*))(Il2CppBase() + 0x12475F8))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(InviteNotificationSystem*, uintptr_t))(Il2CppBase() + 0x124764C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(InviteNotificationSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x12477EC))(this, entities);
	}

};

}
