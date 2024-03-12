#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationMatcher"));
	}

	template <typename T = void*> static T& _matcherAABB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherAdditionalScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherAdditiveScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherAmbient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherBiome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherBorderOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherChanceEnemyIncome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherClanLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherCurrentPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherDisconnectTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherDontShowLeaveGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherDummy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherDynamicGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherEnergyPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherEnterCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherEnterMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherEnterNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherExitCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherFogOfWar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherGeneratorParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherGuildLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherHUDTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherLighting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherLocationMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherLocationRules() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherLocationStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& _matcherLocationType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& _matcherName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& _matcherOneCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& _matcherOwnerAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& _matcherOwnerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& _matcherPlayroom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& _matcherPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& _matcherPortalInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = void*> static T& _matcherPvpMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = void*> static T& _matcherQuadOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = void*> static T& _matcherQuests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = void*> static T& _matcherRaidMatchingTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = void*> static T& _matcherRelationship() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& _matcherRequiredItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& _matcherResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = void*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = void*> static T& _matcherScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = void*> static T& _matcherSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = void*> static T& _matcherStaticSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = void*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = void*> static T& _matcherTimeOutExitMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = void*> static T& _matcherTimeOutExitMapPvp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = void*> static T& _matcherTransport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = void*> static T& _matcherVisualText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = void*> static T& _matcherWithoutBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = void*> static T& _matcherWorldType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}

	template <typename T = void*> static T get_AABB() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B40B8))(0);
	}
	template <typename T = void*> static T get_AdditionalScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B4238))(0);
	}
	template <typename T = void*> static T get_AdditiveScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B43D4))(0);
	}
	template <typename T = void*> static T get_Ambient() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B4570))(0);
	}
	template <typename T = void*> static T get_Audio() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B470C))(0);
	}
	template <typename T = void*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0x17A09B8))(0);
	}
	template <typename T = void*> static T get_Biome() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B48A8))(0);
	}
	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B4A44))(0);
	}
	template <typename T = void*> static T get_BorderOffset() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B4BE0))(0);
	}
	template <typename T = void*> static T get_ChanceEnemyIncome() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B4D7C))(0);
	}
	template <typename T = void*> static T get_Clan() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B4F18))(0);
	}
	template <typename T = void*> static T get_ClanLocked() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B50B4))(0);
	}
	template <typename T = void*> static T get_CurrentPhase() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B5250))(0);
	}
	template <typename T = void*> static T get_Difficulty() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B53EC))(0);
	}
	template <typename T = void*> static T get_DisconnectTimeout() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B5588))(0);
	}
	template <typename T = void*> static T get_DontShowLeaveGrid() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B5724))(0);
	}
	template <typename T = void*> static T get_Dummy() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B58C0))(0);
	}
	template <typename T = void*> static T get_DynamicGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B5A5C))(0);
	}
	template <typename T = void*> static T get_EndTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B5BF8))(0);
	}
	template <typename T = void*> static T get_EnergyPrice() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B5D94))(0);
	}
	template <typename T = void*> static T get_EnterCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B5F30))(0);
	}
	template <typename T = void*> static T get_EnterMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B60CC))(0);
	}
	template <typename T = void*> static T get_EnterNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B6268))(0);
	}
	template <typename T = void*> static T get_ExitCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B6404))(0);
	}
	template <typename T = void*> static T get_FogOfWar() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B65A0))(0);
	}
	template <typename T = void*> static T get_GeneratorParams() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B673C))(0);
	}
	template <typename T = void*> static T get_Grade() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B68D8))(0);
	}
	template <typename T = void*> static T get_Ground() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B6A74))(0);
	}
	template <typename T = void*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B6C10))(0);
	}
	template <typename T = void*> static T get_GuildLocked() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B6DAC))(0);
	}
	template <typename T = void*> static T get_HUDTimer() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B6F48))(0);
	}
	template <typename T = void*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x179FF5C))(0);
	}
	template <typename T = void*> static T get_Lighting() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B70E4))(0);
	}
	template <typename T = void*> static T get_LocationMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B7284))(0);
	}
	template <typename T = void*> static T get_LocationRules() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B7424))(0);
	}
	template <typename T = void*> static T get_LocationStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B75C4))(0);
	}
	template <typename T = void*> static T get_LocationType() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B7764))(0);
	}
	template <typename T = void*> static T get_Name() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B7904))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B7AA4))(0);
	}
	template <typename T = void*> static T get_OneCell() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B7C44))(0);
	}
	template <typename T = void*> static T get_OwnerAudio() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B7DE4))(0);
	}
	template <typename T = void*> static T get_OwnerName() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B7F84))(0);
	}
	template <typename T = void*> static T get_Playroom() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B8124))(0);
	}
	template <typename T = void*> static T get_Point() {
		return ((T (*)(void *))(Il2CppBase() + 0x17A00F8))(0);
	}
	template <typename T = void*> static T get_PortalInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B82C4))(0);
	}
	template <typename T = void*> static T get_PvpMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B8464))(0);
	}
	template <typename T = void*> static T get_QuadOwner() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B8604))(0);
	}
	template <typename T = void*> static T get_Quests() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B87A4))(0);
	}
	template <typename T = void*> static T get_RaidMatchingTimeout() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B8944))(0);
	}
	template <typename T = void*> static T get_Relationship() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B8AE4))(0);
	}
	template <typename T = void*> static T get_RequiredItems() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B8C84))(0);
	}
	template <typename T = void*> static T get_ResetTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B8E24))(0);
	}
	template <typename T = void*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B8FC4))(0);
	}
	template <typename T = void*> static T get_Scene() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B9164))(0);
	}
	template <typename T = void*> static T get_Size() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B9304))(0);
	}
	template <typename T = void*> static T get_StaticSave() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B94A4))(0);
	}
	template <typename T = void*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B9644))(0);
	}
	template <typename T = void*> static T get_TimeOutExitMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B97E4))(0);
	}
	template <typename T = void*> static T get_TimeOutExitMapPvp() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B9984))(0);
	}
	template <typename T = void*> static T get_Transport() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B9B24))(0);
	}
	template <typename T = void*> static T get_VisualText() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B9CC4))(0);
	}
	template <typename T = void*> static T get_WithoutBorder() {
		return ((T (*)(void *))(Il2CppBase() + 0x17B9E64))(0);
	}
	template <typename T = void*> static T get_WorldType() {
		return ((T (*)(void *))(Il2CppBase() + 0x17BA004))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17BA1A4))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17BA21C))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17BA294))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17BA30C))(0, matchers);
	}

};

}
