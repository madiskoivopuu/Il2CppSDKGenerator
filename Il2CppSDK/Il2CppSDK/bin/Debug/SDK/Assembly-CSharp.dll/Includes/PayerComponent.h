#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PayerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PayerComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PayerComponent*, uintptr_t))(Il2CppBase() + 0x11EA2A4))(this, target);
	}

};

}
