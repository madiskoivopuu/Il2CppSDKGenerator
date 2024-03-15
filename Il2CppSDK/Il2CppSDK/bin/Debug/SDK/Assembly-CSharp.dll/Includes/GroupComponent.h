#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GroupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GroupComponent"));
	}

	template <typename R = Il2CppArray<Slot*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GroupComponent*, Il2CppObject*))(Il2CppBase() + 0x12E331C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GroupComponent*, uintptr_t))(Il2CppBase() + 0x12E33B4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GroupComponent*, uintptr_t))(Il2CppBase() + 0x12E352C))(this, writer);
	}

};

