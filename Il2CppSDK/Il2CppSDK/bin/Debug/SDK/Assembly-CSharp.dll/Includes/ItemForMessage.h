#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemForMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemForMessage"));
	}

	template <typename R = TextMonoBehaviour*> R& _count() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _grade() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _rarity() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _BOP() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _maxGradeColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = MessageWithItemsWindow*> R& _handler() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _clickStartTime() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& _isTooltipShowed() {
		return *(R*)((uintptr_t)this + 0x61);
	}
	template <typename R = Il2CppString*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	 Nullable1<int64_t>*& _showGhostyEndTime() {
		return *(Nullable1<int64_t>**)((uintptr_t)this + 0x70);
	}
	 Nullable1<int32_t>*& _currentCount() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& _countMultiplier() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Bind(MessageWithItemsWindow* handler, ItemEntity* item, int32_t count, Nullable1<int64_t>* showGhostyEndTime) {
		return ((R (*)(ItemForMessage*, MessageWithItemsWindow*, ItemEntity*, int32_t, Nullable1<int64_t>*))(Il2CppBase() + 0x14C86C0))(this, handler, item, count, showGhostyEndTime);
	}
	template <typename R = void> R Bind_1(Icon icon, int32_t count) {
		return ((R (*)(ItemForMessage*, Icon, int32_t))(Il2CppBase() + 0x14C8BFC))(this, icon, count);
	}
	template <typename R = void> R SetCount(int32_t count) {
		return ((R (*)(ItemForMessage*, int32_t))(Il2CppBase() + 0x14C8A5C))(this, count);
	}
	template <typename R = int32_t> R GetCount() {
		return ((R (*)(ItemForMessage*))(Il2CppBase() + 0x14C8D60))(this);
	}
	template <typename R = void> R SetMultiplier(float value) {
		return ((R (*)(ItemForMessage*, float))(Il2CppBase() + 0x14C8DA0))(this, value);
	}
	template <typename R = void> R SetGrade(ItemEntity* item) {
		return ((R (*)(ItemForMessage*, ItemEntity*))(Il2CppBase() + 0x14C8DFC))(this, item);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ItemForMessage*))(Il2CppBase() + 0x14C9254))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(ItemForMessage*, uintptr_t))(Il2CppBase() + 0x14C9350))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(ItemForMessage*, uintptr_t))(Il2CppBase() + 0x14C93C0))(this, eventData);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(ItemForMessage*, float))(Il2CppBase() + 0x14C93DC))(this, deltaTime);
	}

};

