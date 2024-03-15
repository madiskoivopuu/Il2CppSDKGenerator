#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientLogData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientLogData"));
	}

	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ClientLogData*, uintptr_t))(Il2CppBase() + 0xE1944C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ClientLogData*, uintptr_t))(Il2CppBase() + 0xE19490))(this, reader);
	}

};

