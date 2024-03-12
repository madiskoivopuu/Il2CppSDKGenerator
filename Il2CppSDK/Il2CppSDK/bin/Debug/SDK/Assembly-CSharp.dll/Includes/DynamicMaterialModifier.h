#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicMaterialModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicMaterialModifier"));
	}

	template <typename T = uintptr_t> T& _renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _mainMaterialPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _maskMaterialPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _blendShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _defaultShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _maskShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _zDepthShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> T& _renderQueue() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_Renderer() {
		return ((T (*)(DynamicMaterialModifier*))(Il2CppBase() + 0x1A98844))(this);
	}
	template <typename T = uintptr_t> T get_MainMaterial() {
		return ((T (*)(DynamicMaterialModifier*))(Il2CppBase() + 0x1A9884C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DynamicMaterialModifier*))(Il2CppBase() + 0x1A9888C))(this);
	}
	template <typename T = void> T Initialize(uintptr_t defaultShader, uintptr_t blendShader, uintptr_t maskShader, uintptr_t zDepthShader) {
		return ((T (*)(DynamicMaterialModifier*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A98B18))(this, defaultShader, blendShader, maskShader, zDepthShader);
	}
	template <typename T = void> T UpdateMaterialsParams(bool hide) {
		return ((T (*)(DynamicMaterialModifier*, bool))(Il2CppBase() + 0x1A98BC4))(this, hide);
	}

};

}
