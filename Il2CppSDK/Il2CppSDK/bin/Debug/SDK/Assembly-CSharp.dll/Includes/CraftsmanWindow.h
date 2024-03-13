#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CraftsmanWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftsmanWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& NPCIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CaptionText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LevelText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DialogueText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ConditionText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RewardPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ContainerRect() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = RewardResourceView*> T& RewardPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<RewardResourceView*>*> T& rewards() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> static T& maxRewardCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& _conditionKey() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& _noMoreKey() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(CraftsmanWindow*))(Il2CppBase() + 0x13496F0))(this);
	}
	template <typename T = void> T InitReward() {
		return ((T (*)(CraftsmanWindow*))(Il2CppBase() + 0x1349884))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(CraftsmanWindow*))(Il2CppBase() + 0x134A094))(this);
	}

};

