#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ErrorData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorData"));
	}

	template <typename R = Commands*> R& CommandId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Errors*> R& ErrorId() {
		return *(R*)((uintptr_t)this + 0x2);
	}
	template <typename R = Il2CppString*> R& Msg() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ErrorData*, uintptr_t))(Il2CppBase() + 0x137EA30))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ErrorData*, uintptr_t))(Il2CppBase() + 0x137EA94))(this, reader);
	}

};

