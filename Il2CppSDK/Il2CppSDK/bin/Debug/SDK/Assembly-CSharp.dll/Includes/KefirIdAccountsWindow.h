#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class KefirIdAccountsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdAccountsWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& TitleText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TitleImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TextReward() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& PanelReward() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PlayerViewsContainer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = KefirIdPlayerView*> T& PlayerViewPrefab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(KefirIdAccountsWindow*))(Il2CppBase() + 0x14E8D88))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(KefirIdAccountsWindow*))(Il2CppBase() + 0x14E987C))(this);
	}

};

