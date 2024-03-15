#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitActionEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HitActionEffectComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(HitActionEffectComponent*, Il2CppObject*))(Il2CppBase() + 0x1C5338C))(this, targetObject);
	}

};

