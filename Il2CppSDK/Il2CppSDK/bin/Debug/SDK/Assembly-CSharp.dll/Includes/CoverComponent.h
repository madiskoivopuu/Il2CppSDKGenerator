#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoverComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoverComponent"));
	}

	template <typename R = Il2CppString*> R& EffectName() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CoverComponent*, Il2CppObject*))(Il2CppBase() + 0x1341094))(this, targetObject);
	}

};

