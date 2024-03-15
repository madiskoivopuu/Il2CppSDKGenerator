#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKData"));
	}

	template <typename R = bool> R& WindowOpenedState() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AFKData*, uintptr_t))(Il2CppBase() + 0x1D942A4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AFKData*, uintptr_t))(Il2CppBase() + 0x1D942E8))(this, reader);
	}

};

