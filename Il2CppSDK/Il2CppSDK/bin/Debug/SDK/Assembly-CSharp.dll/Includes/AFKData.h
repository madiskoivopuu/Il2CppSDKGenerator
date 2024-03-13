#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKData"));
	}

	template <typename T = bool> T& WindowOpenedState() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AFKData*, uintptr_t))(Il2CppBase() + 0x1D942A4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AFKData*, uintptr_t))(Il2CppBase() + 0x1D942E8))(this, reader);
	}

};

