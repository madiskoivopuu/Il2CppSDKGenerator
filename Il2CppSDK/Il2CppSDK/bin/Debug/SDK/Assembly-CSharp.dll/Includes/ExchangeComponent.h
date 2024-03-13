#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeComponent"));
	}

	template <typename T = CurrencyType*> T& PriceCurrency() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& StartTimeTempBuff() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Limit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& ResetTimeout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Nullable1int32_t>*> T& ResetValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ConsiderDurability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& WindowLine() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& NoCurrencyWindowLine() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& NoCurrencyPopUpCaption() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& NoCurrencyPopUpLine() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& HintLine() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& Effect() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ExchangeComponent*, Il2CppObject*))(Il2CppBase() + 0x17947D8))(this, target);
	}

};

