#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddMinimapViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddMinimapViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(AddMinimapViewSystem*, void*))(Il2CppBase() + 0x18AF6BC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(AddMinimapViewSystem*, uintptr_t))(Il2CppBase() + 0x18AF7E0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(AddMinimapViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x18AF82C))(this, entities);
	}

};

}
