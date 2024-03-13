#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageWithItemsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWithItemsWindowHelper"));
	}


	template <typename T = MessageWithItemsWindow*> static T ShowMessageWithItems(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* description, Il2CppString* noButton, Il2CppString* yesButtton, ItemMessageData* itemFrom, Il2CppArray<uintptr_t>* itemsTo, Action1float>* onSuccess) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, ItemMessageData*, Il2CppArray<uintptr_t>*, Action1float>*))(Il2CppBase() + 0x12D0828))(0, manager, caption, description, noButton, yesButtton, itemFrom, itemsTo, onSuccess);
	}

};

