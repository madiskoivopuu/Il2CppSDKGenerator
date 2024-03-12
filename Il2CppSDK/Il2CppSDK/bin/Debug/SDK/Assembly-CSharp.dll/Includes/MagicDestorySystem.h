#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDestorySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDestorySystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(MagicDestorySystem*, void*))(Il2CppBase() + 0x1ACD814))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(MagicDestorySystem*, uintptr_t))(Il2CppBase() + 0x1ACDD74))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(MagicDestorySystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1ACDDE4))(this, entities);
	}

};

}
