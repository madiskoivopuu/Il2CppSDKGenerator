#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class TriptychWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriptychWindow"));
	}

	template <typename T = uintptr_t> T& _buttonPrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _warningButtonPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _buttonPanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _text1() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _text2() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _text3() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _image1() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _image2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _image3() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _tooltipTriggers1() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _tooltipTriggers2() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _tooltipTriggers3() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<void*>*> T& _buttons() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TriptychWindow*))(Il2CppBase() + 0x15269D0))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(TriptychWindow*))(Il2CppBase() + 0x1526AAC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TriptychWindow*))(Il2CppBase() + 0x1526B94))(this);
	}
	template <typename T = void> T UpdateDialog() {
		return ((T (*)(TriptychWindow*))(Il2CppBase() + 0x1526B98))(this);
	}
	template <typename T = void> T SetTooltipTrigger(uintptr_t tooltipTrigger, Il2CppString* caption, Il2CppString* text) {
		return ((T (*)(TriptychWindow*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1527600))(this, tooltipTrigger, caption, text);
	}
	template <typename T = void> T OnClickButton(int32_t index) {
		return ((T (*)(TriptychWindow*, int32_t))(Il2CppBase() + 0x1527880))(this, index);
	}
	template <typename T = void> T Awakeb__16_0() {
		return ((T (*)(TriptychWindow*))(Il2CppBase() + 0x1527C54))(this);
	}

};

}
