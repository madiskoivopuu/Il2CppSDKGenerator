#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseToTargetInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseToTargetInventoryData"));
	}

	template <typename R = CurrencyType*> R& CurrencyType() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& SlotIndex() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PurchaseToTargetInventoryData*, uintptr_t))(Il2CppBase() + 0x11B9EB8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PurchaseToTargetInventoryData*, uintptr_t))(Il2CppBase() + 0x11B9F0C))(this, reader);
	}

};

