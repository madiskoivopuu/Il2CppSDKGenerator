#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseHistoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseHistoryComponent"));
	}

	 Il2CppList<PurchaseEntry*>*& Entries() {
		return *(Il2CppList<PurchaseEntry*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = PurchaseEntry*> R GetPurchaseByProductId(Il2CppString* productId) {
		return ((R (*)(PurchaseHistoryComponent*, Il2CppString*))(Il2CppBase() + 0x11B787C))(this, productId);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PurchaseHistoryComponent*, uintptr_t))(Il2CppBase() + 0x11B7968))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PurchaseHistoryComponent*, uintptr_t))(Il2CppBase() + 0x11B7B60))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PurchaseHistoryComponent*, Il2CppObject*))(Il2CppBase() + 0x11B7CC8))(this, targetObject);
	}

};

