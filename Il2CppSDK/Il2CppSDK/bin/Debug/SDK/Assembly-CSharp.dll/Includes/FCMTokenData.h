#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FCMTokenData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FCMTokenData"));
	}

	template <typename T = Il2CppString*> T& Token() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& Platform() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FCMTokenData*, uintptr_t))(Il2CppBase() + 0x1691E34))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FCMTokenData*, uintptr_t))(Il2CppBase() + 0x1691E88))(this, reader);
	}

};

}
