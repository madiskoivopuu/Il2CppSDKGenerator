#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResetCurrencyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResetCurrencyComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ResetCurrencyComponent*, Il2CppObject*))(Il2CppBase() + 0x119A648))(this, targetObject);
	}

};

