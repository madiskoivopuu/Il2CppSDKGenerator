#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeHealComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeHealComponent"));
	}

	template <typename T = Nullable1float>*> T& Coef() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ChangeHealComponent*, Il2CppObject*))(Il2CppBase() + 0x13EA6B4))(this, target);
	}

};

