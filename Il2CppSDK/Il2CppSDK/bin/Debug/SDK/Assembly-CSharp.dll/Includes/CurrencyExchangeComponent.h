#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyExchangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeComponent"));
	}

	template <typename T = Il2CppString*> T& CurrencyItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Limit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& ResetTimeout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& ResetValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& StartTimeTempBuff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& BuffItem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& BuffCoef() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& WindowLine() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& NoCurrencyWindowLine() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& TooltipLine() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& Effect() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CurrencyExchangeComponent*, uintptr_t))(Il2CppBase() + 0x1BD1084))(this, target);
	}

};

}
