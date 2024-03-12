#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplicationStatusData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplicationStatusData"));
	}

	template <typename T = bool> T& Paused() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsAFK() {
		return *(T*)((uintptr_t)this + 0x1);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ApplicationStatusData*, uintptr_t))(Il2CppBase() + 0x1892824))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ApplicationStatusData*, uintptr_t))(Il2CppBase() + 0x1892878))(this, reader);
	}

};

}
