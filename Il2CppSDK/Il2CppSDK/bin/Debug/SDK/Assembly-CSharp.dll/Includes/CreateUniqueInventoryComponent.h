#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateUniqueInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateUniqueInventoryComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RandomGroups() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(CreateUniqueInventoryComponent*, uintptr_t))(Il2CppBase() + 0x1BCDAEC))(this, targetObject);
	}

};

}
