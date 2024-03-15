#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CartCacheComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartCacheComponent"));
	}

	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Resource*>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CartCacheComponent*, uintptr_t))(Il2CppBase() + 0x15B6ED0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CartCacheComponent*, uintptr_t))(Il2CppBase() + 0x15B6F84))(this, reader);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CartCacheComponent*, Il2CppObject*))(Il2CppBase() + 0x15B711C))(this, target);
	}

};

