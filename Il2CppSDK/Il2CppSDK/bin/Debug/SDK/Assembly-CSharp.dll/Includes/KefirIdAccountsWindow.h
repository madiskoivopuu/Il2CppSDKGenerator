#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class KefirIdAccountsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdAccountsWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& TitleText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& TitleImage() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& TextReward() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& PanelReward() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& PlayerViewsContainer() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = KefirIdPlayerView*> R& PlayerViewPrefab() {
		return *(R*)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(KefirIdAccountsWindow*))(Il2CppBase() + 0x14E8D88))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(KefirIdAccountsWindow*))(Il2CppBase() + 0x14E987C))(this);
	}

};

