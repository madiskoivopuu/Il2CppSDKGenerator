#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyToInventoryOnDeleteComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyToInventoryOnDeleteComponent"));
	}

	template <typename R = Il2CppArray<Resource>*> R& ToCommonInventory() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyToInventoryOnDeleteComponent*, Il2CppObject*))(Il2CppBase() + 0x1895788))(this, target);
	}

};

