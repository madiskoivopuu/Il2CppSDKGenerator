#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VectorFieldComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorFieldComponentHelper"));
	}


	template <typename T = bool> static T HasVectorField(GameEntity* entity, bool ignoreDoor) {
		return ((T (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x15C49EC))(0, entity, ignoreDoor);
	}
	template <typename T = VectorFieldComponent*> static T GetVectorField(GameEntity* entity, bool ignoreDoor) {
		return ((T (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x15C4A10))(0, entity, ignoreDoor);
	}
	template <typename T = void> static T AddVectorField(GameEntity* entity, bool ignoreDoor, int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(void *, GameEntity*, bool, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x15C4A40))(0, entity, ignoreDoor, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> static T SetVectorFieldDirty(GameEntity* entity, bool isDirty) {
		return ((T (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x15C4A8C))(0, entity, isDirty);
	}

};

