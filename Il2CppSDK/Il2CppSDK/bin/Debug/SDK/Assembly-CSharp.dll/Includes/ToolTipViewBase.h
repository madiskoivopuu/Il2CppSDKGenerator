#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolTipViewBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolTipViewBase"));
	}

	template <typename R = float> R& _tooltipDelayInSeconds() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _pressedTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = IToolTipSource*> R& _source() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _isListenerAdded() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& _warningString() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& _warningTitleKey() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& _errorString() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = bool> R get_IsInited() {
		return ((R (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F2C1C))(this);
	}
	template <typename R = bool> R get__hasTooltipView() {
		return ((R (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F2C2C))(this);
	}
	template <typename R = void> R Bind(IToolTipSource* source, Il2CppString* blueprint) {
		return ((R (*)(ToolTipViewBase*, IToolTipSource*, Il2CppString*))(Il2CppBase() + 0x14F2D60))(this, source, blueprint);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F2F94))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F3158))(this);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(ToolTipViewBase*, float))(Il2CppBase() + 0x14F3278))(this, deltaTime);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(ToolTipViewBase*, uintptr_t))(Il2CppBase() + 0x14F32E4))(this, eventData);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(ToolTipViewBase*, uintptr_t))(Il2CppBase() + 0x14F3330))(this, eventData);
	}
	template <typename R = void> R HideTooltip() {
		return ((R (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F3384))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F33DC))(this);
	}

};

