#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentRewardsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentRewardsView"));
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
	template <typename R = RewardResourceView*> R& _resourceViewPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Il2CppList<RewardResourceView*>*& _resourceViews() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0x38);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(TournamentRewardsView*))(Il2CppBase() + 0x150AF24))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(TournamentRewardsView*, TooltipView*))(Il2CppBase() + 0x150AF2C))(this, value);
	}
	template <typename R = void> R Init(TooltipView* tooltip) {
		return ((R (*)(TournamentRewardsView*, TooltipView*))(Il2CppBase() + 0x150AF34))(this, tooltip);
	}
	template <typename R = int32_t> R GetPriority(ItemEntity* itemEntity) {
		return ((R (*)(TournamentRewardsView*, ItemEntity*))(Il2CppBase() + 0x150AF3C))(this, itemEntity);
	}
	template <typename R = void> R Show(Il2CppList<Resource*>* resources, Il2CppString* caption) {
		return ((R (*)(TournamentRewardsView*, Il2CppList<Resource*>*, Il2CppString*))(Il2CppBase() + 0x150AFDC))(this, resources, caption);
	}
	template <typename R = int32_t> R Showb__10_1(ValueTuple2ItemEntity*, int32_t>* item1, ValueTuple2ItemEntity*, int32_t>* item2) {
		return ((R (*)(TournamentRewardsView*, ValueTuple2ItemEntity*, int32_t>*, ValueTuple2ItemEntity*, int32_t>*))(Il2CppBase() + 0x150B4A4))(this, item1, item2);
	}

};

