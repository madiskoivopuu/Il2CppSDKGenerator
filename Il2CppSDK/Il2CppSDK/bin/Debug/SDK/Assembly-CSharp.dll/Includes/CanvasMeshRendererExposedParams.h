#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanvasMeshRendererExposedParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanvasMeshRendererExposedParams"));
	}

	template <typename T = float> T& _k_emissive() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _min_k_emissive() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& _b_emissive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _ColorPrimaryEmissive() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _ColorSecondaryEmissive() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _ShapeTexture_ST() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& canvasMeshRenderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _defaultK_emissive() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = float> T get_K_emissive() {
		return ((T (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6BEC))(this);
	}
	template <typename T = void> T set_K_emissive(float value) {
		return ((T (*)(CanvasMeshRendererExposedParams*, float))(Il2CppBase() + 0x15B6BF4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6C28))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6E20))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6EB8))(this);
	}
	template <typename T = void> T SetParams() {
		return ((T (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6C94))(this);
	}

};

}
