#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyToInventoryOnDeleteComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyToInventoryOnDeleteComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ToCommonInventory() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyToInventoryOnDeleteComponent*, Il2CppObject*))(Il2CppBase() + 0x1895788))(this, target);
	}

};

