#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClickableItemsContainer"));
	}


	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_ClickableItems() {
		return ((T (*)(IClickableItemsContainer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_GridWidth() {
		return ((T (*)(IClickableItemsContainer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ChangeScrollPosition(int32_t nextIndex) {
		return ((T (*)(IClickableItemsContainer*, int32_t))(Il2CppBase() + 0x0))(this, nextIndex);
	}

};

}
