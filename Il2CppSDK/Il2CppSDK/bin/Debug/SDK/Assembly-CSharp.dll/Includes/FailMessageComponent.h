#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FailMessageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FailMessageComponent"));
	}

	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(FailMessageComponent*, Il2CppObject*))(Il2CppBase() + 0x16926E4))(this, target);
	}

};

