#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GeneratedRewardComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneratedRewardComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PremiumResources() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsEmpty() {
		return ((T (*)(GeneratedRewardComponent*))(Il2CppBase() + 0x176F750))(this);
	}

};

