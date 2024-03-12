#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ChestRewardWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& MyGuildCoins() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GuildCoinsTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& GuildChestImage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RewardAnimator() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RewardView() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& RewardCaption() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& RewardDescription() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RollButton() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& RollButtonCooldownInSeconds() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ResetButton() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& RewardEffectPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& CurrencyTotalIcon() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& CurrencyPriceIcon() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> static T& ROLL_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RESET_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ChestRewardWindow*))(Il2CppBase() + 0x1740BF4))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ChestRewardWindow*))(Il2CppBase() + 0x1740D38))(this);
	}
	template <typename T = void> T OnRollButtonClicked() {
		return ((T (*)(ChestRewardWindow*))(Il2CppBase() + 0x174178C))(this);
	}
	template <typename T = uintptr_t> T RollButtonCooldown() {
		return ((T (*)(ChestRewardWindow*))(Il2CppBase() + 0x1741E00))(this);
	}
	template <typename T = void> T OnResetButtonClicked() {
		return ((T (*)(ChestRewardWindow*))(Il2CppBase() + 0x1741E78))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ChestRewardWindow*, float))(Il2CppBase() + 0x1741ED0))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ChestRewardWindow*))(Il2CppBase() + 0x1741510))(this);
	}
	template <typename T = void> T OnReceivedRollGuildRewardResponse(uintptr_t data) {
		return ((T (*)(ChestRewardWindow*, uintptr_t))(Il2CppBase() + 0x17420C4))(this, data);
	}

};

}
