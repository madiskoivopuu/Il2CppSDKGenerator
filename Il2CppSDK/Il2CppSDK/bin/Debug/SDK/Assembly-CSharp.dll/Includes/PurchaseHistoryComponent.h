#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseHistoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseHistoryComponent"));
	}

	template <typename T = Il2CppList<PurchaseEntry*>*> T& Entries() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = PurchaseEntry*> T GetPurchaseByProductId(Il2CppString* productId) {
		return ((T (*)(PurchaseHistoryComponent*, Il2CppString*))(Il2CppBase() + 0x11B787C))(this, productId);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PurchaseHistoryComponent*, uintptr_t))(Il2CppBase() + 0x11B7968))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PurchaseHistoryComponent*, uintptr_t))(Il2CppBase() + 0x11B7B60))(this, writer);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PurchaseHistoryComponent*, Il2CppObject*))(Il2CppBase() + 0x11B7CC8))(this, targetObject);
	}

};

