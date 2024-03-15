#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class GoogleCMPLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleCMPLS"));
	}


	template <typename R = uintptr_t> R Start() {
		return ((R (*)(GoogleCMPLS*))(Il2CppBase() + 0x12E1D70))(this);
	}

};

