#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep" 

class LocalizationLS: BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationLS"));
	}


	template <typename T = uintptr_t> T Start() {
		return ((T (*)(LocalizationLS*))(Il2CppBase() + 0x144526C))(this);
	}
	template <typename T = void> T SetupLocalization() {
		return ((T (*)(LocalizationLS*))(Il2CppBase() + 0x14452E4))(this);
	}

};

}
