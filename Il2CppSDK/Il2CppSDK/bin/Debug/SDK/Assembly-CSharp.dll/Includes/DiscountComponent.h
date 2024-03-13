#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiscountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiscountComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(DiscountComponent*, Il2CppObject*))(Il2CppBase() + 0x1302374))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DiscountComponent*, uintptr_t))(Il2CppBase() + 0x13023F0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DiscountComponent*, uintptr_t))(Il2CppBase() + 0x130254C))(this, writer);
	}
	template <typename T = Discount*> T GetDiscountWithIndex(int32_t index) {
		return ((T (*)(DiscountComponent*, int32_t))(Il2CppBase() + 0x13025F4))(this, index);
	}

};

