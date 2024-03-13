#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ActQuestsRewardsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestsRewardsWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<ActRewardsView*>*> T& _acts() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = ActRewardsView*> T& _actPrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _hasPremiumInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _buyPremiumInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ActQuestsRewardsWindow*))(Il2CppBase() + 0x18F1AF8))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ActQuestsRewardsWindow*))(Il2CppBase() + 0x18F1B84))(this);
	}

};

