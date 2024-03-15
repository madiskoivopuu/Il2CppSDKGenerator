#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneComponent"));
	}

	template <typename R = RuneType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RuneComponent*, Il2CppObject*))(Il2CppBase() + 0x11A9E00))(this, target);
	}

};

