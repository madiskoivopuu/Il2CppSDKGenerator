#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProductConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ProductConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x16E4CC0))(this, target);
	}

};
