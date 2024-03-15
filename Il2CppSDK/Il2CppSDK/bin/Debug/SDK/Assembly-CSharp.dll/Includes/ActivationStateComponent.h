#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivationStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActivationStateComponent"));
	}

	 Nullable1int64_t>*& Time() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x10);
	}


};

