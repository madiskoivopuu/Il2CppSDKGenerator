#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseData"));
	}

	template <typename T = ExternalStore*> T& Store() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PurchaseMethod*> T& Method() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& BlueprintName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ProductId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Payload() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& TransactionId() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

