#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BindComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BindComponent"));
	}

	template <typename R = EntityId> R& Target() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BindComponent*, Il2CppObject*))(Il2CppBase() + 0x16BB3F8))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BindComponent*, uintptr_t))(Il2CppBase() + 0x16BB48C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BindComponent*, uintptr_t))(Il2CppBase() + 0x16BB50C))(this, writer);
	}

};

