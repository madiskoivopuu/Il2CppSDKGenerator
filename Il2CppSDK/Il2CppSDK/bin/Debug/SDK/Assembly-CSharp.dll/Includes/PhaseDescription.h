#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PhaseDescription
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhaseDescription"));
	}

	template <typename R = Il2CppString*> R& Chapter() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Description() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Skills() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

