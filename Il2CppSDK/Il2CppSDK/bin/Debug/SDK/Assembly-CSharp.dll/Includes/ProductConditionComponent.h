#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProductConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductConditionComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ProductConditionComponent*, uintptr_t))(Il2CppBase() + 0x16E4CC0))(this, target);
	}

};

}
