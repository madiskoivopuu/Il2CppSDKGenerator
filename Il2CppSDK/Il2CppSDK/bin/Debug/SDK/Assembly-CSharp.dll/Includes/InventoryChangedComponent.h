#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryChangedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryChangedComponent"));
	}

	template <typename R = PlayerInventoryType> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

