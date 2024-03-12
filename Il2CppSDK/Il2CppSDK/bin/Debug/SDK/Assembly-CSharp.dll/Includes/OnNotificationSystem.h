#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnNotificationSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _manager() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(OnNotificationSystem*, void*))(Il2CppBase() + 0x11DCB20))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(OnNotificationSystem*, uintptr_t))(Il2CppBase() + 0x11DCC44))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(OnNotificationSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x11DCC4C))(this, entities);
	}

};

}
