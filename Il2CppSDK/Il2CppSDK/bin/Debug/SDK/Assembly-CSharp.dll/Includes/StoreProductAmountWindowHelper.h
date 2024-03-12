#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductAmountWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductAmountWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStoreProductAmount(uintptr_t manager, int64_t entityId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x18311CC))(0, manager, entityId);
	}

};

}
