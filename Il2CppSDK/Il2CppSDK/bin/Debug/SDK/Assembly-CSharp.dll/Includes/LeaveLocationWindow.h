#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class LeaveLocationWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeaveLocationWindow"));
	}

	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _messageText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _сancelBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _acceptBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(LeaveLocationWindow*))(Il2CppBase() + 0x142A464))(this);
	}
	template <typename T = void> T OnAcceptClick() {
		return ((T (*)(LeaveLocationWindow*))(Il2CppBase() + 0x142B06C))(this);
	}
	template <typename T = void> T OnCancelClick() {
		return ((T (*)(LeaveLocationWindow*))(Il2CppBase() + 0x142B0FC))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(LeaveLocationWindow*))(Il2CppBase() + 0x142ADF0))(this);
	}

};

}
