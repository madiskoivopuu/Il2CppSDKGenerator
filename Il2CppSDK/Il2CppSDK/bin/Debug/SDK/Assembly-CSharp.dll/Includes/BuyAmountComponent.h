#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuyAmountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuyAmountComponent"));
	}

	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Parent() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BuyAmountComponent*, Il2CppObject*))(Il2CppBase() + 0x15B1FFC))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BuyAmountComponent*, uintptr_t))(Il2CppBase() + 0x15B209C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BuyAmountComponent*, uintptr_t))(Il2CppBase() + 0x15B2138))(this, writer);
	}

};

