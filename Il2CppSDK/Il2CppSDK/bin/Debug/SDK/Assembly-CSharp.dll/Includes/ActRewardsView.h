#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActRewardsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActRewardsView"));
	}

	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _rewardsContainer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _premiumRewardsContainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = RewardResourceView*> T& _resourceViewPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<RewardResourceView*>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<RewardResourceView*>*> T& _premiumResourceViews() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(ActRewardsView*))(Il2CppBase() + 0x18F500C))(this);
	}
	template <typename T = void> T set_TooltipView(TooltipView* value) {
		return ((T (*)(ActRewardsView*, TooltipView*))(Il2CppBase() + 0x18F5014))(this, value);
	}
	template <typename T = void> T Init(TooltipView* tooltip) {
		return ((T (*)(ActRewardsView*, TooltipView*))(Il2CppBase() + 0x18F22B0))(this, tooltip);
	}
	template <typename T = int32_t> T GetPriority(ItemEntity* itemEntity) {
		return ((T (*)(ActRewardsView*, ItemEntity*))(Il2CppBase() + 0x18F501C))(this, itemEntity);
	}
	template <typename T = void> T Show(QuestDataEntity* mainActQuest, int64_t ownerId, bool hasPremium) {
		return ((T (*)(ActRewardsView*, QuestDataEntity*, int64_t, bool))(Il2CppBase() + 0x18F22B8))(this, mainActQuest, ownerId, hasPremium);
	}
	template <typename T = void> T FillResources(Il2CppDictionary<Il2CppString*, int32_t>* resources, Il2CppDictionary<Il2CppString*, int32_t>* claimedResources, IList1Resource*>* source, float coef, bool claimed) {
		return ((T (*)(ActRewardsView*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, IList1Resource*>*, float, bool))(Il2CppBase() + 0x18F50BC))(this, resources, claimedResources, source, coef, claimed);
	}
	template <typename T = int32_t> T Showb__12_2(ItemEntity* item1, ItemEntity* item2) {
		return ((T (*)(ActRewardsView*, ItemEntity*, ItemEntity*))(Il2CppBase() + 0x18F54DC))(this, item1, item2);
	}
	template <typename T = int32_t> T Showb__12_3(ItemEntity* item1, ItemEntity* item2) {
		return ((T (*)(ActRewardsView*, ItemEntity*, ItemEntity*))(Il2CppBase() + 0x18F550C))(this, item1, item2);
	}

};

