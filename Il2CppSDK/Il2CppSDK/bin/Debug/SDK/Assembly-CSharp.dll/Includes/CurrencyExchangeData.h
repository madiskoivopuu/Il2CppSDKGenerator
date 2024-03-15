#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyExchangeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeData"));
	}

	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& BuffSlotID() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CurrencyExchangeData*, uintptr_t))(Il2CppBase() + 0x1BD11A4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CurrencyExchangeData*, uintptr_t))(Il2CppBase() + 0x1BD11F8))(this, reader);
	}

};

