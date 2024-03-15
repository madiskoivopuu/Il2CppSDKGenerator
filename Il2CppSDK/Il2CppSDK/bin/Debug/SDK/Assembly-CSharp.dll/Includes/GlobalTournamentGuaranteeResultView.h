#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalTournamentGuaranteeResultView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentGuaranteeResultView"));
	}

	template <typename R = uintptr_t> R& pointsText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& pointsImage() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = RewardResourceView*> R& rewardResourceView() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& progressBar() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Bind(Reward* reward, ItemEntity* currencyItem, int32_t selfPoints, int32_t lastPoints, uintptr_t image, TooltipView* tooltipView, bool showInterServerMark, Il2CppString* additionalTooltip) {
		return ((R (*)(GlobalTournamentGuaranteeResultView*, Reward*, ItemEntity*, int32_t, int32_t, uintptr_t, TooltipView*, bool, Il2CppString*))(Il2CppBase() + 0x12DA924))(this, reward, currencyItem, selfPoints, lastPoints, image, tooltipView, showInterServerMark, additionalTooltip);
	}

};

