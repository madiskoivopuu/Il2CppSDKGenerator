#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Price
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Price"));
	}

	template <typename R = PriceType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Price*, uintptr_t))(Il2CppBase() + 0x10BBBFC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Price*, uintptr_t))(Il2CppBase() + 0x10BBC50))(this, reader);
	}
	template <typename R = bool> R Equals(Price* other) {
		return ((R (*)(Price*, Price*))(Il2CppBase() + 0x10BBD24))(this, other);
	}

};

