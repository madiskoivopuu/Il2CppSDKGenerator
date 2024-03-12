#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowDialog(uintptr_t manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, int32_t price, uintptr_t parent, void* onClose) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, uintptr_t, void*))(Il2CppBase() + 0xEC3148))(0, manager, caption, message, button0, button1, price, parent, onClose);
	}
	template <typename T = uintptr_t> static T ShowDialog_1(uintptr_t manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, void* onClose, uintptr_t buttonsAnimatorType0, uintptr_t buttonsAnimatorType1) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEC32C8))(0, manager, caption, message, button0, button1, onClose, buttonsAnimatorType0, buttonsAnimatorType1);
	}
	template <typename T = uintptr_t> static T ShowDialog_2(uintptr_t manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, Il2CppString* itemName, uintptr_t itemIcon, int32_t price, uintptr_t parent, void* onClose, uintptr_t buttonsAnimatorType0, uintptr_t buttonsAnimatorType1) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, int32_t, uintptr_t, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEC3194))(0, manager, caption, message, button0, button1, itemName, itemIcon, price, parent, onClose, buttonsAnimatorType0, buttonsAnimatorType1);
	}

};

}
