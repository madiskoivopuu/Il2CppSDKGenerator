#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OrientationViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OrientationViewSystem"));
	}


	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(OrientationViewSystem*, void*))(Il2CppBase() + 0x11E49FC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(OrientationViewSystem*, uintptr_t))(Il2CppBase() + 0x11E4B04))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(OrientationViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x11E4B64))(this, entities);
	}

};

}
