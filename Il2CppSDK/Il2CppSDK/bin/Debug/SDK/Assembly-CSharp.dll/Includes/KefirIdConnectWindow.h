#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class KefirIdConnectWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdConnectWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ConnectToKefirIdButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TitleText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(KefirIdConnectWindow*))(Il2CppBase() + 0x14E9E94))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(KefirIdConnectWindow*))(Il2CppBase() + 0x14E9FA0))(this);
	}
	template <typename T = void> T OnConnectToKefirIdButtonPressed() {
		return ((T (*)(KefirIdConnectWindow*))(Il2CppBase() + 0x14E9FFC))(this);
	}

};

}
