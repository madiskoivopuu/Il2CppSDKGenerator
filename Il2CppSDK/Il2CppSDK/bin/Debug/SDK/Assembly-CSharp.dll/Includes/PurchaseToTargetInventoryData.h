#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseToTargetInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseToTargetInventoryData"));
	}

	template <typename T = CurrencyType*> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PurchaseToTargetInventoryData*, uintptr_t))(Il2CppBase() + 0x11B9EB8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PurchaseToTargetInventoryData*, uintptr_t))(Il2CppBase() + 0x11B9F0C))(this, reader);
	}

};

