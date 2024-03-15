#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BopComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BopComponent"));
	}

	template <typename R = Il2CppString*> R& ActiveCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BopComponent*, Il2CppObject*))(Il2CppBase() + 0x16C96B0))(this, targetObject);
	}

};

