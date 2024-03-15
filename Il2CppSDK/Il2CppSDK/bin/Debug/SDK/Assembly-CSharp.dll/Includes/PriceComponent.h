#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PriceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriceComponent"));
	}

	template <typename R = Il2CppArray<Price>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PriceComponent*, Il2CppObject*))(Il2CppBase() + 0x16E3810))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PriceComponent*, uintptr_t))(Il2CppBase() + 0x16E388C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PriceComponent*, uintptr_t))(Il2CppBase() + 0x16E39E8))(this, writer);
	}
	template <typename R = Price> R GetPriceWithIndex(int32_t index) {
		return ((R (*)(PriceComponent*, int32_t))(Il2CppBase() + 0x16E3A90))(this, index);
	}

};

