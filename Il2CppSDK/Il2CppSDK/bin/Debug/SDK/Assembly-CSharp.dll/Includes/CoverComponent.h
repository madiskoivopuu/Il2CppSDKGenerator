#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoverComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoverComponent"));
	}

	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(CoverComponent*, Il2CppObject*))(Il2CppBase() + 0x1341094))(this, targetObject);
	}

};

