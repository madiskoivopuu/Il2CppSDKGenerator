#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ConvertedToItemsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConvertedToItemsWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _titleText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = RewardResourceView*> T& _fromItemSlot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = RewardResourceView*> T& _toItemSlot() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ConvertedToItemsWindow*))(Il2CppBase() + 0x15F3A84))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ConvertedToItemsWindow*))(Il2CppBase() + 0x15F40A0))(this);
	}

};

