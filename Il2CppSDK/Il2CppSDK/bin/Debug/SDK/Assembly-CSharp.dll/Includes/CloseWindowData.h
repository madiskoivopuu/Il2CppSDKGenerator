#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloseWindowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloseWindowData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CloseWindowData*, uintptr_t))(Il2CppBase() + 0xE23590))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CloseWindowData*, uintptr_t))(Il2CppBase() + 0xE235CC))(this, reader);
	}

};

}
