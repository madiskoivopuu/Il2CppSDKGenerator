#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CraftsmanWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftsmanWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& NPCIcon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CaptionText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& LevelText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& DialogueText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ConditionText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& RewardPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& ContainerRect() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = RewardResourceView*> R& RewardPrefab() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	 Il2CppList<RewardResourceView*>*& rewards() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0xC0);
	}
	template <typename R = int32_t> static R& maxRewardCount() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& _conditionKey() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = Il2CppString*> R& _noMoreKey() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(CraftsmanWindow*))(Il2CppBase() + 0x13496F0))(this);
	}
	template <typename R = void> R InitReward() {
		return ((R (*)(CraftsmanWindow*))(Il2CppBase() + 0x1349884))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(CraftsmanWindow*))(Il2CppBase() + 0x134A094))(this);
	}

};

