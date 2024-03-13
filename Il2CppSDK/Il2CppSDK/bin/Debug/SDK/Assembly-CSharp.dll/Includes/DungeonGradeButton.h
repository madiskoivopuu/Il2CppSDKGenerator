#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ButtonHelper.h" 

class DungeonGradeButton : public ButtonHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonGradeButton"));
	}

	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _difficulties() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _lootQuality() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _activeColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _notActiveColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _hideTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _delayTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& _centerPosition() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _isDefault() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _hideCoroutine() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _moveCoroutine() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Bind(PrerequisiteWindow* window, GameEntity* entity, Action1ButtonHelper*>* onButtonClicked) {
		return ((T (*)(DungeonGradeButton*, PrerequisiteWindow*, GameEntity*, Action1ButtonHelper*>*))(Il2CppBase() + 0x130D638))(this, window, entity, onButtonClicked);
	}
	template <typename T = void> T SetImageColor(Il2CppArray<uintptr_t>* images, int32_t level) {
		return ((T (*)(DungeonGradeButton*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x130D98C))(this, images, level);
	}
	template <typename T = void> T OnOtherButtonPressed(ButtonHelper* button) {
		return ((T (*)(DungeonGradeButton*, ButtonHelper*))(Il2CppBase() + 0x130DA6C))(this, button);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(DungeonGradeButton*))(Il2CppBase() + 0x130DB48))(this);
	}
	template <typename T = void> T OnConfirm(int32_t selectedIndex, uintptr_t OnFinish) {
		return ((T (*)(DungeonGradeButton*, int32_t, uintptr_t))(Il2CppBase() + 0x130DC20))(this, selectedIndex, OnFinish);
	}
	template <typename T = uintptr_t> T HideCoroutine() {
		return ((T (*)(DungeonGradeButton*))(Il2CppBase() + 0x130DD94))(this);
	}
	template <typename T = uintptr_t> T MoveCoroutine(uintptr_t onFinish) {
		return ((T (*)(DungeonGradeButton*, uintptr_t))(Il2CppBase() + 0x130DD00))(this, onFinish);
	}

};

