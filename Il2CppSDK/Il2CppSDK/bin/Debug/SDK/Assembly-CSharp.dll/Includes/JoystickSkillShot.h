#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickSkillShot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickSkillShot"));
	}

	template <typename R = HUDWindow*> R& _hudWindow() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = HUDInventoryButton*> R& _inventoryItem() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _skillKey() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _skillAxis() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _positiveAxis() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _editorPositiveAxis() {
		return *(R*)((uintptr_t)this + 0x39);
	}
	template <typename R = uintptr_t> R& _cancelKey() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = float> R& _axisThreshold() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _axisDead() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& _axisMultiplier() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _startPosition() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = SimpleJoystick*> R& _skillShot() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _eventSystem() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _eventData() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = UIWindowsManager*> R& _manager() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& _needShowSkillShot() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& _skillPressed() {
		return *(R*)((uintptr_t)this + 0x79);
	}
	template <typename R = bool> R& _skillAxisReleased() {
		return *(R*)((uintptr_t)this + 0x7A);
	}
	template <typename R = bool> R& _cancelPressed() {
		return *(R*)((uintptr_t)this + 0x7B);
	}
	template <typename R = bool> R& _isButton() {
		return *(R*)((uintptr_t)this + 0x7C);
	}

	template <typename R = void> R Start() {
		return ((R (*)(JoystickSkillShot*))(Il2CppBase() + 0x14E6350))(this);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(JoystickSkillShot*, float))(Il2CppBase() + 0x14E6518))(this, deltaTime);
	}

};

