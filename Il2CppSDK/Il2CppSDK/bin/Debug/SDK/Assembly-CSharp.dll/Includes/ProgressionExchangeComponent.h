#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressionExchangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressionExchangeComponent"));
	}

	template <typename R = int32_t> R& Limit() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& ResetTimeout() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppArray<ExchangeResource*>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<FilteredResources*>*> R& Filters() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<RewardResource*>*> R& Rewards() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& ConsiderDurability() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& WindowLine() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& TooMuchPointsPopUpCaption() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& TooMuchPointsPopUpLine() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& RequiredResourcesCaption() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& RequiredResourcesDescription() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& RequiredResourcesFirstLine() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& RequiredResourcesSecondLine() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& RequiredResourcesHideLine() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& UseButtonText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& RequiredResourcesHideReward() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& RequiredResourcesHideRequest() {
		return *(R*)((uintptr_t)this + 0x81);
	}
	template <typename R = Il2CppString*> R& Effect() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& AnalyticEvent() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ProgressionExchangeComponent*, Il2CppObject*))(Il2CppBase() + 0x16E5578))(this, target);
	}

};

