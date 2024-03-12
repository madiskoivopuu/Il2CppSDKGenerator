#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleJoystick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleJoystick"));
	}

	template <typename T = uintptr_t> T& CurrentEventCamera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MovementRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DeadZone() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& hideColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& showColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& JoystickBase() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Stick() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& MoveBase() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& SnapsToFinger() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = uintptr_t> T& TouchZone() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& DontResetOnPointerUp() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& Cancel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector2> T& _initialStickPosition() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector2> T& _intermediateStickPosition() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector2> T& _initialBasePosition() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _baseTransform() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _stickTransform() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& HorizintalAxis() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& VerticalAxis() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector2> T& _oldPosition() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = void*> T& FingerId() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> T get_CurrentEventCamera() {
		return ((T (*)(SimpleJoystick*))(Il2CppBase() + 0x147FB94))(this);
	}
	template <typename T = void> T set_CurrentEventCamera(uintptr_t value) {
		return ((T (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x147FB9C))(this, value);
	}
	template <typename T = bool> T get_IsGamePad() {
		return ((T (*)(SimpleJoystick*))(Il2CppBase() + 0x147FBA4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SimpleJoystick*))(Il2CppBase() + 0x147FC04))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SimpleJoystick*))(Il2CppBase() + 0x147FE00))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SimpleJoystick*))(Il2CppBase() + 0x147FE2C))(this);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x147FE60))(this, eventData);
	}
	template <typename T = void> T OnDrag_1(uintptr_t eventData) {
		return ((T (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x147FEF8))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x148018C))(this, eventData);
	}
	template <typename T = void> T OnPointerUp_1(uintptr_t eventData) {
		return ((T (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x148021C))(this, eventData);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SimpleJoystick*))(Il2CppBase() + 0x1480390))(this);
	}
	template <typename T = void*> T get_FingerId() {
		return ((T (*)(SimpleJoystick*))(Il2CppBase() + 0x1480408))(this);
	}
	template <typename T = void> T set_FingerId(void* value) {
		return ((T (*)(SimpleJoystick*, void*))(Il2CppBase() + 0x1480410))(this, value);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x1480418))(this, eventData);
	}
	template <typename T = void> T OnPointerDown_1(uintptr_t eventData) {
		return ((T (*)(SimpleJoystick*, uintptr_t))(Il2CppBase() + 0x14804A8))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SimpleJoystick*))(Il2CppBase() + 0x1480644))(this);
	}
	template <typename T = void> T Hide(bool isHidden) {
		return ((T (*)(SimpleJoystick*, bool))(Il2CppBase() + 0x147FD38))(this, isHidden);
	}

};

}
