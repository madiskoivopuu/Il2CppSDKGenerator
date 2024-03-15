#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResetStoreProductsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResetStoreProductsData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = StoreCategory*> R& Category() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ResetStoreProductsData*, uintptr_t))(Il2CppBase() + 0x119A66C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ResetStoreProductsData*, uintptr_t))(Il2CppBase() + 0x119A6C0))(this, reader);
	}

};

