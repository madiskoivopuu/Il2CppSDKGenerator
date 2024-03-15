#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ValidatePurchaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ValidatePurchaseData"));
	}

	template <typename R = Il2CppString*> R& ProductId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Payload() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& TransactionId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ProtoModels::PurchaseProvider> R& Store() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& USDPrice() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppString*> R& HuaweiToken() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ValidatePurchaseData*, uintptr_t))(Il2CppBase() + 0x15C3AA4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ValidatePurchaseData*, uintptr_t))(Il2CppBase() + 0x15C3B38))(this, reader);
	}

};

