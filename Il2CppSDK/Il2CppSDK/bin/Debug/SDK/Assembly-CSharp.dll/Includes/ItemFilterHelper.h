#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemFilterHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemFilterHelper"));
	}


	template <typename T = void> static T GetFilteredItems(uintptr_t filter, uintptr_t contexts, Il2CppList<uintptr_t>* itemEntities) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x14C805C))(0, filter, contexts, itemEntities);
	}

};

}
