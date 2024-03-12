#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendInputSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendInputSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(SendInputSystem*, void*))(Il2CppBase() + 0x1364328))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(SendInputSystem*, uintptr_t))(Il2CppBase() + 0x13643F4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(SendInputSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1364440))(this, entities);
	}

};

}
