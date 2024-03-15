#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassViewComponent"));
	}

	template <typename R = Il2CppString*> R& NPC_Icon() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& NPC_Icon_Back() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& NPC_Text() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& NPC_Done_Text() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Tracery_Icon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& IsSeason() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& SeasonDepends() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = bool> R& ShowBestReward() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& RightAlignment() {
		return *(R*)((uintptr_t)this + 0x41);
	}
	template <typename R = Il2CppString*> R& MainColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& BottomColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& ProgressColor() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& TextColor() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& LockedTextColor() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& AnalyticsEventName() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& PremiumNameCaption() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& BuyPremiumCaption() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& IsLevelsSale() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& BuyLevelsButtonCaption() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = StoreCategory*> R& StoreCategory() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> R& BuyLevelsCaption() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& SpecialSteps() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppString*> R& SpecialImage() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = bool> R& HideNextBestRewards() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BattlePassViewComponent*, Il2CppObject*))(Il2CppBase() + 0x167D14C))(this, target);
	}

};

