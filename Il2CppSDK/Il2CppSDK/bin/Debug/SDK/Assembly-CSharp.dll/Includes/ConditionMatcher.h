#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionMatcher"));
	}

	 static IMatcher1<ConditionEntity*>*& _matcherActive() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherActorMagicsCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherAggroTargetCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherAllyCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherAnd() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherAoeCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherBattlePassCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherBossPortalCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherBusyByCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherBusyCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherCanSneak() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherChildrenCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherClanInTeamCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherClanRole() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherClassCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherCollisionCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherControlsCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherCooldownCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherCraftCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherDamagedSourceCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherDistrictLevelRange() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherDungeonEnterCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherEndTimeCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherEquipTagsCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherFail() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherFailMessage() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherFontanelGradeRange() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherFurnitureCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherFurnitureEmptyUnlockedSlotCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherGameObjectsSaveCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherGlobalMapCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherGradeRange() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherGuildBossKilledCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherGuildCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherHealthCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherHidePetCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherImmobilizedCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherImmuneCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherInteractionCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherInventoryCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherItemCraftActive() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherItemInSlotCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherLevelRange() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherLocationGeneratorCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherLocationObjectsCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherLocationTagsCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherMagicCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherMapPointCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherMountInventoryCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherMoveToCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherMovingCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherOr() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherOwnCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherOwnerCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherParentCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherPetCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherPetInventoryCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherPlayerCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherPlayersCountCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherPoint() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherPortalOpenCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherPowerRange() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherProductCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherPvPStateCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherQuestCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherRGCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherResourceCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherRewardsCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherRidingCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherSaveSourceCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherScoutCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherSeasonCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherServerCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherSharedCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherSneakCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherSpeedCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherStatueCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherTagsCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherTavernBoardCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherTempBuffCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherUnlockedCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherViewCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherVisibleCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1<ConditionEntity*>*& _matcherWorldStatusCondition() {
		return *(IMatcher1<ConditionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}

	 static IMatcher1<ConditionEntity*>* get_Active() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20BF58C))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ActorMagicsCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20BF70C))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_AggroTargetCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20BF8A8))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_AllyCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20BFA44))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_And() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20BFBE0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_AoeCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20BFD7C))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_BattlePassCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20BFF18))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_Blueprint() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C00B4))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_BossPortalCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C0250))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_BusyByCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C03EC))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_BusyCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C0588))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_CanSneak() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C0724))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ChildrenCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C08C0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ClanInTeamCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C0A5C))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ClanRole() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C0BF8))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ClassCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C0D94))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_CollisionCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C0F30))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ControlsCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C10CC))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_CooldownCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C1268))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_CraftCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C1404))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_DamagedSourceCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C15A0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_DistrictLevelRange() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C173C))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_DungeonEnterCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C18D8))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_EndTimeCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C1A74))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_EquipTagsCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C1C10))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_Fail() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C1DAC))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_FailMessage() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C1F48))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_FontanelGradeRange() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C20E4))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_FurnitureCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C2280))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_FurnitureEmptyUnlockedSlotCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C241C))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_GameObjectsSaveCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C25B8))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_GlobalMapCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C2754))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_GradeRange() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C28F0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_GuildBossKilledCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C2A90))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_GuildCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C2C30))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_HealthCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C2DD0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_HidePetCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C2F70))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ImmobilizedCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C3110))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ImmuneCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C32B0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_InteractionCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C3450))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_InventoryCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C35F0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ItemCraftActive() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C3790))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ItemInSlotCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C3930))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_LevelRange() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C3AD0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_LocationGeneratorCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C3C70))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_LocationObjectsCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C3E10))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_LocationTagsCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C3FB0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_MagicCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C4150))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_MapPointCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C42F0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_MountInventoryCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C4490))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_MoveToCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C4630))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_MovingCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C47D0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_OldBlueprint() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C4970))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_Or() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C4B10))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_OwnCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C4CB0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_OwnerCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C4E50))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ParentCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C4FF0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_PetCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C5190))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_PetInventoryCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C5330))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_PlayerCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C54D0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_PlayersCountCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C5670))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_Point() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C5810))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_PortalOpenCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C59B0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_PowerRange() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C5B50))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ProductCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C5CF0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_PvPStateCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C5E90))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_QuestCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C6030))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_RGCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C61D0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ResourceCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C6370))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_RewardsCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C6510))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_RidingCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C66B0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_SaveSourceCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C6850))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ScoutCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C69F0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_SeasonCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C6B90))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ServerCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C6D30))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_SharedCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C6ED0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_SneakCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C7070))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_SpeedCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C7210))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_StatueCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C73B0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_TagsCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C7550))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_TavernBoardCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C76F0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_TempBuffCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C7890))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_UnlockedCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C7A30))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_ViewCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C7BD0))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_VisibleCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C7D70))(0);
	}
	 static IMatcher1<ConditionEntity*>* get_WorldStatusCondition() {
		return ((IMatcher1<ConditionEntity*>* (*)(void *))(Il2CppBase() + 0x20C7F10))(0);
	}
	 static IAllOfMatcher1<ConditionEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<ConditionEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x20C80B0))(0, indices);
	}
	 static IAllOfMatcher1<ConditionEntity*>* AllOf_1(Il2CppArray<IMatcher1<ConditionEntity*>*>* matchers) {
		return ((IAllOfMatcher1<ConditionEntity*>* (*)(void *, Il2CppArray<IMatcher1<ConditionEntity*>*>*))(Il2CppBase() + 0x20C8128))(0, matchers);
	}
	 static IAnyOfMatcher1<ConditionEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<ConditionEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x20C81A0))(0, indices);
	}
	 static IAnyOfMatcher1<ConditionEntity*>* AnyOf_1(Il2CppArray<IMatcher1<ConditionEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<ConditionEntity*>* (*)(void *, Il2CppArray<IMatcher1<ConditionEntity*>*>*))(Il2CppBase() + 0x20C8218))(0, matchers);
	}

};

