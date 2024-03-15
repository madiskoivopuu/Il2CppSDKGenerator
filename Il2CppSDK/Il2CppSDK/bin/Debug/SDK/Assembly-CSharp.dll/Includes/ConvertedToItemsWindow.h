#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ConvertedToItemsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConvertedToItemsWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _titleText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = RewardResourceView*> R& _fromItemSlot() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = RewardResourceView*> R& _toItemSlot() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ConvertedToItemsWindow*))(Il2CppBase() + 0x15F3A84))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ConvertedToItemsWindow*))(Il2CppBase() + 0x15F40A0))(this);
	}

};

