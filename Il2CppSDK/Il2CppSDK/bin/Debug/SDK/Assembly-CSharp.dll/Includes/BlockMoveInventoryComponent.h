#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlockMoveInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlockMoveInventoryComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BlockMoveInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x16BBDAC))(this, targetObject);
	}

};

