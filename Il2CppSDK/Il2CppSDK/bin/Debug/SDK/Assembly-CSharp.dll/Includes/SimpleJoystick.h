#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleJoystick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleJoystick"));
	}

	template <typename R = uintptr_t> R& CurrentEventCamera() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& MovementRange() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& DeadZone() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = uintptr_t> R& hideColor() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& showColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& JoystickBase() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Stick() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& MoveBase() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& SnapsToFinger() {
		return *(R*)((uintptr_t)this + 0x59);
	}
	template <typename R = uintptr_t> R& TouchZone() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& DontResetOnPointerUp() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& Cancel() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _initialStickPosition() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _intermediateStickPosition() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _initialBasePosition() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _baseTransform() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _stickTransform() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = VirtualAxis*> R& HorizintalAxis() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = VirtualAxis*> R& VerticalAxis() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _oldPosition() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	 Nullable1<int32_t>*& FingerId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0xB8);
	}

	template <typename R = uintptr_t> R get_CurrentEventCamera() {
		return ((R (*)(SimpleJoystick*))(Il2CppBase() + 0x147FB94))(this);
	}
	template <typename R = void> R set_CurrentEventCamera(uintptr_t value) {
		return ((R (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x147FB9C))(this, value);
	}
	template <typename R = bool> R get_IsGamePad() {
		return ((R (*)(SimpleJoystick*))(Il2CppBase() + 0x147FBA4))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(SimpleJoystick*))(Il2CppBase() + 0x147FC04))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(SimpleJoystick*))(Il2CppBase() + 0x147FE00))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(SimpleJoystick*))(Il2CppBase() + 0x147FE2C))(this);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x147FE60))(this, eventData);
	}
	template <typename R = void> R OnDrag_1(uintptr_t eventData) {
		return ((R (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x147FEF8))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x148018C))(this, eventData);
	}
	template <typename R = void> R OnPointerUp_1(uintptr_t eventData) {
		return ((R (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x148021C))(this, eventData);
	}
	template <typename R = void> R Reset() {
		return ((R (*)(SimpleJoystick*))(Il2CppBase() + 0x1480390))(this);
	}
	 Nullable1<int32_t>* get_FingerId() {
		return ((Nullable1<int32_t>* (*)(SimpleJoystick*))(Il2CppBase() + 0x1480408))(this);
	}
	template <typename R = void> R set_FingerId(Nullable1<int32_t>* value) {
		return ((R (*)(SimpleJoystick*, Nullable1<int32_t>*))(Il2CppBase() + 0x1480410))(this, value);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x1480418))(this, eventData);
	}
	template <typename R = void> R OnPointerDown_1(uintptr_t eventData) {
		return ((R (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x14804A8))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(SimpleJoystick*))(Il2CppBase() + 0x1480644))(this);
	}
	template <typename R = void> R Hide(bool isHidden) {
		return ((R (*)(SimpleJoystick*, bool))(Il2CppBase() + 0x147FD38))(this, isHidden);
	}

};

