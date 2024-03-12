#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ValidatePurchaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ValidatePurchaseData"));
	}

	template <typename T = Il2CppString*> T& ProductId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Payload() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& TransactionId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Store() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& USDPrice() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& HuaweiToken() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ValidatePurchaseData*, uintptr_t))(Il2CppBase() + 0x15C3AA4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ValidatePurchaseData*, uintptr_t))(Il2CppBase() + 0x15C3B38))(this, reader);
	}

};

}
