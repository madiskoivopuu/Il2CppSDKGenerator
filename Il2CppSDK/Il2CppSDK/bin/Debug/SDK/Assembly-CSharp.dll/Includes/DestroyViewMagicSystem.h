#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyViewMagicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyViewMagicSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(DestroyViewMagicSystem*, void*))(Il2CppBase() + 0xEBF054))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(DestroyViewMagicSystem*, uintptr_t))(Il2CppBase() + 0xEBF120))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* magics) {
		return ((T (*)(DestroyViewMagicSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xEBF14C))(this, magics);
	}

};

}
