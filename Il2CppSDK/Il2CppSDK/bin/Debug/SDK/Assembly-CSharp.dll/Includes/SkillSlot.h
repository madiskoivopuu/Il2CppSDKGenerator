#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour" 

class SkillSlot: TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSlot"));
	}

	template <typename T = uintptr_t> T& SelectButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Locked() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LockedText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Used() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& TierText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& RequiredText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ActiveColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& NotActiveColor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _handler() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Item() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _clickStartTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = uintptr_t> T get_Item() {
		return ((T (*)(SkillSlot*))(Il2CppBase() + 0x1482B74))(this);
	}
	template <typename T = void> T set_Item(uintptr_t value) {
		return ((T (*)(SkillSlot*, uintptr_t))(Il2CppBase() + 0x1482B7C))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t item, uintptr_t avatar) {
		return ((T (*)(SkillSlot*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1481E08))(this, window, item, avatar);
	}
	template <typename T = void> T OnSelectButtonClicked() {
		return ((T (*)(SkillSlot*))(Il2CppBase() + 0x1482B84))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(SkillSlot*, uintptr_t))(Il2CppBase() + 0x1482C40))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(SkillSlot*, uintptr_t))(Il2CppBase() + 0x1482CB0))(this, eventData);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(SkillSlot*, float))(Il2CppBase() + 0x1482D70))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(SkillSlot*, float))(Il2CppBase() + 0x14832A0))(this, deltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SkillSlot*))(Il2CppBase() + 0x1483448))(this);
	}

};

}
