#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicMaterialModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicMaterialModifier"));
	}

	template <typename R = uintptr_t> R& _renderer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _mainMaterialPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _maskMaterialPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> static R& _blendShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& _defaultShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = uintptr_t> static R& _maskShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> static R& _zDepthShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = int32_t> R& _renderQueue() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = uintptr_t> R get_Renderer() {
		return ((R (*)(DynamicMaterialModifier*))(Il2CppBase() + 0x1A98844))(this);
	}
	template <typename R = uintptr_t> R get_MainMaterial() {
		return ((R (*)(DynamicMaterialModifier*))(Il2CppBase() + 0x1A9884C))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(DynamicMaterialModifier*))(Il2CppBase() + 0x1A9888C))(this);
	}
	template <typename R = void> R Initialize(uintptr_t defaultShader, uintptr_t blendShader, uintptr_t maskShader, uintptr_t zDepthShader) {
		return ((R (*)(DynamicMaterialModifier*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A98B18))(this, defaultShader, blendShader, maskShader, zDepthShader);
	}
	template <typename R = void> R UpdateMaterialsParams(bool hide) {
		return ((R (*)(DynamicMaterialModifier*, bool))(Il2CppBase() + 0x1A98BC4))(this, hide);
	}

};

