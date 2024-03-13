#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitActionEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HitActionEffectComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(HitActionEffectComponent*, Il2CppObject*))(Il2CppBase() + 0x1C5338C))(this, targetObject);
	}

};

