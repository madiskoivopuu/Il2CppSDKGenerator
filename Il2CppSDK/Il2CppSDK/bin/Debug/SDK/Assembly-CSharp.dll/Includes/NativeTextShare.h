#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NativeTextShare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NativeTextShare"));
	}

	template <typename T = uintptr_t> T& shareButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isFocus() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isProcessing() {
		return *(T*)((uintptr_t)this + 0x21);
	}

	template <typename T = void> T Start() {
		return ((T (*)(NativeTextShare*))(Il2CppBase() + 0x155BC80))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(NativeTextShare*, bool))(Il2CppBase() + 0x155BC84))(this, focus);
	}
	template <typename T = void> T ShareMessage() {
		return ((T (*)(NativeTextShare*))(Il2CppBase() + 0x155BC90))(this);
	}
	template <typename T = void> T ShareText(Il2CppString* title, Il2CppString* message, Il2CppString* link) {
		return ((T (*)(NativeTextShare*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x155BC94))(this, title, message, link);
	}
	template <typename T = uintptr_t> T ShareTextInAnroid(Il2CppString* title, Il2CppString* message, Il2CppString* link) {
		return ((T (*)(NativeTextShare*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x155BCCC))(this, title, message, link);
	}
	template <typename T = bool> T ShareTextInAnroidb__7_0() {
		return ((T (*)(NativeTextShare*))(Il2CppBase() + 0x155BD98))(this);
	}

};

}
