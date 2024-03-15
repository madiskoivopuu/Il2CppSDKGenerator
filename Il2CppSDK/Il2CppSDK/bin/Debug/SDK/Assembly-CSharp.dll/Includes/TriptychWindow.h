#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TriptychWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriptychWindow"));
	}

	template <typename R = StandartButton*> R& _buttonPrefab() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = StandartButton*> R& _warningButtonPrefab() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _buttonPanel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _text1() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _text2() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _text3() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _image1() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _image2() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _image3() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = TooltipTrigger*> R& _tooltipTriggers1() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = TooltipTrigger*> R& _tooltipTriggers2() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = TooltipTrigger*> R& _tooltipTriggers3() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 Il2CppList<ValueTuple2<StandartButton*, Il2CppString*>*>*& _buttons() {
		return *(Il2CppList<ValueTuple2<StandartButton*, Il2CppString*>*>**)((uintptr_t)this + 0xE8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(TriptychWindow*))(Il2CppBase() + 0x15269D0))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(TriptychWindow*))(Il2CppBase() + 0x1526AAC))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(TriptychWindow*))(Il2CppBase() + 0x1526B94))(this);
	}
	template <typename R = void> R UpdateDialog() {
		return ((R (*)(TriptychWindow*))(Il2CppBase() + 0x1526B98))(this);
	}
	template <typename R = void> R SetTooltipTrigger(TooltipTrigger* tooltipTrigger, Il2CppString* caption, Il2CppString* text) {
		return ((R (*)(TriptychWindow*, TooltipTrigger*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1527600))(this, tooltipTrigger, caption, text);
	}
	template <typename R = void> R OnClickButton(int32_t index) {
		return ((R (*)(TriptychWindow*, int32_t))(Il2CppBase() + 0x1527880))(this, index);
	}
	template <typename R = void> R Awakeb__16_0() {
		return ((R (*)(TriptychWindow*))(Il2CppBase() + 0x1527C54))(this);
	}

};

