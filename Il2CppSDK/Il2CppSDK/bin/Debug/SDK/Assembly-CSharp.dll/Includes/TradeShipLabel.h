#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView" 

class TradeShipLabel: UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradeShipLabel"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TradeShipLabel*))(Il2CppBase() + 0x150E9DC))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(TradeShipLabel*))(Il2CppBase() + 0x150EA78))(this);
	}

};

}
