#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyExchangeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeData"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& BuffSlotID() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CurrencyExchangeData*, uintptr_t))(Il2CppBase() + 0x1BD11A4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CurrencyExchangeData*, uintptr_t))(Il2CppBase() + 0x1BD11F8))(this, reader);
	}

};

