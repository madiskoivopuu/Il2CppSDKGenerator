#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseForItemsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseForItemsData"));
	}

	template <typename R = int64_t> R& StoreId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PurchaseForItemsData*, uintptr_t))(Il2CppBase() + 0x11B7724))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PurchaseForItemsData*, uintptr_t))(Il2CppBase() + 0x11B7778))(this, reader);
	}

};

