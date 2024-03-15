#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIgnoreDoorVectorFieldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIgnoreDoorVectorFieldEntity"));
	}


	template <typename R = IgnoreDoorVectorFieldComponent*> R get_ignoreDoorVectorField() {
		return ((R (*)(IIgnoreDoorVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasIgnoreDoorVectorField() {
		return ((R (*)(IIgnoreDoorVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(IIgnoreDoorVectorFieldEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R ReplaceIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(IIgnoreDoorVectorFieldEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R RemoveIgnoreDoorVectorField() {
		return ((R (*)(IIgnoreDoorVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

