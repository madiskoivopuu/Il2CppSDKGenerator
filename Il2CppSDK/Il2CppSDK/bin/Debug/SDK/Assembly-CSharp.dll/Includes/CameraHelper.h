#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _cameras() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _mainCamera() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _weatherBlizzard() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _weatherSnow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _weatherRain() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _weatherRift() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _weatherFire() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _minCameraZoom() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _zoomRange() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _ditheringTex() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(CameraHelper*))(Il2CppBase() + 0x15B2780))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CameraHelper*))(Il2CppBase() + 0x15B2788))(this);
	}
	template <typename T = void> T SetWeatherActive(bool isActive) {
		return ((T (*)(CameraHelper*, bool))(Il2CppBase() + 0x15B2918))(this, isActive);
	}
	template <typename T = void> T SetBlizzard(float power, uintptr_t vector, bool enable) {
		return ((T (*)(CameraHelper*, float, uintptr_t, bool))(Il2CppBase() + 0x15B29E8))(this, power, vector, enable);
	}
	template <typename T = void> T SetSnow(float power, uintptr_t vector, bool enable) {
		return ((T (*)(CameraHelper*, float, uintptr_t, bool))(Il2CppBase() + 0x15B2B68))(this, power, vector, enable);
	}
	template <typename T = void> T SetRain(float power, uintptr_t vector, bool enable) {
		return ((T (*)(CameraHelper*, float, uintptr_t, bool))(Il2CppBase() + 0x15B2CA4))(this, power, vector, enable);
	}
	template <typename T = void> T FitBackgroundWithFog() {
		return ((T (*)(CameraHelper*))(Il2CppBase() + 0x15B2894))(this);
	}
	template <typename T = void> T SetDitheringGlobalTexture() {
		return ((T (*)(CameraHelper*))(Il2CppBase() + 0x15B28C8))(this);
	}
	template <typename T = void> T UpdateRift(bool riftEnable) {
		return ((T (*)(CameraHelper*, bool))(Il2CppBase() + 0x15B2E5C))(this, riftEnable);
	}
	template <typename T = void> T UpdateFire(bool fireEnable) {
		return ((T (*)(CameraHelper*, bool))(Il2CppBase() + 0x15B2F48))(this, fireEnable);
	}
	template <typename T = void> T SetZoom(float val) {
		return ((T (*)(CameraHelper*, float))(Il2CppBase() + 0x15B27F0))(this, val);
	}

};

}
