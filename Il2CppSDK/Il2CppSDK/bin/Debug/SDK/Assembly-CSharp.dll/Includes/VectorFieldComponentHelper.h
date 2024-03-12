#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VectorFieldComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorFieldComponentHelper"));
	}


	template <typename T = bool> static T HasVectorField(uintptr_t entity, bool ignoreDoor) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x15C49EC))(0, entity, ignoreDoor);
	}
	template <typename T = uintptr_t> static T GetVectorField(uintptr_t entity, bool ignoreDoor) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x15C4A10))(0, entity, ignoreDoor);
	}
	template <typename T = void> static T AddVectorField(uintptr_t entity, bool ignoreDoor, int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(void *, uintptr_t, bool, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x15C4A40))(0, entity, ignoreDoor, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> static T SetVectorFieldDirty(uintptr_t entity, bool isDirty) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x15C4A8C))(0, entity, isDirty);
	}

};

}
