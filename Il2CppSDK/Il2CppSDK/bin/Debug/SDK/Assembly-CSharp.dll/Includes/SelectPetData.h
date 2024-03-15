#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectPetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectPetData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Fast() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SelectPetData*, uintptr_t))(Il2CppBase() + 0x136236C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SelectPetData*, uintptr_t))(Il2CppBase() + 0x13623C0))(this, reader);
	}

};

