#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class SkillSlot : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSlot"));
	}

	template <typename R = uintptr_t> R& SelectButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Locked() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& LockedText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& Used() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& TierText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& RequiredText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& ActiveColor() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& NotActiveColor() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = ISkillEventHandler*> R& _handler() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = SkillSelectWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _clickStartTime() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0xA8);
	}

	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(SkillSlot*))(Il2CppBase() + 0x1482B74))(this);
	}
	template <typename R = void> R set_Item(ItemEntity* value) {
		return ((R (*)(SkillSlot*, ItemEntity*))(Il2CppBase() + 0x1482B7C))(this, value);
	}
	template <typename R = void> R Bind(SkillSelectWindow* window, ItemEntity* item, GameEntity* avatar) {
		return ((R (*)(SkillSlot*, SkillSelectWindow*, ItemEntity*, GameEntity*))(Il2CppBase() + 0x1481E08))(this, window, item, avatar);
	}
	template <typename R = void> R OnSelectButtonClicked() {
		return ((R (*)(SkillSlot*))(Il2CppBase() + 0x1482B84))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(SkillSlot*, uintptr_t))(Il2CppBase() + 0x1482C40))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(SkillSlot*, uintptr_t))(Il2CppBase() + 0x1482CB0))(this, eventData);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(SkillSlot*, float))(Il2CppBase() + 0x1482D70))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(SkillSlot*, float))(Il2CppBase() + 0x14832A0))(this, deltaTime);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(SkillSlot*))(Il2CppBase() + 0x1483448))(this);
	}

};

