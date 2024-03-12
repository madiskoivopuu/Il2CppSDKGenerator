#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ErrorData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorData"));
	}

	template <typename T = uintptr_t> T& CommandId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& ErrorId() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = Il2CppString*> T& Msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ErrorData*, uintptr_t))(Il2CppBase() + 0x137EA30))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ErrorData*, uintptr_t))(Il2CppBase() + 0x137EA94))(this, reader);
	}

};

}
