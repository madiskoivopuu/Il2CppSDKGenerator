#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDDurabilityPuppet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDDurabilityPuppet"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& Icons() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R UpdateView() {
		return ((R (*)(HUDDurabilityPuppet*))(Il2CppBase() + 0x1451E58))(this);
	}

};

