#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Price
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Price"));
	}

	template <typename T = PriceType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Price*, uintptr_t))(Il2CppBase() + 0x10BBBFC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Price*, uintptr_t))(Il2CppBase() + 0x10BBC50))(this, reader);
	}
	template <typename T = bool> T Equals(Price* other) {
		return ((T (*)(Price*, Price*))(Il2CppBase() + 0x10BBD24))(this, other);
	}

};

