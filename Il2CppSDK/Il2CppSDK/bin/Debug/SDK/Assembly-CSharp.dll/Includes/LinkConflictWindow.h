#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LinkConflictWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkConflictWindow"));
	}

	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& SelectButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CancelButtonText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = AccountInfoView*> T& LocalUser() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = AccountInfoView*> T& ConflictedUser() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = AccountInfoView*> T& _selectedUser() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LinkConflictWindow*))(Il2CppBase() + 0x142CD10))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(LinkConflictWindow*))(Il2CppBase() + 0x142CDEC))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(LinkConflictWindow*, float))(Il2CppBase() + 0x142D180))(this, deltaTime);
	}
	template <typename T = void> T OnAccountInfoSelected(AccountInfoView* accountInfoView) {
		return ((T (*)(LinkConflictWindow*, AccountInfoView*))(Il2CppBase() + 0x142D27C))(this, accountInfoView);
	}
	template <typename T = void> T OnSelectAccountButtonClick() {
		return ((T (*)(LinkConflictWindow*))(Il2CppBase() + 0x142D2B8))(this);
	}

};

