#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MorphComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MorphComponent"));
	}

	template <typename R = Il2CppString*> R& Base() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Source() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MorphComponent*, Il2CppObject*))(Il2CppBase() + 0x1EAA7E0))(this, target);
	}

};

