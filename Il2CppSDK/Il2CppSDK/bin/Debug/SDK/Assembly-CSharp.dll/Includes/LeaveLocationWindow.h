#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LeaveLocationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeaveLocationWindow"));
	}

	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _messageText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _сancelBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _acceptBtn() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Il2CppList<RewardResourceView*>*& _resourceViews() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(LeaveLocationWindow*))(Il2CppBase() + 0x142A464))(this);
	}
	template <typename R = void> R OnAcceptClick() {
		return ((R (*)(LeaveLocationWindow*))(Il2CppBase() + 0x142B06C))(this);
	}
	template <typename R = void> R OnCancelClick() {
		return ((R (*)(LeaveLocationWindow*))(Il2CppBase() + 0x142B0FC))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(LeaveLocationWindow*))(Il2CppBase() + 0x142ADF0))(this);
	}

};

