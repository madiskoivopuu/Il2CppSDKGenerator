#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActRewardsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActRewardsView"));
	}

	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _rewardsContainer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _premiumRewardsContainer() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = RewardResourceView*> R& _resourceViewPrefab() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppList<RewardResourceView*>*& _resourceViews() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0x40);
	}
	 Il2CppList<RewardResourceView*>*& _premiumResourceViews() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(ActRewardsView*))(Il2CppBase() + 0x18F500C))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(ActRewardsView*, TooltipView*))(Il2CppBase() + 0x18F5014))(this, value);
	}
	template <typename R = void> R Init(TooltipView* tooltip) {
		return ((R (*)(ActRewardsView*, TooltipView*))(Il2CppBase() + 0x18F22B0))(this, tooltip);
	}
	template <typename R = int32_t> R GetPriority(ItemEntity* itemEntity) {
		return ((R (*)(ActRewardsView*, ItemEntity*))(Il2CppBase() + 0x18F501C))(this, itemEntity);
	}
	template <typename R = void> R Show(QuestDataEntity* mainActQuest, int64_t ownerId, bool hasPremium) {
		return ((R (*)(ActRewardsView*, QuestDataEntity*, int64_t, bool))(Il2CppBase() + 0x18F22B8))(this, mainActQuest, ownerId, hasPremium);
	}
	template <typename R = void> R FillResources(Il2CppDictionary<Il2CppString*, int32_t>* resources, Il2CppDictionary<Il2CppString*, int32_t>* claimedResources, IList1Resource*>* source, float coef, bool claimed) {
		return ((R (*)(ActRewardsView*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, IList1Resource*>*, float, bool))(Il2CppBase() + 0x18F50BC))(this, resources, claimedResources, source, coef, claimed);
	}
	template <typename R = int32_t> R Showb__12_2(ItemEntity* item1, ItemEntity* item2) {
		return ((R (*)(ActRewardsView*, ItemEntity*, ItemEntity*))(Il2CppBase() + 0x18F54DC))(this, item1, item2);
	}
	template <typename R = int32_t> R Showb__12_3(ItemEntity* item1, ItemEntity* item2) {
		return ((R (*)(ActRewardsView*, ItemEntity*, ItemEntity*))(Il2CppBase() + 0x18F550C))(this, item1, item2);
	}

};

