#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CyclicAdWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicAdWindow"));
	}

	template <typename R = uintptr_t> R& _adCloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _adAcceptButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<TooltipTrigger*>*> R& _adTooltipTriggers() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(CyclicAdWindow*))(Il2CppBase() + 0x163F9B4))(this);
	}

};

