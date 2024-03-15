#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseData"));
	}

	template <typename R = ExternalStore*> R& Store() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = PurchaseMethod*> R& Method() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& BlueprintName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& ProductId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Payload() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& TransactionId() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

