#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VectorFieldComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorFieldComponentHelper"));
	}


	template <typename R = bool> static R HasVectorField(GameEntity* entity, bool ignoreDoor) {
		return ((R (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x15C49EC))(0, entity, ignoreDoor);
	}
	template <typename R = VectorFieldComponent*> static R GetVectorField(GameEntity* entity, bool ignoreDoor) {
		return ((R (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x15C4A10))(0, entity, ignoreDoor);
	}
	template <typename R = void> static R AddVectorField(GameEntity* entity, bool ignoreDoor, int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(void *, GameEntity*, bool, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x15C4A40))(0, entity, ignoreDoor, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> static R SetVectorFieldDirty(GameEntity* entity, bool isDirty) {
		return ((R (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x15C4A8C))(0, entity, isDirty);
	}

};

