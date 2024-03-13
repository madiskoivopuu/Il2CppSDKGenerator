#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TooltipTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TooltipTrigger"));
	}

	template <typename T = bool> T& Static() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _isInited() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Type*> T& _type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _itemName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _title() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _text() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _warning() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _mousePosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _durationToShow() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& _isShown() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Clean() {
		return ((T (*)(TooltipTrigger*))(Il2CppBase() + 0x14F5FE0))(this);
	}
	template <typename T = void> T Init(Il2CppString* itemName, TooltipView* tooltip) {
		return ((T (*)(TooltipTrigger*, Il2CppString*, TooltipView*))(Il2CppBase() + 0x14F6054))(this, itemName, tooltip);
	}
	template <typename T = void> T Init_1(Il2CppString* title, Il2CppString* text, TooltipView* tooltip, bool needLocalize, float durationToShow) {
		return ((T (*)(TooltipTrigger*, Il2CppString*, Il2CppString*, TooltipView*, bool, float))(Il2CppBase() + 0x14F6098))(this, title, text, tooltip, needLocalize, durationToShow);
	}
	template <typename T = void> T Init_2(Il2CppString* itemName, TooltipView* tooltip, Il2CppString* warningLine) {
		return ((T (*)(TooltipTrigger*, Il2CppString*, TooltipView*, Il2CppString*))(Il2CppBase() + 0x14F6124))(this, itemName, tooltip, warningLine);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(TooltipTrigger*, uintptr_t))(Il2CppBase() + 0x14F6184))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(TooltipTrigger*, uintptr_t))(Il2CppBase() + 0x14F61C0))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TooltipTrigger*))(Il2CppBase() + 0x14F68BC))(this);
	}
	template <typename T = void> T OnClickHoldedHandler(float duration) {
		return ((T (*)(TooltipTrigger*, float))(Il2CppBase() + 0x14F61D8))(this, duration);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(TooltipTrigger*, uintptr_t))(Il2CppBase() + 0x14F691C))(this, eventData);
	}

};

