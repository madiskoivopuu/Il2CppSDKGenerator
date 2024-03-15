#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationMatcher"));
	}

	 static IMatcher1LocationEntity*>*& _matcherAABB() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1LocationEntity*>*& _matcherAdditionalScene() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1LocationEntity*>*& _matcherAdditiveScene() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1LocationEntity*>*& _matcherAmbient() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1LocationEntity*>*& _matcherAudio() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1LocationEntity*>*& _matcherAvatar() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1LocationEntity*>*& _matcherBiome() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1LocationEntity*>*& _matcherBlueprint() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1LocationEntity*>*& _matcherBorderOffset() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1LocationEntity*>*& _matcherChanceEnemyIncome() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1LocationEntity*>*& _matcherClan() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1LocationEntity*>*& _matcherClanLocked() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1LocationEntity*>*& _matcherCurrentPhase() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1LocationEntity*>*& _matcherDifficulty() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1LocationEntity*>*& _matcherDisconnectTimeout() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1LocationEntity*>*& _matcherDontShowLeaveGrid() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1LocationEntity*>*& _matcherDummy() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1LocationEntity*>*& _matcherDynamicGrade() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1LocationEntity*>*& _matcherEndTime() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1LocationEntity*>*& _matcherEnergyPrice() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1LocationEntity*>*& _matcherEnterCondition() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1LocationEntity*>*& _matcherEnterMagic() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1LocationEntity*>*& _matcherEnterNotify() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1LocationEntity*>*& _matcherExitCondition() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1LocationEntity*>*& _matcherFogOfWar() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1LocationEntity*>*& _matcherGeneratorParams() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1LocationEntity*>*& _matcherGrade() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1LocationEntity*>*& _matcherGround() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1LocationEntity*>*& _matcherGuild() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1LocationEntity*>*& _matcherGuildLocked() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1LocationEntity*>*& _matcherHUDTimer() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1LocationEntity*>*& _matcherId() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1LocationEntity*>*& _matcherLighting() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1LocationEntity*>*& _matcherLocationMode() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1LocationEntity*>*& _matcherLocationRules() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1LocationEntity*>*& _matcherLocationStat() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1LocationEntity*>*& _matcherLocationType() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1LocationEntity*>*& _matcherName() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1LocationEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1LocationEntity*>*& _matcherOneCell() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1LocationEntity*>*& _matcherOwnerAudio() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1LocationEntity*>*& _matcherOwnerName() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1LocationEntity*>*& _matcherPlayroom() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1LocationEntity*>*& _matcherPoint() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1LocationEntity*>*& _matcherPortalInfo() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1LocationEntity*>*& _matcherPvpMode() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1LocationEntity*>*& _matcherQuadOwner() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1LocationEntity*>*& _matcherQuests() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1LocationEntity*>*& _matcherRaidMatchingTimeout() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1LocationEntity*>*& _matcherRelationship() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1LocationEntity*>*& _matcherRequiredItems() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1LocationEntity*>*& _matcherResetTime() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1LocationEntity*>*& _matcherResources() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1LocationEntity*>*& _matcherScene() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1LocationEntity*>*& _matcherSize() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1LocationEntity*>*& _matcherStaticSave() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1LocationEntity*>*& _matcherTags() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1LocationEntity*>*& _matcherTimeOutExitMap() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1LocationEntity*>*& _matcherTimeOutExitMapPvp() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1LocationEntity*>*& _matcherTransport() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1LocationEntity*>*& _matcherVisualText() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1LocationEntity*>*& _matcherWithoutBorder() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1LocationEntity*>*& _matcherWorldType() {
		return *(IMatcher1LocationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}

	 static IMatcher1LocationEntity*>* get_AABB() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B40B8))(0);
	}
	 static IMatcher1LocationEntity*>* get_AdditionalScene() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B4238))(0);
	}
	 static IMatcher1LocationEntity*>* get_AdditiveScene() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B43D4))(0);
	}
	 static IMatcher1LocationEntity*>* get_Ambient() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B4570))(0);
	}
	 static IMatcher1LocationEntity*>* get_Audio() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B470C))(0);
	}
	 static IMatcher1LocationEntity*>* get_Avatar() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17A09B8))(0);
	}
	 static IMatcher1LocationEntity*>* get_Biome() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B48A8))(0);
	}
	 static IMatcher1LocationEntity*>* get_Blueprint() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B4A44))(0);
	}
	 static IMatcher1LocationEntity*>* get_BorderOffset() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B4BE0))(0);
	}
	 static IMatcher1LocationEntity*>* get_ChanceEnemyIncome() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B4D7C))(0);
	}
	 static IMatcher1LocationEntity*>* get_Clan() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B4F18))(0);
	}
	 static IMatcher1LocationEntity*>* get_ClanLocked() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B50B4))(0);
	}
	 static IMatcher1LocationEntity*>* get_CurrentPhase() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B5250))(0);
	}
	 static IMatcher1LocationEntity*>* get_Difficulty() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B53EC))(0);
	}
	 static IMatcher1LocationEntity*>* get_DisconnectTimeout() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B5588))(0);
	}
	 static IMatcher1LocationEntity*>* get_DontShowLeaveGrid() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B5724))(0);
	}
	 static IMatcher1LocationEntity*>* get_Dummy() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B58C0))(0);
	}
	 static IMatcher1LocationEntity*>* get_DynamicGrade() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B5A5C))(0);
	}
	 static IMatcher1LocationEntity*>* get_EndTime() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B5BF8))(0);
	}
	 static IMatcher1LocationEntity*>* get_EnergyPrice() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B5D94))(0);
	}
	 static IMatcher1LocationEntity*>* get_EnterCondition() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B5F30))(0);
	}
	 static IMatcher1LocationEntity*>* get_EnterMagic() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B60CC))(0);
	}
	 static IMatcher1LocationEntity*>* get_EnterNotify() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B6268))(0);
	}
	 static IMatcher1LocationEntity*>* get_ExitCondition() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B6404))(0);
	}
	 static IMatcher1LocationEntity*>* get_FogOfWar() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B65A0))(0);
	}
	 static IMatcher1LocationEntity*>* get_GeneratorParams() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B673C))(0);
	}
	 static IMatcher1LocationEntity*>* get_Grade() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B68D8))(0);
	}
	 static IMatcher1LocationEntity*>* get_Ground() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B6A74))(0);
	}
	 static IMatcher1LocationEntity*>* get_Guild() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B6C10))(0);
	}
	 static IMatcher1LocationEntity*>* get_GuildLocked() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B6DAC))(0);
	}
	 static IMatcher1LocationEntity*>* get_HUDTimer() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B6F48))(0);
	}
	 static IMatcher1LocationEntity*>* get_Id() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x179FF5C))(0);
	}
	 static IMatcher1LocationEntity*>* get_Lighting() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B70E4))(0);
	}
	 static IMatcher1LocationEntity*>* get_LocationMode() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B7284))(0);
	}
	 static IMatcher1LocationEntity*>* get_LocationRules() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B7424))(0);
	}
	 static IMatcher1LocationEntity*>* get_LocationStat() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B75C4))(0);
	}
	 static IMatcher1LocationEntity*>* get_LocationType() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B7764))(0);
	}
	 static IMatcher1LocationEntity*>* get_Name() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B7904))(0);
	}
	 static IMatcher1LocationEntity*>* get_OldBlueprint() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B7AA4))(0);
	}
	 static IMatcher1LocationEntity*>* get_OneCell() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B7C44))(0);
	}
	 static IMatcher1LocationEntity*>* get_OwnerAudio() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B7DE4))(0);
	}
	 static IMatcher1LocationEntity*>* get_OwnerName() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B7F84))(0);
	}
	 static IMatcher1LocationEntity*>* get_Playroom() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B8124))(0);
	}
	 static IMatcher1LocationEntity*>* get_Point() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17A00F8))(0);
	}
	 static IMatcher1LocationEntity*>* get_PortalInfo() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B82C4))(0);
	}
	 static IMatcher1LocationEntity*>* get_PvpMode() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B8464))(0);
	}
	 static IMatcher1LocationEntity*>* get_QuadOwner() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B8604))(0);
	}
	 static IMatcher1LocationEntity*>* get_Quests() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B87A4))(0);
	}
	 static IMatcher1LocationEntity*>* get_RaidMatchingTimeout() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B8944))(0);
	}
	 static IMatcher1LocationEntity*>* get_Relationship() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B8AE4))(0);
	}
	 static IMatcher1LocationEntity*>* get_RequiredItems() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B8C84))(0);
	}
	 static IMatcher1LocationEntity*>* get_ResetTime() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B8E24))(0);
	}
	 static IMatcher1LocationEntity*>* get_Resources() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B8FC4))(0);
	}
	 static IMatcher1LocationEntity*>* get_Scene() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B9164))(0);
	}
	 static IMatcher1LocationEntity*>* get_Size() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B9304))(0);
	}
	 static IMatcher1LocationEntity*>* get_StaticSave() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B94A4))(0);
	}
	 static IMatcher1LocationEntity*>* get_Tags() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B9644))(0);
	}
	 static IMatcher1LocationEntity*>* get_TimeOutExitMap() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B97E4))(0);
	}
	 static IMatcher1LocationEntity*>* get_TimeOutExitMapPvp() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B9984))(0);
	}
	 static IMatcher1LocationEntity*>* get_Transport() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B9B24))(0);
	}
	 static IMatcher1LocationEntity*>* get_VisualText() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B9CC4))(0);
	}
	 static IMatcher1LocationEntity*>* get_WithoutBorder() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17B9E64))(0);
	}
	 static IMatcher1LocationEntity*>* get_WorldType() {
		return ((IMatcher1LocationEntity*>* (*)(void *))(Il2CppBase() + 0x17BA004))(0);
	}
	 static IAllOfMatcher1LocationEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1LocationEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x17BA1A4))(0, indices);
	}
	 static IAllOfMatcher1LocationEntity*>* AllOf_1(Il2CppArray<IMatcher1LocationEntity*>*>* matchers) {
		return ((IAllOfMatcher1LocationEntity*>* (*)(void *, Il2CppArray<IMatcher1LocationEntity*>*>*))(Il2CppBase() + 0x17BA21C))(0, matchers);
	}
	 static IAnyOfMatcher1LocationEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1LocationEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x17BA294))(0, indices);
	}
	 static IAnyOfMatcher1LocationEntity*>* AnyOf_1(Il2CppArray<IMatcher1LocationEntity*>*>* matchers) {
		return ((IAnyOfMatcher1LocationEntity*>* (*)(void *, Il2CppArray<IMatcher1LocationEntity*>*>*))(Il2CppBase() + 0x17BA30C))(0, matchers);
	}

};

