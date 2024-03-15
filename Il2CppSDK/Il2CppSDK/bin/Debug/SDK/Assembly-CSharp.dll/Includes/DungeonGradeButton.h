#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ButtonHelper.h" 

class DungeonGradeButton : public ButtonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonGradeButton"));
	}

	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _difficulties() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _lootQuality() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _activeColor() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _notActiveColor() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& _hideTime() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& _delayTime() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = uintptr_t> R& _centerPosition() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& _isDefault() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _hideCoroutine() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _moveCoroutine() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Bind(PrerequisiteWindow* window, GameEntity* entity, Action1ButtonHelper*>* onButtonClicked) {
		return ((R (*)(DungeonGradeButton*, PrerequisiteWindow*, GameEntity*, Action1ButtonHelper*>*))(Il2CppBase() + 0x130D638))(this, window, entity, onButtonClicked);
	}
	template <typename R = void> R SetImageColor(Il2CppArray<uintptr_t>* images, int32_t level) {
		return ((R (*)(DungeonGradeButton*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x130D98C))(this, images, level);
	}
	template <typename R = void> R OnOtherButtonPressed(ButtonHelper* button) {
		return ((R (*)(DungeonGradeButton*, ButtonHelper*))(Il2CppBase() + 0x130DA6C))(this, button);
	}
	template <typename R = void> R Activate() {
		return ((R (*)(DungeonGradeButton*))(Il2CppBase() + 0x130DB48))(this);
	}
	template <typename R = void> R OnConfirm(int32_t selectedIndex, uintptr_t OnFinish) {
		return ((R (*)(DungeonGradeButton*, int32_t, uintptr_t))(Il2CppBase() + 0x130DC20))(this, selectedIndex, OnFinish);
	}
	template <typename R = uintptr_t> R HideCoroutine() {
		return ((R (*)(DungeonGradeButton*))(Il2CppBase() + 0x130DD94))(this);
	}
	template <typename R = uintptr_t> R MoveCoroutine(uintptr_t onFinish) {
		return ((R (*)(DungeonGradeButton*, uintptr_t))(Il2CppBase() + 0x130DD00))(this, onFinish);
	}

};

