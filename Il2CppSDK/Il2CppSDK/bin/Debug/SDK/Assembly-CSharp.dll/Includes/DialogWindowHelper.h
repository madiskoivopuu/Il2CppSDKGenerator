#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogWindowHelper"));
	}


	template <typename T = DialogWindow*> static T ShowDialog(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, int32_t price, IUIWindow* parent, Action1int32_t>* onClose) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, IUIWindow*, Action1int32_t>*))(Il2CppBase() + 0xEC3148))(0, manager, caption, message, button0, button1, price, parent, onClose);
	}
	template <typename T = DialogWindow*> static T ShowDialog_1(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, Action1int32_t>* onClose, ButtonsAnimatorType* buttonsAnimatorType0, ButtonsAnimatorType* buttonsAnimatorType1) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*, ButtonsAnimatorType*, ButtonsAnimatorType*))(Il2CppBase() + 0xEC32C8))(0, manager, caption, message, button0, button1, onClose, buttonsAnimatorType0, buttonsAnimatorType1);
	}
	template <typename T = DialogWindow*> static T ShowDialog_2(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, Il2CppString* itemName, Icon* itemIcon, int32_t price, IUIWindow* parent, Action1int32_t>* onClose, ButtonsAnimatorType* buttonsAnimatorType0, ButtonsAnimatorType* buttonsAnimatorType1) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*, int32_t, IUIWindow*, Action1int32_t>*, ButtonsAnimatorType*, ButtonsAnimatorType*))(Il2CppBase() + 0xEC3194))(0, manager, caption, message, button0, button1, itemName, itemIcon, price, parent, onClose, buttonsAnimatorType0, buttonsAnimatorType1);
	}

};

