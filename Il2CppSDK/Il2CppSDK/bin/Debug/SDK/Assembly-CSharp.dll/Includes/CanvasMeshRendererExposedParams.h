#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanvasMeshRendererExposedParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanvasMeshRendererExposedParams"));
	}

	template <typename R = float> R& _k_emissive() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _min_k_emissive() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& _b_emissive() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _ColorPrimaryEmissive() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = uintptr_t> R& _ColorSecondaryEmissive() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = uintptr_t> R& _ShapeTexture_ST() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = CanvasMeshRenderer*> R& canvasMeshRenderer() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& _defaultK_emissive() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = float> R get_K_emissive() {
		return ((R (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6BEC))(this);
	}
	template <typename R = void> R set_K_emissive(float value) {
		return ((R (*)(CanvasMeshRendererExposedParams*, float))(Il2CppBase() + 0x15B6BF4))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6C28))(this);
	}
	template <typename R = void> R OnValidate() {
		return ((R (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6E20))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6EB8))(this);
	}
	template <typename R = void> R SetParams() {
		return ((R (*)(CanvasMeshRendererExposedParams*))(Il2CppBase() + 0x15B6C94))(this);
	}

};

