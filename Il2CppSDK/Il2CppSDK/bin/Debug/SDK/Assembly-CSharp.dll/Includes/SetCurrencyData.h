#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetCurrencyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetCurrencyData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = CurrencyType*> R& CurrencyType() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SetCurrencyData*, uintptr_t))(Il2CppBase() + 0x1623F0C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SetCurrencyData*, uintptr_t))(Il2CppBase() + 0x1623F70))(this, reader);
	}

};
