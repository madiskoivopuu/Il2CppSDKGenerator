#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuyAmountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuyAmountComponent"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Parent() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BuyAmountComponent*, Il2CppObject*))(Il2CppBase() + 0x15B1FFC))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BuyAmountComponent*, uintptr_t))(Il2CppBase() + 0x15B209C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BuyAmountComponent*, uintptr_t))(Il2CppBase() + 0x15B2138))(this, writer);
	}

};

