#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResetStoreProductsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResetStoreProductsData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Category() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ResetStoreProductsData*, uintptr_t))(Il2CppBase() + 0x119A66C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ResetStoreProductsData*, uintptr_t))(Il2CppBase() + 0x119A6C0))(this, reader);
	}

};

}
