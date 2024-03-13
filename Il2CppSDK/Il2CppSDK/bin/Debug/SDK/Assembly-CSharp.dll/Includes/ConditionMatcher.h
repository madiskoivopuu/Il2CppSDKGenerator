#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionMatcher"));
	}

	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherActorMagicsCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherAggroTargetCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherAllyCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherAnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherAoeCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherBattlePassCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherBossPortalCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherBusyByCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherBusyCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherCanSneak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherChildrenCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherClanInTeamCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherClanRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherClassCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherCollisionCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherControlsCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherCooldownCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherCraftCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherDamagedSourceCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherDistrictLevelRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherDungeonEnterCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherEndTimeCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherEquipTagsCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherFailMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherFontanelGradeRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherFurnitureCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherFurnitureEmptyUnlockedSlotCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherGameObjectsSaveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherGlobalMapCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherGradeRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherGuildBossKilledCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherGuildCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherHealthCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherHidePetCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherImmobilizedCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherImmuneCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherInteractionCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherInventoryCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherItemCraftActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherItemInSlotCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherLevelRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherLocationGeneratorCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherLocationObjectsCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherLocationTagsCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherMagicCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherMapPointCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherMountInventoryCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherMoveToCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherMovingCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherOr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherOwnCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherOwnerCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherParentCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherPetCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherPetInventoryCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherPlayerCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherPlayersCountCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherPortalOpenCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherPowerRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherProductCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherPvPStateCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherQuestCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherRGCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherResourceCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherRewardsCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherRidingCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherSaveSourceCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherScoutCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherSeasonCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherServerCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherSharedCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherSneakCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherSpeedCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherStatueCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherTagsCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherTavernBoardCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherTempBuffCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherUnlockedCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherViewCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherVisibleCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T& _matcherWorldStatusCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}

	template <typename T = IMatcher1ConditionEntity*>*> static T get_Active() {
		return ((T (*)(void *))(Il2CppBase() + 0x20BF58C))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ActorMagicsCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20BF70C))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_AggroTargetCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20BF8A8))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_AllyCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20BFA44))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_And() {
		return ((T (*)(void *))(Il2CppBase() + 0x20BFBE0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_AoeCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20BFD7C))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_BattlePassCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20BFF18))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C00B4))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_BossPortalCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C0250))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_BusyByCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C03EC))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_BusyCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C0588))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_CanSneak() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C0724))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ChildrenCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C08C0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ClanInTeamCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C0A5C))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ClanRole() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C0BF8))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ClassCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C0D94))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_CollisionCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C0F30))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ControlsCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C10CC))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_CooldownCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C1268))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_CraftCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C1404))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_DamagedSourceCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C15A0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_DistrictLevelRange() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C173C))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_DungeonEnterCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C18D8))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_EndTimeCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C1A74))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_EquipTagsCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C1C10))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_Fail() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C1DAC))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_FailMessage() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C1F48))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_FontanelGradeRange() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C20E4))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_FurnitureCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C2280))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_FurnitureEmptyUnlockedSlotCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C241C))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_GameObjectsSaveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C25B8))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_GlobalMapCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C2754))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_GradeRange() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C28F0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_GuildBossKilledCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C2A90))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_GuildCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C2C30))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_HealthCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C2DD0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_HidePetCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C2F70))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ImmobilizedCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C3110))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ImmuneCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C32B0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_InteractionCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C3450))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_InventoryCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C35F0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ItemCraftActive() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C3790))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ItemInSlotCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C3930))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_LevelRange() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C3AD0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_LocationGeneratorCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C3C70))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_LocationObjectsCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C3E10))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_LocationTagsCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C3FB0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_MagicCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C4150))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_MapPointCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C42F0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_MountInventoryCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C4490))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_MoveToCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C4630))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_MovingCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C47D0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C4970))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_Or() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C4B10))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_OwnCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C4CB0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_OwnerCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C4E50))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ParentCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C4FF0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_PetCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C5190))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_PetInventoryCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C5330))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_PlayerCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C54D0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_PlayersCountCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C5670))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_Point() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C5810))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_PortalOpenCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C59B0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_PowerRange() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C5B50))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ProductCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C5CF0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_PvPStateCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C5E90))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_QuestCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C6030))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_RGCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C61D0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ResourceCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C6370))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_RewardsCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C6510))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_RidingCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C66B0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_SaveSourceCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C6850))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ScoutCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C69F0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_SeasonCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C6B90))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ServerCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C6D30))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_SharedCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C6ED0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_SneakCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C7070))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_SpeedCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C7210))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_StatueCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C73B0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_TagsCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C7550))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_TavernBoardCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C76F0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_TempBuffCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C7890))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_UnlockedCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C7A30))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_ViewCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C7BD0))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_VisibleCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C7D70))(0);
	}
	template <typename T = IMatcher1ConditionEntity*>*> static T get_WorldStatusCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C7F10))(0);
	}
	template <typename T = IAllOfMatcher1ConditionEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20C80B0))(0, indices);
	}
	template <typename T = IAllOfMatcher1ConditionEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20C8128))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1ConditionEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20C81A0))(0, indices);
	}
	template <typename T = IAnyOfMatcher1ConditionEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20C8218))(0, matchers);
	}

};

