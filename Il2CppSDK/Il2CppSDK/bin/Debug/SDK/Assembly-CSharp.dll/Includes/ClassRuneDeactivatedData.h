#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRuneDeactivatedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneDeactivatedData"));
	}

	template <typename R = Il2CppArray<RuneSlotKey>*> R& Keys() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ClassRuneDeactivatedData*, uintptr_t))(Il2CppBase() + 0x159CFF4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ClassRuneDeactivatedData*, uintptr_t))(Il2CppBase() + 0x159D060))(this, reader);
	}

};

