#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemFilterHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemFilterHelper"));
	}


	template <typename T = void> static T GetFilteredItems(ItemFilter* filter, ICommonContexts* contexts, Il2CppList<ItemEntity*>* itemEntities) {
		return ((T (*)(void *, ItemFilter*, ICommonContexts*, Il2CppList<ItemEntity*>*))(Il2CppBase() + 0x14C805C))(0, filter, contexts, itemEntities);
	}

};

