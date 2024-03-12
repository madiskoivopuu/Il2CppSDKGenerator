#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseForItemsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseForItemsData"));
	}

	template <typename T = int64_t> T& StoreId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PurchaseForItemsData*, uintptr_t))(Il2CppBase() + 0x11B7724))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PurchaseForItemsData*, uintptr_t))(Il2CppBase() + 0x11B7778))(this, reader);
	}

};

}
