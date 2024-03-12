#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetCurrencyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetCurrencyData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SetCurrencyData*, uintptr_t))(Il2CppBase() + 0x1623F0C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SetCurrencyData*, uintptr_t))(Il2CppBase() + 0x1623F70))(this, reader);
	}

};

}
