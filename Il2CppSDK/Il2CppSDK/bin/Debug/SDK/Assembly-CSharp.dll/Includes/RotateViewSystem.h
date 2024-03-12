#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateViewSystem"));
	}


	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(RotateViewSystem*, void*))(Il2CppBase() + 0x11A527C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(RotateViewSystem*, uintptr_t))(Il2CppBase() + 0x11A5384))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(RotateViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x11A53D0))(this, entities);
	}

};

}
