#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanOperateHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanOperateHelper"));
	}


	template <typename T = void*> static T CanOperate(uintptr_t component, uintptr_t entity, uintptr_t target, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x15B5D5C))(0, component, entity, target, world);
	}
	template <typename T = void*> static T CanOperate_1(uintptr_t component, uintptr_t fromInventory, uintptr_t toInventory, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x15B5E94))(0, component, fromInventory, toInventory, world);
	}

};

}
