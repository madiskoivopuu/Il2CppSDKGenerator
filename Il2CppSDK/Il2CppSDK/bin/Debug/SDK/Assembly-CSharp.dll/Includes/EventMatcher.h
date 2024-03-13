#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventMatcher"));
	}

	template <typename T = IMatcher1EventEntity*>*> static T& _matcherActionId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherActionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAddExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAddPetExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAddedResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAggroTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAlive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAlvesBpPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAlvesWavesBadgesT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAlvesWavesBadgesT2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAlvesWavesBadgesT3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyLockUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyMoveBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyPlayerKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyRemoveBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyResurrect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyTakeBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyTenacityRegeneration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherApplyUpgradeBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherArmingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherAutoDestruction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCashbackCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherChangeTargetCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCraftBluenprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCraftResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCreationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCurrencyChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCyclicPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCyclicPremiumTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherCyclicYmirSoul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDamageBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDamageCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDamageConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDamageReflect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDamageResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDamageStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherEventBpPointsA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherEventBpPointsB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherEventBpPointsC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherExtraLevelCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherGiantReputation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherGuildBossCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherGuildCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherGuildQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherHealResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherHitActionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherHitActorCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherHitActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherHitTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherIgnoreArmorPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherInfluence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherInventoryChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherInventoryIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherLifeSteal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherMagicTriggerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherMaxDamageReflect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherMaxHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherOrientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherOutcomingHealBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherPlayerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherPlayerGuildChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherPortalsPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherQuestTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherQuestsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherSaviorPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherSeasonPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherSilver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherTargetResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherTickets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherVIPPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherVipChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = IMatcher1EventEntity*>*> static T& _matcherWaveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}

	template <typename T = IMatcher1EventEntity*>*> static T get_ActionId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1787888))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ActionType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1787A08))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Actor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1787BA4))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AddExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x1787D40))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AddPetExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x1787EDC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AddedResources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1788078))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AggroTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1788214))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Alive() {
		return ((T (*)(void *))(Il2CppBase() + 0x17883B0))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AlvesBpPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x178854C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AlvesWavesBadgesT1() {
		return ((T (*)(void *))(Il2CppBase() + 0x17886E8))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AlvesWavesBadgesT2() {
		return ((T (*)(void *))(Il2CppBase() + 0x1788884))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AlvesWavesBadgesT3() {
		return ((T (*)(void *))(Il2CppBase() + 0x1788A20))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyBuild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1788BBC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyHeal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1788D58))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyLockUnlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x1788EF4))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyMoveBuild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1789090))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyPickup() {
		return ((T (*)(void *))(Il2CppBase() + 0x178922C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyPlayerKill() {
		return ((T (*)(void *))(Il2CppBase() + 0x17893C8))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyRemoveBuild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1789564))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyResurrect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1789700))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyTakeBuild() {
		return ((T (*)(void *))(Il2CppBase() + 0x178989C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyTenacityRegeneration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1789A38))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ApplyUpgradeBuild() {
		return ((T (*)(void *))(Il2CppBase() + 0x1789BD4))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ArmingWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1789D70))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_AutoDestruction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1789F0C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Bind() {
		return ((T (*)(void *))(Il2CppBase() + 0x178A0A8))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_CashbackCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x178A244))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ChangeTargetCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x178A3E0))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Clan() {
		return ((T (*)(void *))(Il2CppBase() + 0x178A57C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Coins() {
		return ((T (*)(void *))(Il2CppBase() + 0x178A718))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_CraftBluenprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x178A8B4))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_CraftResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x178AA50))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_CreationTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x178ABEC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_CurrencyChanged() {
		return ((T (*)(void *))(Il2CppBase() + 0x178AD8C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_CyclicPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x178AF2C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_CyclicPremiumTokens() {
		return ((T (*)(void *))(Il2CppBase() + 0x178B0CC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_CyclicYmirSoul() {
		return ((T (*)(void *))(Il2CppBase() + 0x178B26C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_DamageBlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x178B40C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_DamageCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x178B5AC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Damage() {
		return ((T (*)(void *))(Il2CppBase() + 0x178B74C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_DamageConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x178B8EC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_DamageReflect() {
		return ((T (*)(void *))(Il2CppBase() + 0x178BA8C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_DamageResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x178BC2C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_DamageStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x178BDCC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_DamageType() {
		return ((T (*)(void *))(Il2CppBase() + 0x178BF6C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Delay() {
		return ((T (*)(void *))(Il2CppBase() + 0x178C10C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_EventBpPointsA() {
		return ((T (*)(void *))(Il2CppBase() + 0x178C2AC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_EventBpPointsB() {
		return ((T (*)(void *))(Il2CppBase() + 0x178C44C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_EventBpPointsC() {
		return ((T (*)(void *))(Il2CppBase() + 0x178C5EC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_ExtraLevelCap() {
		return ((T (*)(void *))(Il2CppBase() + 0x178C78C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_GiantReputation() {
		return ((T (*)(void *))(Il2CppBase() + 0x178C92C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_GuildBossCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x178CACC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_GuildCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x178CC6C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0x178CE0C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_GuildQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x178CFAC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Heal() {
		return ((T (*)(void *))(Il2CppBase() + 0x178D14C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_HealResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x178D2EC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_HealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x178D48C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_HitActionEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x178D62C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_HitActorCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x178D7CC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_HitActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x178D96C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_HitTargetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x178DB0C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_IgnoreArmorPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x178DCAC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Influence() {
		return ((T (*)(void *))(Il2CppBase() + 0x178DE4C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_InventoryChanged() {
		return ((T (*)(void *))(Il2CppBase() + 0x178DFEC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_InventoryIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x178E18C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Item() {
		return ((T (*)(void *))(Il2CppBase() + 0x178E32C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_LifeSteal() {
		return ((T (*)(void *))(Il2CppBase() + 0x178E4CC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_MagicTriggerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x178E66C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_MaxDamageReflect() {
		return ((T (*)(void *))(Il2CppBase() + 0x178E80C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_MaxHealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x178E9AC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_New() {
		return ((T (*)(void *))(Il2CppBase() + 0x178EB4C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Orientation() {
		return ((T (*)(void *))(Il2CppBase() + 0x178ECEC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_OutcomingHealBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x178EE8C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Owner() {
		return ((T (*)(void *))(Il2CppBase() + 0x178F02C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0x178F1CC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Personal() {
		return ((T (*)(void *))(Il2CppBase() + 0x178F36C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Place() {
		return ((T (*)(void *))(Il2CppBase() + 0x178F50C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_PlayerEnter() {
		return ((T (*)(void *))(Il2CppBase() + 0x178F6AC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_PlayerGuildChanged() {
		return ((T (*)(void *))(Il2CppBase() + 0x178F84C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_PortalsPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x178F9EC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Position() {
		return ((T (*)(void *))(Il2CppBase() + 0x178FB8C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Progress() {
		return ((T (*)(void *))(Il2CppBase() + 0x178FD2C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_QuestTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x178FECC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_QuestsChanged() {
		return ((T (*)(void *))(Il2CppBase() + 0x179006C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Room() {
		return ((T (*)(void *))(Il2CppBase() + 0x179020C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Rotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x17903AC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_SaviorPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x179054C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_SeasonPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x17906EC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Silver() {
		return ((T (*)(void *))(Il2CppBase() + 0x179088C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Source() {
		return ((T (*)(void *))(Il2CppBase() + 0x1790A2C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1790BCC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x1790D6C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_TargetResult() {
		return ((T (*)(void *))(Il2CppBase() + 0x1790F0C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_Tickets() {
		return ((T (*)(void *))(Il2CppBase() + 0x17910AC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_VIPPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x179124C))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_VipChanged() {
		return ((T (*)(void *))(Il2CppBase() + 0x17913EC))(0);
	}
	template <typename T = IMatcher1EventEntity*>*> static T get_WaveItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x179158C))(0);
	}
	template <typename T = IAllOfMatcher1EventEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x179172C))(0, indices);
	}
	template <typename T = IAllOfMatcher1EventEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17917A4))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1EventEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x179181C))(0, indices);
	}
	template <typename T = IAnyOfMatcher1EventEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1791894))(0, matchers);
	}

};

