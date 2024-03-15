#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LinkConflictWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkConflictWindow"));
	}

	template <typename R = uintptr_t> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& SelectButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CancelButtonText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = AccountInfoView*> R& LocalUser() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = AccountInfoView*> R& ConflictedUser() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = AccountInfoView*> R& _selectedUser() {
		return *(R*)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(LinkConflictWindow*))(Il2CppBase() + 0x142CD10))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(LinkConflictWindow*))(Il2CppBase() + 0x142CDEC))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(LinkConflictWindow*, float))(Il2CppBase() + 0x142D180))(this, deltaTime);
	}
	template <typename R = void> R OnAccountInfoSelected(AccountInfoView* accountInfoView) {
		return ((R (*)(LinkConflictWindow*, AccountInfoView*))(Il2CppBase() + 0x142D27C))(this, accountInfoView);
	}
	template <typename R = void> R OnSelectAccountButtonClick() {
		return ((R (*)(LinkConflictWindow*))(Il2CppBase() + 0x142D2B8))(this);
	}

};

