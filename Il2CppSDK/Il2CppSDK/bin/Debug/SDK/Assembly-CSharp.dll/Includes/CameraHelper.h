#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraHelper"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _cameras() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _mainCamera() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _weatherBlizzard() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _weatherSnow() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _weatherRain() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _weatherRift() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _weatherFire() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _minCameraZoom() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = float> R& _zoomRange() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _ditheringTex() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = uintptr_t> R get_Animator() {
		return ((R (*)(CameraHelper*))(Il2CppBase() + 0x15B2780))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(CameraHelper*))(Il2CppBase() + 0x15B2788))(this);
	}
	template <typename R = void> R SetWeatherActive(bool isActive) {
		return ((R (*)(CameraHelper*, bool))(Il2CppBase() + 0x15B2918))(this, isActive);
	}
	template <typename R = void> R SetBlizzard(float power, uintptr_t vector, bool enable) {
		return ((R (*)(CameraHelper*, float, uintptr_t, bool))(Il2CppBase() + 0x15B29E8))(this, power, vector, enable);
	}
	template <typename R = void> R SetSnow(float power, uintptr_t vector, bool enable) {
		return ((R (*)(CameraHelper*, float, uintptr_t, bool))(Il2CppBase() + 0x15B2B68))(this, power, vector, enable);
	}
	template <typename R = void> R SetRain(float power, uintptr_t vector, bool enable) {
		return ((R (*)(CameraHelper*, float, uintptr_t, bool))(Il2CppBase() + 0x15B2CA4))(this, power, vector, enable);
	}
	template <typename R = void> R FitBackgroundWithFog() {
		return ((R (*)(CameraHelper*))(Il2CppBase() + 0x15B2894))(this);
	}
	template <typename R = void> R SetDitheringGlobalTexture() {
		return ((R (*)(CameraHelper*))(Il2CppBase() + 0x15B28C8))(this);
	}
	template <typename R = void> R UpdateRift(bool riftEnable) {
		return ((R (*)(CameraHelper*, bool))(Il2CppBase() + 0x15B2E5C))(this, riftEnable);
	}
	template <typename R = void> R UpdateFire(bool fireEnable) {
		return ((R (*)(CameraHelper*, bool))(Il2CppBase() + 0x15B2F48))(this, fireEnable);
	}
	template <typename R = void> R SetZoom(float val) {
		return ((R (*)(CameraHelper*, float))(Il2CppBase() + 0x15B27F0))(this, val);
	}

};

