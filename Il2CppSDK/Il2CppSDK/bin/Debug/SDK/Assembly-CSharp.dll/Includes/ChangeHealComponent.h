#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeHealComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeHealComponent"));
	}

	 Nullable1float>*& Coef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ChangeHealComponent*, Il2CppObject*))(Il2CppBase() + 0x13EA6B4))(this, target);
	}

};

