#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StorePurchaseResultWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePurchaseResultWindowHelper"));
	}


	template <typename T = StorePurchaseResultWindow*> static T ShowStorePurchaseResult(UIWindowsManager* manager, int32_t transactionId, uintptr_t onClose) {
		return ((T (*)(void *, UIWindowsManager*, int32_t, uintptr_t))(Il2CppBase() + 0x183B35C))(0, manager, transactionId, onClose);
	}
	template <typename T = StorePurchaseResultWindow*> static T GetStorePurchaseResultWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x183B4DC))(0, manager);
	}

};

