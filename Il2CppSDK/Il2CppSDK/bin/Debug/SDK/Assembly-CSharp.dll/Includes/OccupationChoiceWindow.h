#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class OccupationChoiceWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OccupationChoiceWindow"));
	}

	template <typename R = uintptr_t> R& NPCIcon() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& NPCTitleText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& NPCDialogueText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& AcceptButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& AcceptButtonText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppArray<OccupationButtonHelper*>*> R& ButtonHelpers() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = ButtonHelper*> R& _currentButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(OccupationChoiceWindow*))(Il2CppBase() + 0x11D5070))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(OccupationChoiceWindow*))(Il2CppBase() + 0x11D5764))(this);
	}
	template <typename R = void> R OnOccupationChoise(int32_t index) {
		return ((R (*)(OccupationChoiceWindow*, int32_t))(Il2CppBase() + 0x11D587C))(this, index);
	}
	template <typename R = void> R OnAcceptButtonClickHandler() {
		return ((R (*)(OccupationChoiceWindow*))(Il2CppBase() + 0x11D5940))(this);
	}
	template <typename R = void> R OnButtonClickedHandler(ButtonHelper* button) {
		return ((R (*)(OccupationChoiceWindow*, ButtonHelper*))(Il2CppBase() + 0x11D59D4))(this, button);
	}
	template <typename R = void> R DeselectOtherButton(ButtonHelper* button) {
		return ((R (*)(OccupationChoiceWindow*, ButtonHelper*))(Il2CppBase() + 0x11D59D8))(this, button);
	}
	template <typename R = void> R SetAcceptButtonInteractive(bool interactive) {
		return ((R (*)(OccupationChoiceWindow*, bool))(Il2CppBase() + 0x11D54E0))(this, interactive);
	}

};

