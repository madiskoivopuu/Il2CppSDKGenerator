#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockedEmoji
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedEmoji"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsNew() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UnlockedEmoji*, uintptr_t))(Il2CppBase() + 0x22A2E7C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UnlockedEmoji*, uintptr_t))(Il2CppBase() + 0x22A2F44))(this, writer);
	}

};

}
