#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GooglePayloadJsonInner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GooglePayloadJsonInner"));
	}

	template <typename T = Il2CppString*> T& orderId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& packageName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& productId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& purchaseTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& purchaseState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& purchaseToken() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
