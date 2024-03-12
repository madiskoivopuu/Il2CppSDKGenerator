#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemForMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemForMessage"));
	}

	template <typename T = uintptr_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _grade() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _rarity() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _BOP() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _maxGradeColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _handler() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _clickStartTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _isTooltipShowed() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = Il2CppString*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& _showGhostyEndTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& _currentCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _countMultiplier() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Bind(uintptr_t handler, uintptr_t item, int32_t count, void* showGhostyEndTime) {
		return ((T (*)(ItemForMessage*, uintptr_t, uintptr_t, int32_t, void*))(Il2CppBase() + 0x14C86C0))(this, handler, item, count, showGhostyEndTime);
	}
	template <typename T = void> T Bind_1(uintptr_t icon, int32_t count) {
		return ((T (*)(ItemForMessage*, uintptr_t, int32_t))(Il2CppBase() + 0x14C8BFC))(this, icon, count);
	}
	template <typename T = void> T SetCount(int32_t count) {
		return ((T (*)(ItemForMessage*, int32_t))(Il2CppBase() + 0x14C8A5C))(this, count);
	}
	template <typename T = int32_t> T GetCount() {
		return ((T (*)(ItemForMessage*))(Il2CppBase() + 0x14C8D60))(this);
	}
	template <typename T = void> T SetMultiplier(float value) {
		return ((T (*)(ItemForMessage*, float))(Il2CppBase() + 0x14C8DA0))(this, value);
	}
	template <typename T = void> T SetGrade(uintptr_t item) {
		return ((T (*)(ItemForMessage*, uintptr_t))(Il2CppBase() + 0x14C8DFC))(this, item);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ItemForMessage*))(Il2CppBase() + 0x14C9254))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(ItemForMessage*, uintptr_t))(Il2CppBase() + 0x14C9350))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(ItemForMessage*, uintptr_t))(Il2CppBase() + 0x14C93C0))(this, eventData);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(ItemForMessage*, float))(Il2CppBase() + 0x14C93DC))(this, deltaTime);
	}

};

}
