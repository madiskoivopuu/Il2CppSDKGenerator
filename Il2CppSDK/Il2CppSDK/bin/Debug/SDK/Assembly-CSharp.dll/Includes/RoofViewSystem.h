#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoofViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoofViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _roofs() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(RoofViewSystem*))(Il2CppBase() + 0x11A2F90))(this);
	}
	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(RoofViewSystem*, void*))(Il2CppBase() + 0x11A300C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(RoofViewSystem*, uintptr_t))(Il2CppBase() + 0x11A3130))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(RoofViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x11A314C))(this, entities);
	}

};

}
