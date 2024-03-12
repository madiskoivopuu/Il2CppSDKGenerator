#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickSkillShot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickSkillShot"));
	}

	template <typename T = uintptr_t> T& _hudWindow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _inventoryItem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _skillKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _skillAxis() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _positiveAxis() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _editorPositiveAxis() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& _cancelKey() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& _axisThreshold() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _axisDead() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _axisMultiplier() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& _startPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _skillShot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _eventSystem() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _eventData() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _manager() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _needShowSkillShot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _skillPressed() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = bool> T& _skillAxisReleased() {
		return *(T*)((uintptr_t)this + 0x7A);
	}
	template <typename T = bool> T& _cancelPressed() {
		return *(T*)((uintptr_t)this + 0x7B);
	}
	template <typename T = bool> T& _isButton() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(JoystickSkillShot*))(Il2CppBase() + 0x14E6350))(this);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(JoystickSkillShot*, float))(Il2CppBase() + 0x14E6518))(this, deltaTime);
	}

};

}
