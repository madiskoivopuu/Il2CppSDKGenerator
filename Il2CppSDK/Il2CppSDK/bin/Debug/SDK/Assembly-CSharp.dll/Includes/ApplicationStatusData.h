#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplicationStatusData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplicationStatusData"));
	}

	template <typename R = bool> R& Paused() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& IsAFK() {
		return *(R*)((uintptr_t)this + 0x1);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ApplicationStatusData*, uintptr_t))(Il2CppBase() + 0x1892824))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ApplicationStatusData*, uintptr_t))(Il2CppBase() + 0x1892878))(this, reader);
	}

};

