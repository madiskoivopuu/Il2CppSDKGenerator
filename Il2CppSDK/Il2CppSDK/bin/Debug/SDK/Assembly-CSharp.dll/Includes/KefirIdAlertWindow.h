#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class KefirIdAlertWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdAlertWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& TitleText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(KefirIdAlertWindow*))(Il2CppBase() + 0x14E9A08))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(KefirIdAlertWindow*))(Il2CppBase() + 0x14E9BF0))(this);
	}

};

