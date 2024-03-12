#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActRewardsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActRewardsView"));
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
	template <typename T = uintptr_t> T& _premiumRewardsContainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _resourceViewPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _premiumResourceViews() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(ActRewardsView*))(Il2CppBase() + 0x18F500C))(this);
	}
	template <typename T = void> T set_TooltipView(uintptr_t value) {
		return ((T (*)(ActRewardsView*, uintptr_t))(Il2CppBase() + 0x18F5014))(this, value);
	}
	template <typename T = void> T Init(uintptr_t tooltip) {
		return ((T (*)(ActRewardsView*, uintptr_t))(Il2CppBase() + 0x18F22B0))(this, tooltip);
	}
	template <typename T = int32_t> T GetPriority(uintptr_t itemEntity) {
		return ((T (*)(ActRewardsView*, uintptr_t))(Il2CppBase() + 0x18F501C))(this, itemEntity);
	}
	template <typename T = void> T Show(uintptr_t mainActQuest, int64_t ownerId, bool hasPremium) {
		return ((T (*)(ActRewardsView*, uintptr_t, int64_t, bool))(Il2CppBase() + 0x18F22B8))(this, mainActQuest, ownerId, hasPremium);
	}
	template <typename T = void> T FillResources(Il2CppDictionary<Il2CppString*, int32_t>* resources, Il2CppDictionary<Il2CppString*, int32_t>* claimedResources, void* source, float coef, bool claimed) {
		return ((T (*)(ActRewardsView*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, void*, float, bool))(Il2CppBase() + 0x18F50BC))(this, resources, claimedResources, source, coef, claimed);
	}
	template <typename T = int32_t> T Showb__12_2(uintptr_t item1, uintptr_t item2) {
		return ((T (*)(ActRewardsView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18F54DC))(this, item1, item2);
	}
	template <typename T = int32_t> T Showb__12_3(uintptr_t item1, uintptr_t item2) {
		return ((T (*)(ActRewardsView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18F550C))(this, item1, item2);
	}

};

}
