#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ItemRewardsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemRewardsWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _bannerImage() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _titleText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Il2CppList<RewardResourceView*>*& _rewards() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ItemRewardsWindow*))(Il2CppBase() + 0x14DFFEC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ItemRewardsWindow*))(Il2CppBase() + 0x14E06CC))(this);
	}

};

