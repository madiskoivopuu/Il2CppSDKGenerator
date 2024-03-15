#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LocationFarmWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationFarmWindow"));
	}

	template <typename R = uintptr_t> R& OkButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = AutoFarmView*> R& AutoFarmView() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& TicketCount() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& ExperienceScaleAnim() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = float> R& ExperienceScaleTime() {
		return *(R*)((uintptr_t)this + 0xDC);
	}
	template <typename R = uintptr_t> R& IdleClip() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& Clip() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& ScrollRect() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& ScrollEventTrigger() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = RewardResourceView*> R& RewardResourceViewPrefab() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& Experience() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& Influence() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& VipPanel() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& VipText() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& VipContainer() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = RewardResourceView*> R& VipRewardResourceViewPrefab() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& VipExperience() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& VipInfluence() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = bool> R& isShownAnim() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& scrollCoroutine() {
		return *(R*)((uintptr_t)this + 0x160);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B0CB8))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B1684))(this);
	}
	template <typename R = void> R ShowResult(DataContext* context) {
		return ((R (*)(LocationFarmWindow*, DataContext*))(Il2CppBase() + 0x17B0D08))(this, context);
	}
	template <typename R = uintptr_t> R DelayedShow() {
		return ((R (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B1A18))(this);
	}
	template <typename R = uintptr_t> R DelayedScroll() {
		return ((R (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B1A90))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(LocationFarmWindow*))(Il2CppBase() + 0x17B1B08))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(LocationFarmWindow*, float))(Il2CppBase() + 0x17B1B90))(this, deltaTime);
	}
	template <typename R = void> R OnEnableb__25_0(uintptr_t arg0) {
		return ((R (*)(LocationFarmWindow*, uintptr_t))(Il2CppBase() + 0x17B1F78))(this, arg0);
	}
	template <typename R = void> R ShowResultg__InitResourceView|26_0(Resource* resource, int32_t index, RewardResourceView* prefab, uintptr_t container, uintptr_t ) {
		return ((R (*)(LocationFarmWindow*, Resource*, int32_t, RewardResourceView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B183C))(this, resource, index, prefab, container, );
	}

};

