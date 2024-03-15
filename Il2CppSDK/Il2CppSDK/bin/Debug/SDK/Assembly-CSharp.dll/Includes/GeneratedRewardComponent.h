#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GeneratedRewardComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneratedRewardComponent"));
	}

	template <typename R = Il2CppArray<Resource>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Resource>*> R& PremiumResources() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R IsEmpty() {
		return ((R (*)(GeneratedRewardComponent*))(Il2CppBase() + 0x176F750))(this);
	}

};

