#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FailMessageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FailMessageComponent"));
	}

	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(FailMessageComponent*, Il2CppObject*))(Il2CppBase() + 0x16926E4))(this, target);
	}

};

