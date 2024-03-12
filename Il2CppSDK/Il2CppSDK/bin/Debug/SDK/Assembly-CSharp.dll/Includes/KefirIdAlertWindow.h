#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class KefirIdAlertWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdAlertWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& TitleText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(KefirIdAlertWindow*))(Il2CppBase() + 0x14E9A08))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(KefirIdAlertWindow*))(Il2CppBase() + 0x14E9BF0))(this);
	}

};

}
