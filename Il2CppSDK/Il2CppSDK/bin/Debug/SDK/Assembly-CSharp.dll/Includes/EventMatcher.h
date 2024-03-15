#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventMatcher"));
	}

	 static IMatcher1EventEntity*>*& _matcherActionId() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1EventEntity*>*& _matcherActionType() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1EventEntity*>*& _matcherActor() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1EventEntity*>*& _matcherAddExperience() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1EventEntity*>*& _matcherAddPetExperience() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1EventEntity*>*& _matcherAddedResources() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1EventEntity*>*& _matcherAggroTarget() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1EventEntity*>*& _matcherAlive() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1EventEntity*>*& _matcherAlvesBpPoints() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1EventEntity*>*& _matcherAlvesWavesBadgesT1() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1EventEntity*>*& _matcherAlvesWavesBadgesT2() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1EventEntity*>*& _matcherAlvesWavesBadgesT3() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyBuild() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyHeal() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyLockUnlock() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyMoveBuild() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyPickup() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyPlayerKill() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyRemoveBuild() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyResurrect() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyTakeBuild() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyTenacityRegeneration() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1EventEntity*>*& _matcherApplyUpgradeBuild() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1EventEntity*>*& _matcherArmingWeapon() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1EventEntity*>*& _matcherAutoDestruction() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1EventEntity*>*& _matcherBind() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1EventEntity*>*& _matcherCashbackCoins() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1EventEntity*>*& _matcherChangeTargetCooldown() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1EventEntity*>*& _matcherClan() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1EventEntity*>*& _matcherCoins() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1EventEntity*>*& _matcherCraftBluenprint() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1EventEntity*>*& _matcherCraftResult() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1EventEntity*>*& _matcherCreationTime() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1EventEntity*>*& _matcherCurrencyChanged() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1EventEntity*>*& _matcherCyclicPoints() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1EventEntity*>*& _matcherCyclicPremiumTokens() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1EventEntity*>*& _matcherCyclicYmirSoul() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1EventEntity*>*& _matcherDamageBlock() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1EventEntity*>*& _matcherDamageCoef() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1EventEntity*>*& _matcherDamage() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1EventEntity*>*& _matcherDamageConfig() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1EventEntity*>*& _matcherDamageReflect() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1EventEntity*>*& _matcherDamageResult() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1EventEntity*>*& _matcherDamageStat() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1EventEntity*>*& _matcherDamageType() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1EventEntity*>*& _matcherDelay() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1EventEntity*>*& _matcherEventBpPointsA() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1EventEntity*>*& _matcherEventBpPointsB() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1EventEntity*>*& _matcherEventBpPointsC() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1EventEntity*>*& _matcherExtraLevelCap() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1EventEntity*>*& _matcherGiantReputation() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1EventEntity*>*& _matcherGuildBossCoins() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1EventEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1EventEntity*>*& _matcherGuild() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1EventEntity*>*& _matcherGuildQuest() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1EventEntity*>*& _matcherHeal() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1EventEntity*>*& _matcherHealResult() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1EventEntity*>*& _matcherHealthCoef() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1EventEntity*>*& _matcherHitActionEffect() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1EventEntity*>*& _matcherHitActorCooldown() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1EventEntity*>*& _matcherHitActorMagic() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1EventEntity*>*& _matcherHitTargetMagic() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1EventEntity*>*& _matcherIgnoreArmorPercent() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1EventEntity*>*& _matcherInfluence() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1EventEntity*>*& _matcherInventoryChanged() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1EventEntity*>*& _matcherInventoryIndex() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1EventEntity*>*& _matcherItem() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1EventEntity*>*& _matcherLifeSteal() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1EventEntity*>*& _matcherMagicTriggerId() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1EventEntity*>*& _matcherMaxDamageReflect() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1EventEntity*>*& _matcherMaxHealthCoef() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1EventEntity*>*& _matcherNew() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1EventEntity*>*& _matcherOrientation() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1EventEntity*>*& _matcherOutcomingHealBonus() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1EventEntity*>*& _matcherOwner() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1EventEntity*>*& _matcherParent() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1EventEntity*>*& _matcherPersonal() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1EventEntity*>*& _matcherPlace() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1EventEntity*>*& _matcherPlayerEnter() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1EventEntity*>*& _matcherPlayerGuildChanged() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1EventEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1EventEntity*>*& _matcherPosition() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1EventEntity*>*& _matcherProgress() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1EventEntity*>*& _matcherQuestTarget() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1EventEntity*>*& _matcherQuestsChanged() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1EventEntity*>*& _matcherRoom() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1EventEntity*>*& _matcherRotation() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1EventEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1EventEntity*>*& _matcherSeasonPoints() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1EventEntity*>*& _matcherSilver() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1EventEntity*>*& _matcherSource() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1EventEntity*>*& _matcherTags() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1EventEntity*>*& _matcherTarget() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1EventEntity*>*& _matcherTargetResult() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1EventEntity*>*& _matcherTickets() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1EventEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1EventEntity*>*& _matcherVipChanged() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1EventEntity*>*& _matcherWaveItem() {
		return *(IMatcher1EventEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}

	 static IMatcher1EventEntity*>* get_ActionId() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1787888))(0);
	}
	 static IMatcher1EventEntity*>* get_ActionType() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1787A08))(0);
	}
	 static IMatcher1EventEntity*>* get_Actor() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1787BA4))(0);
	}
	 static IMatcher1EventEntity*>* get_AddExperience() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1787D40))(0);
	}
	 static IMatcher1EventEntity*>* get_AddPetExperience() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1787EDC))(0);
	}
	 static IMatcher1EventEntity*>* get_AddedResources() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1788078))(0);
	}
	 static IMatcher1EventEntity*>* get_AggroTarget() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1788214))(0);
	}
	 static IMatcher1EventEntity*>* get_Alive() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x17883B0))(0);
	}
	 static IMatcher1EventEntity*>* get_AlvesBpPoints() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178854C))(0);
	}
	 static IMatcher1EventEntity*>* get_AlvesWavesBadgesT1() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x17886E8))(0);
	}
	 static IMatcher1EventEntity*>* get_AlvesWavesBadgesT2() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1788884))(0);
	}
	 static IMatcher1EventEntity*>* get_AlvesWavesBadgesT3() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1788A20))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyBuild() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1788BBC))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyHeal() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1788D58))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyLockUnlock() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1788EF4))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyMoveBuild() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1789090))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyPickup() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178922C))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyPlayerKill() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x17893C8))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyRemoveBuild() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1789564))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyResurrect() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1789700))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyTakeBuild() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178989C))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyTenacityRegeneration() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1789A38))(0);
	}
	 static IMatcher1EventEntity*>* get_ApplyUpgradeBuild() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1789BD4))(0);
	}
	 static IMatcher1EventEntity*>* get_ArmingWeapon() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1789D70))(0);
	}
	 static IMatcher1EventEntity*>* get_AutoDestruction() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1789F0C))(0);
	}
	 static IMatcher1EventEntity*>* get_Bind() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178A0A8))(0);
	}
	 static IMatcher1EventEntity*>* get_CashbackCoins() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178A244))(0);
	}
	 static IMatcher1EventEntity*>* get_ChangeTargetCooldown() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178A3E0))(0);
	}
	 static IMatcher1EventEntity*>* get_Clan() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178A57C))(0);
	}
	 static IMatcher1EventEntity*>* get_Coins() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178A718))(0);
	}
	 static IMatcher1EventEntity*>* get_CraftBluenprint() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178A8B4))(0);
	}
	 static IMatcher1EventEntity*>* get_CraftResult() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178AA50))(0);
	}
	 static IMatcher1EventEntity*>* get_CreationTime() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178ABEC))(0);
	}
	 static IMatcher1EventEntity*>* get_CurrencyChanged() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178AD8C))(0);
	}
	 static IMatcher1EventEntity*>* get_CyclicPoints() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178AF2C))(0);
	}
	 static IMatcher1EventEntity*>* get_CyclicPremiumTokens() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178B0CC))(0);
	}
	 static IMatcher1EventEntity*>* get_CyclicYmirSoul() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178B26C))(0);
	}
	 static IMatcher1EventEntity*>* get_DamageBlock() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178B40C))(0);
	}
	 static IMatcher1EventEntity*>* get_DamageCoef() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178B5AC))(0);
	}
	 static IMatcher1EventEntity*>* get_Damage() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178B74C))(0);
	}
	 static IMatcher1EventEntity*>* get_DamageConfig() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178B8EC))(0);
	}
	 static IMatcher1EventEntity*>* get_DamageReflect() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178BA8C))(0);
	}
	 static IMatcher1EventEntity*>* get_DamageResult() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178BC2C))(0);
	}
	 static IMatcher1EventEntity*>* get_DamageStat() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178BDCC))(0);
	}
	 static IMatcher1EventEntity*>* get_DamageType() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178BF6C))(0);
	}
	 static IMatcher1EventEntity*>* get_Delay() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178C10C))(0);
	}
	 static IMatcher1EventEntity*>* get_EventBpPointsA() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178C2AC))(0);
	}
	 static IMatcher1EventEntity*>* get_EventBpPointsB() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178C44C))(0);
	}
	 static IMatcher1EventEntity*>* get_EventBpPointsC() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178C5EC))(0);
	}
	 static IMatcher1EventEntity*>* get_ExtraLevelCap() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178C78C))(0);
	}
	 static IMatcher1EventEntity*>* get_GiantReputation() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178C92C))(0);
	}
	 static IMatcher1EventEntity*>* get_GuildBossCoins() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178CACC))(0);
	}
	 static IMatcher1EventEntity*>* get_GuildCoins() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178CC6C))(0);
	}
	 static IMatcher1EventEntity*>* get_Guild() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178CE0C))(0);
	}
	 static IMatcher1EventEntity*>* get_GuildQuest() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178CFAC))(0);
	}
	 static IMatcher1EventEntity*>* get_Heal() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178D14C))(0);
	}
	 static IMatcher1EventEntity*>* get_HealResult() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178D2EC))(0);
	}
	 static IMatcher1EventEntity*>* get_HealthCoef() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178D48C))(0);
	}
	 static IMatcher1EventEntity*>* get_HitActionEffect() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178D62C))(0);
	}
	 static IMatcher1EventEntity*>* get_HitActorCooldown() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178D7CC))(0);
	}
	 static IMatcher1EventEntity*>* get_HitActorMagic() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178D96C))(0);
	}
	 static IMatcher1EventEntity*>* get_HitTargetMagic() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178DB0C))(0);
	}
	 static IMatcher1EventEntity*>* get_IgnoreArmorPercent() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178DCAC))(0);
	}
	 static IMatcher1EventEntity*>* get_Influence() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178DE4C))(0);
	}
	 static IMatcher1EventEntity*>* get_InventoryChanged() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178DFEC))(0);
	}
	 static IMatcher1EventEntity*>* get_InventoryIndex() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178E18C))(0);
	}
	 static IMatcher1EventEntity*>* get_Item() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178E32C))(0);
	}
	 static IMatcher1EventEntity*>* get_LifeSteal() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178E4CC))(0);
	}
	 static IMatcher1EventEntity*>* get_MagicTriggerId() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178E66C))(0);
	}
	 static IMatcher1EventEntity*>* get_MaxDamageReflect() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178E80C))(0);
	}
	 static IMatcher1EventEntity*>* get_MaxHealthCoef() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178E9AC))(0);
	}
	 static IMatcher1EventEntity*>* get_New() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178EB4C))(0);
	}
	 static IMatcher1EventEntity*>* get_Orientation() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178ECEC))(0);
	}
	 static IMatcher1EventEntity*>* get_OutcomingHealBonus() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178EE8C))(0);
	}
	 static IMatcher1EventEntity*>* get_Owner() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178F02C))(0);
	}
	 static IMatcher1EventEntity*>* get_Parent() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178F1CC))(0);
	}
	 static IMatcher1EventEntity*>* get_Personal() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178F36C))(0);
	}
	 static IMatcher1EventEntity*>* get_Place() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178F50C))(0);
	}
	 static IMatcher1EventEntity*>* get_PlayerEnter() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178F6AC))(0);
	}
	 static IMatcher1EventEntity*>* get_PlayerGuildChanged() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178F84C))(0);
	}
	 static IMatcher1EventEntity*>* get_PortalsPoints() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178F9EC))(0);
	}
	 static IMatcher1EventEntity*>* get_Position() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178FB8C))(0);
	}
	 static IMatcher1EventEntity*>* get_Progress() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178FD2C))(0);
	}
	 static IMatcher1EventEntity*>* get_QuestTarget() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x178FECC))(0);
	}
	 static IMatcher1EventEntity*>* get_QuestsChanged() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x179006C))(0);
	}
	 static IMatcher1EventEntity*>* get_Room() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x179020C))(0);
	}
	 static IMatcher1EventEntity*>* get_Rotation() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x17903AC))(0);
	}
	 static IMatcher1EventEntity*>* get_SaviorPoints() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x179054C))(0);
	}
	 static IMatcher1EventEntity*>* get_SeasonPoints() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x17906EC))(0);
	}
	 static IMatcher1EventEntity*>* get_Silver() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x179088C))(0);
	}
	 static IMatcher1EventEntity*>* get_Source() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1790A2C))(0);
	}
	 static IMatcher1EventEntity*>* get_Tags() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1790BCC))(0);
	}
	 static IMatcher1EventEntity*>* get_Target() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1790D6C))(0);
	}
	 static IMatcher1EventEntity*>* get_TargetResult() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x1790F0C))(0);
	}
	 static IMatcher1EventEntity*>* get_Tickets() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x17910AC))(0);
	}
	 static IMatcher1EventEntity*>* get_VIPPoints() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x179124C))(0);
	}
	 static IMatcher1EventEntity*>* get_VipChanged() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x17913EC))(0);
	}
	 static IMatcher1EventEntity*>* get_WaveItem() {
		return ((IMatcher1EventEntity*>* (*)(void *))(Il2CppBase() + 0x179158C))(0);
	}
	 static IAllOfMatcher1EventEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1EventEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x179172C))(0, indices);
	}
	 static IAllOfMatcher1EventEntity*>* AllOf_1(Il2CppArray<IMatcher1EventEntity*>*>* matchers) {
		return ((IAllOfMatcher1EventEntity*>* (*)(void *, Il2CppArray<IMatcher1EventEntity*>*>*))(Il2CppBase() + 0x17917A4))(0, matchers);
	}
	 static IAnyOfMatcher1EventEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1EventEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x179181C))(0, indices);
	}
	 static IAnyOfMatcher1EventEntity*>* AnyOf_1(Il2CppArray<IMatcher1EventEntity*>*>* matchers) {
		return ((IAnyOfMatcher1EventEntity*>* (*)(void *, Il2CppArray<IMatcher1EventEntity*>*>*))(Il2CppBase() + 0x1791894))(0, matchers);
	}

};

