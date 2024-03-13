#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDDurabilityPuppet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDDurabilityPuppet"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Icons() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(HUDDurabilityPuppet*))(Il2CppBase() + 0x1451E58))(this);
	}

};

