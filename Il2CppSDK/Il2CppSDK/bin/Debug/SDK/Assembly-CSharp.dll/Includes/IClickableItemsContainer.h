#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClickableItemsContainer"));
	}


	 Il2CppDictionary<int32_t, IClickable*>* get_ClickableItems() {
		return ((Il2CppDictionary<int32_t, IClickable*>* (*)(IClickableItemsContainer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_GridWidth() {
		return ((R (*)(IClickableItemsContainer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ChangeScrollPosition(int32_t nextIndex) {
		return ((R (*)(IClickableItemsContainer*, int32_t))(Il2CppBase() + 0x0))(this, nextIndex);
	}

};

