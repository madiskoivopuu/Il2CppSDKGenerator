#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ChestRewardWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& MyGuildCoins() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = TooltipTrigger*> R& GuildCoinsTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& GuildChestImage() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& RewardAnimator() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = StoreProductContentSlotView*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = StoreProductContentSlotView*> R& RewardView() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& RewardCaption() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& RewardDescription() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = StandartButton*> R& RollButton() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = float> R& RollButtonCooldownInSeconds() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& ResetButton() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = SpriteEffectHelper*> R& RewardEffectPrefab() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& CurrencyTotalIcon() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& CurrencyPriceIcon() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = Il2CppString*> static R& ROLL_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& RESET_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ChestRewardWindow*))(Il2CppBase() + 0x1740BF4))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ChestRewardWindow*))(Il2CppBase() + 0x1740D38))(this);
	}
	template <typename R = void> R OnRollButtonClicked() {
		return ((R (*)(ChestRewardWindow*))(Il2CppBase() + 0x174178C))(this);
	}
	template <typename R = uintptr_t> R RollButtonCooldown() {
		return ((R (*)(ChestRewardWindow*))(Il2CppBase() + 0x1741E00))(this);
	}
	template <typename R = void> R OnResetButtonClicked() {
		return ((R (*)(ChestRewardWindow*))(Il2CppBase() + 0x1741E78))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ChestRewardWindow*, float))(Il2CppBase() + 0x1741ED0))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ChestRewardWindow*))(Il2CppBase() + 0x1741510))(this);
	}
	template <typename R = void> R OnReceivedRollGuildRewardResponse(RollChestRewardResponse data) {
		return ((R (*)(ChestRewardWindow*, RollChestRewardResponse))(Il2CppBase() + 0x17420C4))(this, data);
	}

};

