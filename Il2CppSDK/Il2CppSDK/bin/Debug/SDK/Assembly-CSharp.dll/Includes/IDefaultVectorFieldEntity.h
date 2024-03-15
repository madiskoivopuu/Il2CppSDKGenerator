#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDefaultVectorFieldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDefaultVectorFieldEntity"));
	}


	template <typename R = DefaultVectorFieldComponent*> R get_defaultVectorField() {
		return ((R (*)(IDefaultVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDefaultVectorField() {
		return ((R (*)(IDefaultVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(IDefaultVectorFieldEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R ReplaceDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(IDefaultVectorFieldEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R RemoveDefaultVectorField() {
		return ((R (*)(IDefaultVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

