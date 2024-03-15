#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealResultComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealResultComponent"));
	}

	template <typename R = HealResultParams> R& Params() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(HealResultComponent*, uintptr_t))(Il2CppBase() + 0x128AAE4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(HealResultComponent*, uintptr_t))(Il2CppBase() + 0x128AC54))(this, writer);
	}

};

