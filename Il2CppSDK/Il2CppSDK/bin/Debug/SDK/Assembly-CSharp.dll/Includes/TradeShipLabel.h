#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class TradeShipLabel : public UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradeShipLabel"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(TradeShipLabel*))(Il2CppBase() + 0x150E9DC))(this);
	}
	template <typename R = void> R ShowWindow() {
		return ((R (*)(TradeShipLabel*))(Il2CppBase() + 0x150EA78))(this);
	}

};

