#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class TradeRoutesWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradeRoutesWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _showButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(TradeRoutesWindow*))(Il2CppBase() + 0x150E5C0))(this);
	}
	template <typename T = void> T ShowLocation() {
		return ((T (*)(TradeRoutesWindow*))(Il2CppBase() + 0x150E768))(this);
	}

};

}
