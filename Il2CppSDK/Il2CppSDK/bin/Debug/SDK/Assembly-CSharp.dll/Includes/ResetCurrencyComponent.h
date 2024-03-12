#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResetCurrencyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResetCurrencyComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ResetCurrencyComponent*, uintptr_t))(Il2CppBase() + 0x119A648))(this, targetObject);
	}

};

}
