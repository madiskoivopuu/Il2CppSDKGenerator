#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class OccupationChoiceWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OccupationChoiceWindow"));
	}

	template <typename T = uintptr_t> T& NPCIcon() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& NPCTitleText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NPCDialogueText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& AcceptButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AcceptButtonText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ButtonHelpers() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = ButtonHelper*> T& _currentButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(OccupationChoiceWindow*))(Il2CppBase() + 0x11D5070))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(OccupationChoiceWindow*))(Il2CppBase() + 0x11D5764))(this);
	}
	template <typename T = void> T OnOccupationChoise(int32_t index) {
		return ((T (*)(OccupationChoiceWindow*, int32_t))(Il2CppBase() + 0x11D587C))(this, index);
	}
	template <typename T = void> T OnAcceptButtonClickHandler() {
		return ((T (*)(OccupationChoiceWindow*))(Il2CppBase() + 0x11D5940))(this);
	}
	template <typename T = void> T OnButtonClickedHandler(ButtonHelper* button) {
		return ((T (*)(OccupationChoiceWindow*, ButtonHelper*))(Il2CppBase() + 0x11D59D4))(this, button);
	}
	template <typename T = void> T DeselectOtherButton(ButtonHelper* button) {
		return ((T (*)(OccupationChoiceWindow*, ButtonHelper*))(Il2CppBase() + 0x11D59D8))(this, button);
	}
	template <typename T = void> T SetAcceptButtonInteractive(bool interactive) {
		return ((T (*)(OccupationChoiceWindow*, bool))(Il2CppBase() + 0x11D54E0))(this, interactive);
	}

};

