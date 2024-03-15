#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiscountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiscountComponent"));
	}

	template <typename R = Il2CppArray<Discount*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DiscountComponent*, Il2CppObject*))(Il2CppBase() + 0x1302374))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DiscountComponent*, uintptr_t))(Il2CppBase() + 0x13023F0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DiscountComponent*, uintptr_t))(Il2CppBase() + 0x130254C))(this, writer);
	}
	template <typename R = Discount*> R GetDiscountWithIndex(int32_t index) {
		return ((R (*)(DiscountComponent*, int32_t))(Il2CppBase() + 0x13025F4))(this, index);
	}

};

