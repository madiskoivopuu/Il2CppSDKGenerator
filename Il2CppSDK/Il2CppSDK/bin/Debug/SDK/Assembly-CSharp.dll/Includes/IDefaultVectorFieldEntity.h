#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDefaultVectorFieldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDefaultVectorFieldEntity"));
	}


	template <typename T = uintptr_t> T get_defaultVectorField() {
		return ((T (*)(IDefaultVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDefaultVectorField() {
		return ((T (*)(IDefaultVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(IDefaultVectorFieldEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T ReplaceDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(IDefaultVectorFieldEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x0))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T RemoveDefaultVectorField() {
		return ((T (*)(IDefaultVectorFieldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
