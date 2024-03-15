#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TooltipTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TooltipTrigger"));
	}

	template <typename R = bool> R& Static() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& _isInited() {
		return *(R*)((uintptr_t)this + 0x2D);
	}
	template <typename R = Type> R& _type() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& _itemName() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& _title() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& _text() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& _warning() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _mousePosition() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& _durationToShow() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = bool> R& _isShown() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Clean() {
		return ((R (*)(TooltipTrigger*))(Il2CppBase() + 0x14F5FE0))(this);
	}
	template <typename R = void> R Init(Il2CppString* itemName, TooltipView* tooltip) {
		return ((R (*)(TooltipTrigger*, Il2CppString*, TooltipView*))(Il2CppBase() + 0x14F6054))(this, itemName, tooltip);
	}
	template <typename R = void> R Init_1(Il2CppString* title, Il2CppString* text, TooltipView* tooltip, bool needLocalize, float durationToShow) {
		return ((R (*)(TooltipTrigger*, Il2CppString*, Il2CppString*, TooltipView*, bool, float))(Il2CppBase() + 0x14F6098))(this, title, text, tooltip, needLocalize, durationToShow);
	}
	template <typename R = void> R Init_2(Il2CppString* itemName, TooltipView* tooltip, Il2CppString* warningLine) {
		return ((R (*)(TooltipTrigger*, Il2CppString*, TooltipView*, Il2CppString*))(Il2CppBase() + 0x14F6124))(this, itemName, tooltip, warningLine);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(TooltipTrigger*, uintptr_t))(Il2CppBase() + 0x14F6184))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(TooltipTrigger*, uintptr_t))(Il2CppBase() + 0x14F61C0))(this, eventData);
	}
	template <typename R = void> R Update() {
		return ((R (*)(TooltipTrigger*))(Il2CppBase() + 0x14F68BC))(this);
	}
	template <typename R = void> R OnClickHoldedHandler(float duration) {
		return ((R (*)(TooltipTrigger*, float))(Il2CppBase() + 0x14F61D8))(this, duration);
	}
	template <typename R = void> R OnPointerExit(uintptr_t eventData) {
		return ((R (*)(TooltipTrigger*, uintptr_t))(Il2CppBase() + 0x14F691C))(this, eventData);
	}

};

