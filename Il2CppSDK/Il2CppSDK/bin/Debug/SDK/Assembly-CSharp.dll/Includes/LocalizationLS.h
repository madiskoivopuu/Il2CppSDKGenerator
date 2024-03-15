#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseLoaderStep.h" 

class LocalizationLS : public BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationLS"));
	}


	template <typename R = uintptr_t> R Start() {
		return ((R (*)(LocalizationLS*))(Il2CppBase() + 0x144526C))(this);
	}
	template <typename R = void> R SetupLocalization() {
		return ((R (*)(LocalizationLS*))(Il2CppBase() + 0x14452E4))(this);
	}

};

