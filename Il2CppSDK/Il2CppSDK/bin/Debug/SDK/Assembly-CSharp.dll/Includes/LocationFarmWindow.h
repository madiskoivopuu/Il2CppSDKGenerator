#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LocationFarmWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationFarmWindow"));
	}

	template <typename T = uintptr_t> T& OkButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = AutoFarmView*> T& AutoFarmView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TicketCount() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ExperienceScaleAnim() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& ExperienceScaleTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& IdleClip() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& Clip() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ScrollRect() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ScrollEventTrigger() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = RewardResourceView*> T& RewardResourceViewPrefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& Experience() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& Influence() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& VipPanel() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& VipText() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& VipContainer() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = RewardResourceView*> T& VipRewardResourceViewPrefab() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& VipExperience() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& VipInfluence() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& isShownAnim() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& scrollCoroutine() {
		return *(T*)((uintptr_t)this + 0x160);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B0CB8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B1684))(this);
	}
	template <typename T = void> T ShowResult(DataContext* context) {
		return ((T (*)(LocationFarmWindow*, DataContext*))(Il2CppBase() + 0x17B0D08))(this, context);
	}
	template <typename T = uintptr_t> T DelayedShow() {
		return ((T (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B1A18))(this);
	}
	template <typename T = uintptr_t> T DelayedScroll() {
		return ((T (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B1A90))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B1B08))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(LocationFarmWindow*, float))(Il2CppBase() + 0x17B1B90))(this, deltaTime);
	}
	template <typename T = void> T OnEnableb__25_0(uintptr_t arg0) {
		return ((T (*)(LocationFarmWindow*, uintptr_t))(Il2CppBase() + 0x17B1F78))(this, arg0);
	}
	template <typename T = void> T ShowResultg__InitResourceView|26_0(Resource* resource, int32_t index, RewardResourceView* prefab, uintptr_t container, uintptr_t ) {
		return ((T (*)(LocationFarmWindow*, Resource*, int32_t, RewardResourceView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B183C))(this, resource, index, prefab, container, );
	}

};

