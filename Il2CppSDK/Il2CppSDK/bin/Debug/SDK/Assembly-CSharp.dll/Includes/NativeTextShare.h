#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NativeTextShare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NativeTextShare"));
	}

	template <typename R = uintptr_t> R& shareButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& isFocus() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& isProcessing() {
		return *(R*)((uintptr_t)this + 0x21);
	}

	template <typename R = void> R Start() {
		return ((R (*)(NativeTextShare*))(Il2CppBase() + 0x155BC80))(this);
	}
	template <typename R = void> R OnApplicationFocus(bool focus) {
		return ((R (*)(NativeTextShare*, bool))(Il2CppBase() + 0x155BC84))(this, focus);
	}
	template <typename R = void> R ShareMessage() {
		return ((R (*)(NativeTextShare*))(Il2CppBase() + 0x155BC90))(this);
	}
	template <typename R = void> R ShareText(Il2CppString* title, Il2CppString* message, Il2CppString* link) {
		return ((R (*)(NativeTextShare*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x155BC94))(this, title, message, link);
	}
	template <typename R = uintptr_t> R ShareTextInAnroid(Il2CppString* title, Il2CppString* message, Il2CppString* link) {
		return ((R (*)(NativeTextShare*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x155BCCC))(this, title, message, link);
	}
	template <typename R = bool> R ShareTextInAnroidb__7_0() {
		return ((R (*)(NativeTextShare*))(Il2CppBase() + 0x155BD98))(this);
	}

};

