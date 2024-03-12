#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class GoogleCMPLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleCMPLS"));
	}


	template <typename T = uintptr_t> T Start() {
		return ((T (*)(GoogleCMPLS*))(Il2CppBase() + 0x12E1D70))(this);
	}

};

}
