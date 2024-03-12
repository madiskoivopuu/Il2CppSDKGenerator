#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewMagicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewMagicSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ViewMagicSystem*, void*))(Il2CppBase() + 0x15CBC20))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ViewMagicSystem*, uintptr_t))(Il2CppBase() + 0x15CBD3C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ViewMagicSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x15CBD88))(this, entities);
	}

};

}
