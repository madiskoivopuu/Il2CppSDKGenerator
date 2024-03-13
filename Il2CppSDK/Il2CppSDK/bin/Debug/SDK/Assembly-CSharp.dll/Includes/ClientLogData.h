#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientLogData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientLogData"));
	}

	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ClientLogData*, uintptr_t))(Il2CppBase() + 0xE1944C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ClientLogData*, uintptr_t))(Il2CppBase() + 0xE19490))(this, reader);
	}

};

