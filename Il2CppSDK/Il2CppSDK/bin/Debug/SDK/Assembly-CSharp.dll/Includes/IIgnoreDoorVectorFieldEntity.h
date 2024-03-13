#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIgnoreDoorVectorFieldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIgnoreDoorVectorFieldEntity"));
	}


	template <typename T = IgnoreDoorVectorFieldComponent*> T get_ignoreDoorVectorField() {
		return ((T (*)(IIgnoreDoorVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasIgnoreDoorVectorField() {
		return ((T (*)(IIgnoreDoorVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(IIgnoreDoorVectorFieldEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T ReplaceIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(IIgnoreDoorVectorFieldEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T RemoveIgnoreDoorVectorField() {
		return ((T (*)(IIgnoreDoorVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

