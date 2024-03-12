#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlockMoveInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlockMoveInventoryComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BlockMoveInventoryComponent*, uintptr_t))(Il2CppBase() + 0x16BBDAC))(this, targetObject);
	}

};

}
