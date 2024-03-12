#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentRewardsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentRewardsView"));
	}

	template <typename T = uintptr_t> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _rewardsContainer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _resourceViewPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(TournamentRewardsView*))(Il2CppBase() + 0x150AF24))(this);
	}
	template <typename T = void> T set_TooltipView(uintptr_t value) {
		return ((T (*)(TournamentRewardsView*, uintptr_t))(Il2CppBase() + 0x150AF2C))(this, value);
	}
	template <typename T = void> T Init(uintptr_t tooltip) {
		return ((T (*)(TournamentRewardsView*, uintptr_t))(Il2CppBase() + 0x150AF34))(this, tooltip);
	}
	template <typename T = int32_t> T GetPriority(uintptr_t itemEntity) {
		return ((T (*)(TournamentRewardsView*, uintptr_t))(Il2CppBase() + 0x150AF3C))(this, itemEntity);
	}
	template <typename T = void> T Show(Il2CppList<uintptr_t>* resources, Il2CppString* caption) {
		return ((T (*)(TournamentRewardsView*, Il2CppList<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x150AFDC))(this, resources, caption);
	}
	template <typename T = int32_t> T Showb__10_1(void* item1, void* item2) {
		return ((T (*)(TournamentRewardsView*, void*, void*))(Il2CppBase() + 0x150B4A4))(this, item1, item2);
	}

};

}
