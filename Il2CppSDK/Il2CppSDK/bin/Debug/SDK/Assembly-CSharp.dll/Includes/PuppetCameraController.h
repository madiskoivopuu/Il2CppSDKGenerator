#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetCameraController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PuppetCameraController"));
	}

	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _cameraPivot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _rotationSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _maxAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _defaultCameraRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _defaultRotation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Nullable1uintptr_t>*> T& _destenitionRotation() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _shownObjects() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T ShowObjects(bool show) {
		return ((T (*)(PuppetCameraController*, bool))(Il2CppBase() + 0x11B0EB8))(this, show);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PuppetCameraController*))(Il2CppBase() + 0x11B0FA0))(this);
	}
	template <typename T = void> T RotateToDefault(bool instantly) {
		return ((T (*)(PuppetCameraController*, bool))(Il2CppBase() + 0x11B0FF8))(this, instantly);
	}
	template <typename T = void> T RotateTo(float angle, bool instantly) {
		return ((T (*)(PuppetCameraController*, float, bool))(Il2CppBase() + 0x11B10AC))(this, angle, instantly);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PuppetCameraController*))(Il2CppBase() + 0x11B12F4))(this);
	}

};

