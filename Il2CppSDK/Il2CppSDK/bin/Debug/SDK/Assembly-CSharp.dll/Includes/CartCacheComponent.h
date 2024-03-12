#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CartCacheComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartCacheComponent"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CartCacheComponent*, uintptr_t))(Il2CppBase() + 0x15B6ED0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CartCacheComponent*, uintptr_t))(Il2CppBase() + 0x15B6F84))(this, reader);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CartCacheComponent*, uintptr_t))(Il2CppBase() + 0x15B711C))(this, target);
	}

};

}
