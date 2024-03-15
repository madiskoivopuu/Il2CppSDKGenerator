#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeComponent"));
	}

	template <typename R = CurrencyType> R& PriceCurrency() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& StartTimeTempBuff() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Limit() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& ResetTimeout() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	 Nullable1<int32_t>*& ResetValue() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& ConsiderDurability() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<ExchangeResource>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& WindowLine() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& NoCurrencyWindowLine() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& NoCurrencyPopUpCaption() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& NoCurrencyPopUpLine() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& HintLine() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& Effect() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ExchangeComponent*, Il2CppObject*))(Il2CppBase() + 0x17947D8))(this, target);
	}

};

