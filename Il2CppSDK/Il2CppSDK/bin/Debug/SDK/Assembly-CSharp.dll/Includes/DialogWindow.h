#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MessageWindow.h" 

class DialogWindow : public MessageWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogWindow"));
	}

	template <typename R = uintptr_t> R& ButtonAnimator0() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& ButtonAnimator1() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& ButtonAnimators() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& ButtonClose() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = TextImageMonoBehaviour*> R& Item() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& CoinImage() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& CoinPanel() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& CoinText() {
		return *(R*)((uintptr_t)this + 0x108);
	}

	template <typename R = uintptr_t> R get_ContextType() {
		return ((R (*)(DialogWindow*))(Il2CppBase() + 0xEC2B80))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(DialogWindow*))(Il2CppBase() + 0xEC2BF8))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(DialogWindow*))(Il2CppBase() + 0xEC2FA4))(this);
	}
	template <typename R = void> R OnParentWindowClosed(IUIWindow* window) {
		return ((R (*)(DialogWindow*, IUIWindow*))(Il2CppBase() + 0xEC3130))(this, window);
	}

};

