#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StorePurchaseResultWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePurchaseResultWindowHelper"));
	}


	template <typename R = StorePurchaseResultWindow*> static R ShowStorePurchaseResult(UIWindowsManager* manager, int32_t transactionId, uintptr_t onClose) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, uintptr_t))(Il2CppBase() + 0x183B35C))(0, manager, transactionId, onClose);
	}
	template <typename R = StorePurchaseResultWindow*> static R GetStorePurchaseResultWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x183B4DC))(0, manager);
	}

};

