#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmojiActionButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmojiActionButton"));
	}

	 Action1EmojiActionButton*>*& SelectedEvent() {
		return *(Action1EmojiActionButton*>**)((uintptr_t)this + 0x18);
	}
	 Action1EmojiActionButton*>*& DeselectedEvent() {
		return *(Action1EmojiActionButton*>**)((uintptr_t)this + 0x20);
	}
	 Action1EmojiActionButton*>*& ClickEvent() {
		return *(Action1EmojiActionButton*>**)((uintptr_t)this + 0x28);
	}
	 Action2EmojiActionButton*, EmojiSlotElement*>*& SlotChangedEvent() {
		return *(Action2EmojiActionButton*, EmojiSlotElement*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _backgroundImage() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _controlledButton() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = LocalizedText*> R& _localizedText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _fakeDragElement() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _newMark() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _lockedMark() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _canvas() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = UIWindow*> R& _uiWindow() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _selfRectTransform() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _parentRect() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = bool> R& _isDragging() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = bool> R& _isOpen() {
		return *(R*)((uintptr_t)this + 0xA9);
	}
	template <typename R = bool> R& _isNew() {
		return *(R*)((uintptr_t)this + 0xAA);
	}
	template <typename R = EmojiSlotElement*> R& _currentSlot() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R add_SelectedEvent(Action1EmojiActionButton*>* value) {
		return ((R (*)(EmojiActionButton*, Action1EmojiActionButton*>*))(Il2CppBase() + 0x136AD74))(this, value);
	}
	template <typename R = void> R remove_SelectedEvent(Action1EmojiActionButton*>* value) {
		return ((R (*)(EmojiActionButton*, Action1EmojiActionButton*>*))(Il2CppBase() + 0x136AE14))(this, value);
	}
	template <typename R = void> R add_DeselectedEvent(Action1EmojiActionButton*>* value) {
		return ((R (*)(EmojiActionButton*, Action1EmojiActionButton*>*))(Il2CppBase() + 0x136AEB4))(this, value);
	}
	template <typename R = void> R remove_DeselectedEvent(Action1EmojiActionButton*>* value) {
		return ((R (*)(EmojiActionButton*, Action1EmojiActionButton*>*))(Il2CppBase() + 0x136AF54))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1EmojiActionButton*>* value) {
		return ((R (*)(EmojiActionButton*, Action1EmojiActionButton*>*))(Il2CppBase() + 0x136AFF4))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1EmojiActionButton*>* value) {
		return ((R (*)(EmojiActionButton*, Action1EmojiActionButton*>*))(Il2CppBase() + 0x136B094))(this, value);
	}
	template <typename R = void> R add_SlotChangedEvent(Action2EmojiActionButton*, EmojiSlotElement*>* value) {
		return ((R (*)(EmojiActionButton*, Action2EmojiActionButton*, EmojiSlotElement*>*))(Il2CppBase() + 0x136B134))(this, value);
	}
	template <typename R = void> R remove_SlotChangedEvent(Action2EmojiActionButton*, EmojiSlotElement*>* value) {
		return ((R (*)(EmojiActionButton*, Action2EmojiActionButton*, EmojiSlotElement*>*))(Il2CppBase() + 0x136B1D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_ItemName() {
		return ((R (*)(EmojiActionButton*))(Il2CppBase() + 0x136B274))(this);
	}
	template <typename R = void> R set_ItemName(Il2CppString* value) {
		return ((R (*)(EmojiActionButton*, Il2CppString*))(Il2CppBase() + 0x136B27C))(this, value);
	}
	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(EmojiActionButton*))(Il2CppBase() + 0x136B284))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(EmojiActionButton*, TooltipView*))(Il2CppBase() + 0x136B28C))(this, value);
	}
	template <typename R = uintptr_t> R get_Icon() {
		return ((R (*)(EmojiActionButton*))(Il2CppBase() + 0x136B294))(this);
	}
	template <typename R = bool> R get_IsOpen() {
		return ((R (*)(EmojiActionButton*))(Il2CppBase() + 0x136B29C))(this);
	}
	template <typename R = void> R set_IsOpen(bool value) {
		return ((R (*)(EmojiActionButton*, bool))(Il2CppBase() + 0x136B2A4))(this, value);
	}
	template <typename R = bool> R get_IsNew() {
		return ((R (*)(EmojiActionButton*))(Il2CppBase() + 0x136B368))(this);
	}
	template <typename R = void> R set_IsNew(bool value) {
		return ((R (*)(EmojiActionButton*, bool))(Il2CppBase() + 0x136B370))(this, value);
	}
	template <typename R = void> R SetLocalizedText(Il2CppString* key) {
		return ((R (*)(EmojiActionButton*, Il2CppString*))(Il2CppBase() + 0x136B41C))(this, key);
	}
	template <typename R = void> R SetBackground(uintptr_t sprite) {
		return ((R (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B508))(this, sprite);
	}
	template <typename R = void> R OnPointerEnter(uintptr_t eventData) {
		return ((R (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B54C))(this, eventData);
	}
	template <typename R = void> R OnPointerExit(uintptr_t eventData) {
		return ((R (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B5AC))(this, eventData);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B60C))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(EmojiActionButton*))(Il2CppBase() + 0x136B6FC))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B92C))(this, eventData);
	}
	template <typename R = void> R OnBeginDrag(uintptr_t eventData) {
		return ((R (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136B9BC))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136BEA4))(this, eventData);
	}
	template <typename R = void> R OnEndDrag(uintptr_t eventData) {
		return ((R (*)(EmojiActionButton*, uintptr_t))(Il2CppBase() + 0x136BFC4))(this, eventData);
	}
	template <typename R = void> R RaiseSlotChanging(EmojiSlotElement* emojiSlotElement, bool withEvent) {
		return ((R (*)(EmojiActionButton*, EmojiSlotElement*, bool))(Il2CppBase() + 0x136C83C))(this, emojiSlotElement, withEvent);
	}
	template <typename R = bool> R HideTooltip() {
		return ((R (*)(EmojiActionButton*))(Il2CppBase() + 0x136B638))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(EmojiActionButton*))(Il2CppBase() + 0x136B7A0))(this);
	}

};

