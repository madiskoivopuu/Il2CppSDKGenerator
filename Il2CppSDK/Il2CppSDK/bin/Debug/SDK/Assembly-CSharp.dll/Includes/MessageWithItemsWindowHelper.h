#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageWithItemsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWithItemsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowMessageWithItems(uintptr_t manager, Il2CppString* caption, Il2CppString* description, Il2CppString* noButton, Il2CppString* yesButtton, uintptr_t itemFrom, Il2CppArray<uintptr_t>* itemsTo, void* onSuccess) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x12D0828))(0, manager, caption, description, noButton, yesButtton, itemFrom, itemsTo, onSuccess);
	}

};

}
