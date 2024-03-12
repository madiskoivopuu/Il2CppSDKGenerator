#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionCloseWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionCloseWindowSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(DestroyActionCloseWindowSystem*, void*))(Il2CppBase() + 0xEBA608))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(DestroyActionCloseWindowSystem*, uintptr_t))(Il2CppBase() + 0xEBA76C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(DestroyActionCloseWindowSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xEBA7B8))(this, actions);
	}

};

}
