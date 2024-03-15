#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetCameraController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PuppetCameraController"));
	}

	template <typename R = uintptr_t> R& _camera() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _cameraPivot() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _rotationSpeed() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _maxAngle() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = uintptr_t> R& _defaultCameraRotation() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _defaultRotation() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	 Nullable1uintptr_t>*& _destenitionRotation() {
		return *(Nullable1uintptr_t>**)((uintptr_t)this + 0x4C);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _shownObjects() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R ShowObjects(bool show) {
		return ((R (*)(PuppetCameraController*, bool))(Il2CppBase() + 0x11B0EB8))(this, show);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PuppetCameraController*))(Il2CppBase() + 0x11B0FA0))(this);
	}
	template <typename R = void> R RotateToDefault(bool instantly) {
		return ((R (*)(PuppetCameraController*, bool))(Il2CppBase() + 0x11B0FF8))(this, instantly);
	}
	template <typename R = void> R RotateTo(float angle, bool instantly) {
		return ((R (*)(PuppetCameraController*, float, bool))(Il2CppBase() + 0x11B10AC))(this, angle, instantly);
	}
	template <typename R = void> R Update() {
		return ((R (*)(PuppetCameraController*))(Il2CppBase() + 0x11B12F4))(this);
	}

};

