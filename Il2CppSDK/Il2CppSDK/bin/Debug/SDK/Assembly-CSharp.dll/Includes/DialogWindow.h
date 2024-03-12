#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MessageWindow" 

class DialogWindow: MessageWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogWindow"));
	}

	template <typename T = uintptr_t> T& ButtonAnimator0() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ButtonAnimator1() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ButtonAnimators() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ButtonClose() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& Item() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& CoinImage() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& CoinPanel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& CoinText() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = uintptr_t> T get_ContextType() {
		return ((T (*)(DialogWindow*))(Il2CppBase() + 0xEC2B80))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(DialogWindow*))(Il2CppBase() + 0xEC2BF8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(DialogWindow*))(Il2CppBase() + 0xEC2FA4))(this);
	}
	template <typename T = void> T OnParentWindowClosed(uintptr_t window) {
		return ((T (*)(DialogWindow*, uintptr_t))(Il2CppBase() + 0xEC3130))(this, window);
	}

};

}
