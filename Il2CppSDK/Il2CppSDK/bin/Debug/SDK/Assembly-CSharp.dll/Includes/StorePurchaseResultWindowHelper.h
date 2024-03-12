#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StorePurchaseResultWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePurchaseResultWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStorePurchaseResult(uintptr_t manager, int32_t transactionId, uintptr_t onClose) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x183B35C))(0, manager, transactionId, onClose);
	}
	template <typename T = uintptr_t> static T GetStorePurchaseResultWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x183B4DC))(0, manager);
	}

};

}
