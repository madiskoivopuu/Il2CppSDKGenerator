#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ActQuestsRewardsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestsRewardsWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _content() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	 Il2CppList<ActRewardsView*>*& _acts() {
		return *(Il2CppList<ActRewardsView*>**)((uintptr_t)this + 0x88);
	}
	template <typename R = ActRewardsView*> R& _actPrefab() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _hasPremiumInfo() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _buyPremiumInfo() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ActQuestsRewardsWindow*))(Il2CppBase() + 0x18F1AF8))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ActQuestsRewardsWindow*))(Il2CppBase() + 0x18F1B84))(this);
	}

};

