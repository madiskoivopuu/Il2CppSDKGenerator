#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyExchangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeComponent"));
	}

	template <typename R = Il2CppString*> R& CurrencyItem() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Limit() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& ResetTimeout() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	 Nullable1int32_t>*& ResetValue() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& StartTimeTempBuff() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& BuffItem() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& BuffCoef() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& WindowLine() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& NoCurrencyWindowLine() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& TooltipLine() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& Effect() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CurrencyExchangeComponent*, Il2CppObject*))(Il2CppBase() + 0x1BD1084))(this, target);
	}

};

