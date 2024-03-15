#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebuffComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebuffComponent"));
	}

	template <typename R = bool> R& NoAggro() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DebuffComponent*, Il2CppObject*))(Il2CppBase() + 0xEB5D90))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DebuffComponent*, uintptr_t))(Il2CppBase() + 0xEB5E24))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DebuffComponent*, uintptr_t))(Il2CppBase() + 0xEB5E90))(this, writer);
	}

};

