#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmojiActionButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmojiActionButton"));
	}

	template <typename T = void*> T& SelectedEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& DeselectedEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& SlotChangedEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _backgroundImage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _controlledButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _localizedText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _fakeDragElement() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _newMark() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _lockedMark() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _canvas() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _uiWindow() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _selfRectTransform() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _parentRect() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _isDragging() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _isOpen() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = bool> T& _isNew() {
		return *(T*)((uintptr_t)this + 0xAA);
	}
	template <typename T = uintptr_t> T& _currentSlot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T add_SelectedEvent(void* value) {
		return ((T (*)(EmojiActionButton*, void*))(Il2CppBase() + 0x136AD74))(this, value);
	}
	template <typename T = void> T remove_SelectedEvent(void* value) {
		return ((T (*)(EmojiActionButton*, void*))(Il2CppBase() + 0x136AE14))(this, value);
	}
	template <typename T = void> T add_DeselectedEvent(void* value) {
		return ((T (*)(EmojiActionButton*, void*))(Il2CppBase() + 0x136AEB4))(this, value);
	}
	template <typename T = void> T remove_DeselectedEvent(void* value) {
		return ((T (*)(EmojiActionButton*, void*))(Il2CppBase() + 0x136AF54))(this, value);
	}
	template <typename T = void> T add_ClickEvent(void* value) {
		return ((T (*)(EmojiActionButton*, void*))(Il2CppBase() + 0x136AFF4))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(void* value) {
		return ((T (*)(EmojiActionButton*, void*))(Il2CppBase() + 0x136B094))(this, value);
	}
	template <typename T = void> T add_SlotChangedEvent(void* value) {
		return ((T (*)(EmojiActionButton*, void*))(Il2CppBase() + 0x136B134))(this, value);
	}
	template <typename T = void> T remove_SlotChangedEvent(void* value) {
		return ((T (*)(EmojiActionButton*, void*))(Il2CppBase() + 0x136B1D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemName() {
		return ((T (*)(EmojiActionButton*))(Il2CppBase() + 0x136B274))(this);
	}
	template <typename T = void> T set_ItemName(Il2CppString* value) {
		return ((T (*)(EmojiActionButton*, Il2CppString*))(Il2CppBase() + 0x136B27C))(this, value);
	}
	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(EmojiActionButton*))(Il2CppBase() + 0x136B284))(this);
	}
	template <typename T = void> T set_TooltipView(uintptr_t value) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B28C))(this, value);
	}
	template <typename T = uintptr_t> T get_Icon() {
		return ((T (*)(EmojiActionButton*))(Il2CppBase() + 0x136B294))(this);
	}
	template <typename T = bool> T get_IsOpen() {
		return ((T (*)(EmojiActionButton*))(Il2CppBase() + 0x136B29C))(this);
	}
	template <typename T = void> T set_IsOpen(bool value) {
		return ((T (*)(EmojiActionButton*, bool))(Il2CppBase() + 0x136B2A4))(this, value);
	}
	template <typename T = bool> T get_IsNew() {
		return ((T (*)(EmojiActionButton*))(Il2CppBase() + 0x136B368))(this);
	}
	template <typename T = void> T set_IsNew(bool value) {
		return ((T (*)(EmojiActionButton*, bool))(Il2CppBase() + 0x136B370))(this, value);
	}
	template <typename T = void> T SetLocalizedText(Il2CppString* key) {
		return ((T (*)(EmojiActionButton*, Il2CppString*))(Il2CppBase() + 0x136B41C))(this, key);
	}
	template <typename T = void> T SetBackground(uintptr_t sprite) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B508))(this, sprite);
	}
	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B54C))(this, eventData);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B5AC))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B60C))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EmojiActionButton*))(Il2CppBase() + 0x136B6FC))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B92C))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B9BC))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136BEA4))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136BFC4))(this, eventData);
	}
	template <typename T = void> T RaiseSlotChanging(uintptr_t emojiSlotElement, bool withEvent) {
		return ((T (*)(EmojiActionButton*, uintptr_t, bool))(Il2CppBase() + 0x136C83C))(this, emojiSlotElement, withEvent);
	}
	template <typename T = bool> T HideTooltip() {
		return ((T (*)(EmojiActionButton*))(Il2CppBase() + 0x136B638))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(EmojiActionButton*))(Il2CppBase() + 0x136B7A0))(this);
	}

};

}
