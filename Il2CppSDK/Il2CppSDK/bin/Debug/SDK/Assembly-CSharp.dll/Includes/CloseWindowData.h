#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloseWindowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloseWindowData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CloseWindowData*, uintptr_t))(Il2CppBase() + 0xE23590))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CloseWindowData*, uintptr_t))(Il2CppBase() + 0xE235CC))(this, reader);
	}

};

