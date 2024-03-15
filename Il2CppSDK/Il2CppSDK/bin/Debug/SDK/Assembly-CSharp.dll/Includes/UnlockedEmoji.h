#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockedEmoji
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedEmoji"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Order() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& IsNew() {
		return *(R*)((uintptr_t)this + 0xC);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(UnlockedEmoji*, uintptr_t))(Il2CppBase() + 0x22A2E7C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(UnlockedEmoji*, uintptr_t))(Il2CppBase() + 0x22A2F44))(this, writer);
	}

};

