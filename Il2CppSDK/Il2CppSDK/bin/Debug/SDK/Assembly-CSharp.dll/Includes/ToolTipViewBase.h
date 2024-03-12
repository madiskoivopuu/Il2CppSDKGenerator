#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolTipViewBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolTipViewBase"));
	}

	template <typename T = float> T& _tooltipDelayInSeconds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _pressedTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _source() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isListenerAdded() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _warningString() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _warningTitleKey() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _errorString() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T get_IsInited() {
		return ((T (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F2C1C))(this);
	}
	template <typename T = bool> T get__hasTooltipView() {
		return ((T (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F2C2C))(this);
	}
	template <typename T = void> T Bind(uintptr_t source, Il2CppString* blueprint) {
		return ((T (*)(ToolTipViewBase*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14F2D60))(this, source, blueprint);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F2F94))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F3158))(this);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(ToolTipViewBase*, float))(Il2CppBase() + 0x14F3278))(this, deltaTime);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(ToolTipViewBase*, uintptr_t))(Il2CppBase() + 0x14F32E4))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(ToolTipViewBase*, uintptr_t))(Il2CppBase() + 0x14F3330))(this, eventData);
	}
	template <typename T = void> T HideTooltip() {
		return ((T (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F3384))(this);
	}
	template <typename T = void> T ShowTooltip() {
		return ((T (*)(ToolTipViewBase*))(Il2CppBase() + 0x14F33DC))(this);
	}

};

}
