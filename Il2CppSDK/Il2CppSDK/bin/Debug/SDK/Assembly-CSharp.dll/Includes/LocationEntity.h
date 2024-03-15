#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationEntity"));
	}

	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = BorderOffsetComponent*> static R& borderOffsetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ClanLockedComponent*> static R& clanLockedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = DontShowLeaveGridComponent*> static R& dontShowLeaveGridComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = DummyComponent*> static R& dummyComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = GuildLockedComponent*> static R& guildLockedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = HUDTimerComponent*> static R& hUDTimerComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = OneCellComponent*> static R& oneCellComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = WithoutBorderComponent*> static R& withoutBorderComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A68D4))(this);
	}
	template <typename R = AABBComponent*> R get_aABB() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6BD4))(this);
	}
	template <typename R = bool> R get_hasAABB() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6C5C))(this);
	}
	template <typename R = void> R AddAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((R (*)(LocationEntity*, float, float, float, float))(Il2CppBase() + 0x17A6C68))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename R = void> R ReplaceAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((R (*)(LocationEntity*, float, float, float, float))(Il2CppBase() + 0x17A6D84))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename R = void> R RemoveAABB() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6EA0))(this);
	}
	template <typename R = AdditionalSceneComponent*> R get_additionalScene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6EAC))(this);
	}
	template <typename R = bool> R get_hasAdditionalScene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6F34))(this);
	}
	template <typename R = void> R AddAdditionalScene(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A6F40))(this, newValue);
	}
	template <typename R = void> R ReplaceAdditionalScene(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7054))(this, newValue);
	}
	template <typename R = void> R RemoveAdditionalScene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A7168))(this);
	}
	template <typename R = AdditiveSceneComponent*> R get_additiveScene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A7174))(this);
	}
	template <typename R = bool> R get_hasAdditiveScene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A71FC))(this);
	}
	template <typename R = void> R AddAdditiveScene(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7208))(this, newValue);
	}
	template <typename R = void> R ReplaceAdditiveScene(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A731C))(this, newValue);
	}
	template <typename R = void> R RemoveAdditiveScene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A7430))(this);
	}
	template <typename R = AmbientComponent*> R get_ambient() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A743C))(this);
	}
	template <typename R = bool> R get_hasAmbient() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A74C4))(this);
	}
	template <typename R = void> R AddAmbient(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A74D0))(this, newValue);
	}
	template <typename R = void> R ReplaceAmbient(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A75E4))(this, newValue);
	}
	template <typename R = void> R RemoveAmbient() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A76F8))(this);
	}
	template <typename R = AudioComponent*> R get_audio() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A7704))(this);
	}
	template <typename R = bool> R get_hasAudio() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A778C))(this);
	}
	template <typename R = void> R AddAudio(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7798))(this, newValue);
	}
	template <typename R = void> R ReplaceAudio(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A78AC))(this, newValue);
	}
	template <typename R = void> R RemoveAudio() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A79C0))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A79CC))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A0C1C))(this, value);
	}
	template <typename R = BiomeComponent*> R get_biome() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A79D8))(this);
	}
	template <typename R = bool> R get_hasBiome() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A7A60))(this);
	}
	template <typename R = void> R AddBiome(float newWetDry, float newColdHotGround, float newColdHotGrass, float newSnow, float newBlizzardPower, uintptr_t newBlizzardVector, bool newBlizzardEnable, bool newSnowEnable, bool newRainEnable, bool newRiftEnable, bool newFireEnable, float newDeltaWetDry, float newDeltaColdHotGround, float newDeltaColdHotGrass, float newDeltaSnow) {
		return ((R (*)(LocationEntity*, float, float, float, float, float, uintptr_t, bool, bool, bool, bool, bool, float, float, float, float))(Il2CppBase() + 0x17A7A6C))(this, newWetDry, newColdHotGround, newColdHotGrass, newSnow, newBlizzardPower, newBlizzardVector, newBlizzardEnable, newSnowEnable, newRainEnable, newRiftEnable, newFireEnable, newDeltaWetDry, newDeltaColdHotGround, newDeltaColdHotGrass, newDeltaSnow);
	}
	template <typename R = void> R ReplaceBiome(float newWetDry, float newColdHotGround, float newColdHotGrass, float newSnow, float newBlizzardPower, uintptr_t newBlizzardVector, bool newBlizzardEnable, bool newSnowEnable, bool newRainEnable, bool newRiftEnable, bool newFireEnable, float newDeltaWetDry, float newDeltaColdHotGround, float newDeltaColdHotGrass, float newDeltaSnow) {
		return ((R (*)(LocationEntity*, float, float, float, float, float, uintptr_t, bool, bool, bool, bool, bool, float, float, float, float))(Il2CppBase() + 0x17A7C50))(this, newWetDry, newColdHotGround, newColdHotGrass, newSnow, newBlizzardPower, newBlizzardVector, newBlizzardEnable, newSnowEnable, newRainEnable, newRiftEnable, newFireEnable, newDeltaWetDry, newDeltaColdHotGround, newDeltaColdHotGrass, newDeltaSnow);
	}
	template <typename R = void> R RemoveBiome() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A7E34))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A7E40))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A7EC8))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7ED4))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7FE8))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A80FC))(this);
	}
	template <typename R = bool> R get_hasBorderOffset() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8108))(this);
	}
	template <typename R = void> R set_hasBorderOffset(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A8114))(this, value);
	}
	template <typename R = ChanceEnemyIncomeComponent*> R get_chanceEnemyIncome() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A5070))(this);
	}
	template <typename R = bool> R get_hasChanceEnemyIncome() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A5064))(this);
	}
	template <typename R = void> R AddChanceEnemyIncome(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17A822C))(this, newValue);
	}
	template <typename R = void> R ReplaceChanceEnemyIncome(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17A8330))(this, newValue);
	}
	template <typename R = void> R RemoveChanceEnemyIncome() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8434))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8440))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A84C8))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17A84D4))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17A85D8))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A86DC))(this);
	}
	template <typename R = bool> R get_isClanLocked() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A86E8))(this);
	}
	template <typename R = void> R set_isClanLocked(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A86F4))(this, value);
	}
	template <typename R = CurrentPhaseComponent*> R get_currentPhase() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A880C))(this);
	}
	template <typename R = bool> R get_hasCurrentPhase() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8894))(this);
	}
	template <typename R = void> R AddCurrentPhase(int32_t newIndex, int64_t newNextPhaseTime) {
		return ((R (*)(LocationEntity*, int32_t, int64_t))(Il2CppBase() + 0x17A88A0))(this, newIndex, newNextPhaseTime);
	}
	template <typename R = void> R ReplaceCurrentPhase(int32_t newIndex, int64_t newNextPhaseTime) {
		return ((R (*)(LocationEntity*, int32_t, int64_t))(Il2CppBase() + 0x17A89AC))(this, newIndex, newNextPhaseTime);
	}
	template <typename R = void> R RemoveCurrentPhase() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8AB8))(this);
	}
	template <typename R = DifficultyComponent*> R get_difficulty() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8AC4))(this);
	}
	template <typename R = bool> R get_hasDifficulty() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8B4C))(this);
	}
	template <typename R = void> R AddDifficulty(Difficulty* newType) {
		return ((R (*)(LocationEntity*, Difficulty*))(Il2CppBase() + 0x17A8B58))(this, newType);
	}
	template <typename R = void> R ReplaceDifficulty(Difficulty* newType) {
		return ((R (*)(LocationEntity*, Difficulty*))(Il2CppBase() + 0x17A8C5C))(this, newType);
	}
	template <typename R = void> R RemoveDifficulty() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8D60))(this);
	}
	template <typename R = DisconnectTimeoutComponent*> R get_disconnectTimeout() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8D6C))(this);
	}
	template <typename R = bool> R get_hasDisconnectTimeout() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A8DF4))(this);
	}
	template <typename R = void> R AddDisconnectTimeout(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17A8E00))(this, newValue);
	}
	template <typename R = void> R ReplaceDisconnectTimeout(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17A8F04))(this, newValue);
	}
	template <typename R = void> R RemoveDisconnectTimeout() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9008))(this);
	}
	template <typename R = bool> R get_isDontShowLeaveGrid() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9014))(this);
	}
	template <typename R = void> R set_isDontShowLeaveGrid(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A9020))(this, value);
	}
	template <typename R = bool> R get_isDummy() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9138))(this);
	}
	template <typename R = void> R set_isDummy(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A9144))(this, value);
	}
	template <typename R = DynamicGradeComponent*> R get_dynamicGrade() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A925C))(this);
	}
	template <typename R = bool> R get_hasDynamicGrade() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A92E4))(this);
	}
	template <typename R = void> R AddDynamicGrade(DynamicGradeType* newType, int32_t newOffset, Nullable1int32_t>* newMax) {
		return ((R (*)(LocationEntity*, DynamicGradeType*, int32_t, Nullable1int32_t>*))(Il2CppBase() + 0x17A92F0))(this, newType, newOffset, newMax);
	}
	template <typename R = void> R ReplaceDynamicGrade(DynamicGradeType* newType, int32_t newOffset, Nullable1int32_t>* newMax) {
		return ((R (*)(LocationEntity*, DynamicGradeType*, int32_t, Nullable1int32_t>*))(Il2CppBase() + 0x17A9408))(this, newType, newOffset, newMax);
	}
	template <typename R = void> R RemoveDynamicGrade() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9520))(this);
	}
	template <typename R = EndTimeComponent*> R get_endTime() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A952C))(this);
	}
	template <typename R = bool> R get_hasEndTime() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A95B4))(this);
	}
	template <typename R = void> R AddEndTime(int64_t newValue) {
		return ((R (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17A95C0))(this, newValue);
	}
	template <typename R = void> R ReplaceEndTime(int64_t newValue) {
		return ((R (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17A96C4))(this, newValue);
	}
	template <typename R = void> R RemoveEndTime() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A97C8))(this);
	}
	template <typename R = EnergyPriceComponent*> R get_energyPrice() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A97D4))(this);
	}
	template <typename R = bool> R get_hasEnergyPrice() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A985C))(this);
	}
	template <typename R = void> R AddEnergyPrice(int32_t newValue) {
		return ((R (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17A9868))(this, newValue);
	}
	template <typename R = void> R ReplaceEnergyPrice(int32_t newValue) {
		return ((R (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17A996C))(this, newValue);
	}
	template <typename R = void> R RemoveEnergyPrice() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9A70))(this);
	}
	template <typename R = EnterConditionComponent*> R get_enterCondition() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9A7C))(this);
	}
	template <typename R = bool> R get_hasEnterCondition() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9B04))(this);
	}
	template <typename R = void> R AddEnterCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(LocationEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x17A9B10))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceEnterCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(LocationEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x17A9C60))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveEnterCondition() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9DB0))(this);
	}
	template <typename R = EnterMagicComponent*> R get_enterMagic() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9DBC))(this);
	}
	template <typename R = bool> R get_hasEnterMagic() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A9E44))(this);
	}
	template <typename R = void> R AddEnterMagic(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newDailyRandom) {
		return ((R (*)(LocationEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x17A9E50))(this, newName, newNames, newDailyRandom);
	}
	template <typename R = void> R ReplaceEnterMagic(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newDailyRandom) {
		return ((R (*)(LocationEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x17A9F8C))(this, newName, newNames, newDailyRandom);
	}
	template <typename R = void> R RemoveEnterMagic() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA0C8))(this);
	}
	template <typename R = EnterNotifyComponent*> R get_enterNotify() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA0D4))(this);
	}
	template <typename R = bool> R get_hasEnterNotify() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA15C))(this);
	}
	template <typename R = void> R AddEnterNotify(EnterNotify* newOwnerNotify, EnterNotify* newForeignNotify) {
		return ((R (*)(LocationEntity*, EnterNotify*, EnterNotify*))(Il2CppBase() + 0x17AA168))(this, newOwnerNotify, newForeignNotify);
	}
	template <typename R = void> R ReplaceEnterNotify(EnterNotify* newOwnerNotify, EnterNotify* newForeignNotify) {
		return ((R (*)(LocationEntity*, EnterNotify*, EnterNotify*))(Il2CppBase() + 0x17AA2C0))(this, newOwnerNotify, newForeignNotify);
	}
	template <typename R = void> R RemoveEnterNotify() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA418))(this);
	}
	template <typename R = ExitConditionComponent*> R get_exitCondition() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA424))(this);
	}
	template <typename R = bool> R get_hasExitCondition() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA4AC))(this);
	}
	template <typename R = void> R AddExitCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(LocationEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x17AA4B8))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceExitCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(LocationEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x17AA608))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveExitCondition() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA758))(this);
	}
	template <typename R = FogOfWarComponent*> R get_fogOfWar() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA764))(this);
	}
	template <typename R = bool> R get_hasFogOfWar() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AA7EC))(this);
	}
	template <typename R = void> R AddFogOfWar(Il2CppString* newPrefabName, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(LocationEntity*, Il2CppString*, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x17AA7F8))(this, newPrefabName, newResourceType);
	}
	template <typename R = void> R ReplaceFogOfWar(Il2CppString* newPrefabName, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(LocationEntity*, Il2CppString*, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x17AA914))(this, newPrefabName, newResourceType);
	}
	template <typename R = void> R RemoveFogOfWar() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AAA30))(this);
	}
	template <typename R = GeneratorParamsComponent*> R get_generatorParams() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AAA3C))(this);
	}
	template <typename R = bool> R get_hasGeneratorParams() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AAAC4))(this);
	}
	template <typename R = void> R AddGeneratorParams(GeneratorParams* newValue) {
		return ((R (*)(LocationEntity*, GeneratorParams*))(Il2CppBase() + 0x17AAAD0))(this, newValue);
	}
	template <typename R = void> R ReplaceGeneratorParams(GeneratorParams* newValue) {
		return ((R (*)(LocationEntity*, GeneratorParams*))(Il2CppBase() + 0x17AABE4))(this, newValue);
	}
	template <typename R = void> R RemoveGeneratorParams() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AACF8))(this);
	}
	template <typename R = GradeComponent*> R get_grade() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AAD04))(this);
	}
	template <typename R = bool> R get_hasGrade() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AAD8C))(this);
	}
	template <typename R = void> R AddGrade(int32_t newValue) {
		return ((R (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17AAD98))(this, newValue);
	}
	template <typename R = void> R ReplaceGrade(int32_t newValue) {
		return ((R (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17AAE9C))(this, newValue);
	}
	template <typename R = void> R RemoveGrade() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AAFA0))(this);
	}
	template <typename R = GroundComponent*> R get_ground() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AAFAC))(this);
	}
	template <typename R = bool> R get_hasGround() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB034))(this);
	}
	template <typename R = void> R AddGround(Il2CppString* newName) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AB040))(this, newName);
	}
	template <typename R = void> R ReplaceGround(Il2CppString* newName) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AB154))(this, newName);
	}
	template <typename R = void> R RemoveGround() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB268))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB274))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB2FC))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17AB308))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17AB40C))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB510))(this);
	}
	template <typename R = bool> R get_isGuildLocked() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB51C))(this);
	}
	template <typename R = void> R set_isGuildLocked(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17AB528))(this, value);
	}
	template <typename R = bool> R get_hasHUDTimer() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB640))(this);
	}
	template <typename R = void> R set_hasHUDTimer(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17AB64C))(this, value);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A3D38))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6BC8))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17A07DC))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17AB764))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB868))(this);
	}
	template <typename R = LightingComponent*> R get_lighting() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB874))(this);
	}
	template <typename R = bool> R get_hasLighting() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AB8FC))(this);
	}
	template <typename R = void> R AddLighting(Il2CppString* newEquatorColor, Il2CppString* newSkyColor, Il2CppString* newGroundColor, Il2CppString* newFogColor, float newFogStart, float newFogEnd, Il2CppString* newSceneLights) {
		return ((R (*)(LocationEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, float, Il2CppString*))(Il2CppBase() + 0x17AB908))(this, newEquatorColor, newSkyColor, newGroundColor, newFogColor, newFogStart, newFogEnd, newSceneLights);
	}
	template <typename R = void> R ReplaceLighting(Il2CppString* newEquatorColor, Il2CppString* newSkyColor, Il2CppString* newGroundColor, Il2CppString* newFogColor, float newFogStart, float newFogEnd, Il2CppString* newSceneLights) {
		return ((R (*)(LocationEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, float, Il2CppString*))(Il2CppBase() + 0x17ABA90))(this, newEquatorColor, newSkyColor, newGroundColor, newFogColor, newFogStart, newFogEnd, newSceneLights);
	}
	template <typename R = void> R RemoveLighting() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ABC18))(this);
	}
	template <typename R = LocationModeComponent*> R get_locationMode() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A0560))(this);
	}
	template <typename R = bool> R get_hasLocationMode() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A0554))(this);
	}
	template <typename R = void> R AddLocationMode(LocationMode* newType, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon, Nullable1int32_t>* newDifficultyIndex, Nullable1int32_t>* newLootIndex, Il2CppString* newPvPName) {
		return ((R (*)(LocationEntity*, LocationMode*, Il2CppString*, Il2CppString*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*))(Il2CppBase() + 0x17ABC24))(this, newType, newCaption, newDescription, newIcon, newDifficultyIndex, newLootIndex, newPvPName);
	}
	template <typename R = void> R ReplaceLocationMode(LocationMode* newType, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon, Nullable1int32_t>* newDifficultyIndex, Nullable1int32_t>* newLootIndex, Il2CppString* newPvPName) {
		return ((R (*)(LocationEntity*, LocationMode*, Il2CppString*, Il2CppString*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*))(Il2CppBase() + 0x17ABDA0))(this, newType, newCaption, newDescription, newIcon, newDifficultyIndex, newLootIndex, newPvPName);
	}
	template <typename R = void> R RemoveLocationMode() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ABF1C))(this);
	}
	template <typename R = LocationRulesComponent*> R get_locationRules() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ABF28))(this);
	}
	template <typename R = bool> R get_hasLocationRules() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ABFB0))(this);
	}
	template <typename R = void> R AddLocationRules(StatusNameShow* newStatusNameShow, bool newKillOnTimeout, Il2CppString* newKillOnTimeoutCondition, Nullable1float>* newArmorDurabilityDecreaseCoef, Nullable1float>* newWeaponDurabilityDecreaseCoef, Nullable1float>* newOnDeathDurabilityDecreaseCoef, bool newPersonalCorpse, bool newRespawnOnArena, SpawnTypes* newSpawnType, bool newShowChangeHealthOnlyForPlayer) {
		return ((R (*)(LocationEntity*, StatusNameShow*, bool, Il2CppString*, Nullable1float>*, Nullable1float>*, Nullable1float>*, bool, bool, SpawnTypes*, bool))(Il2CppBase() + 0x17ABFBC))(this, newStatusNameShow, newKillOnTimeout, newKillOnTimeoutCondition, newArmorDurabilityDecreaseCoef, newWeaponDurabilityDecreaseCoef, newOnDeathDurabilityDecreaseCoef, newPersonalCorpse, newRespawnOnArena, newSpawnType, newShowChangeHealthOnlyForPlayer);
	}
	template <typename R = void> R ReplaceLocationRules(StatusNameShow* newStatusNameShow, bool newKillOnTimeout, Il2CppString* newKillOnTimeoutCondition, Nullable1float>* newArmorDurabilityDecreaseCoef, Nullable1float>* newWeaponDurabilityDecreaseCoef, Nullable1float>* newOnDeathDurabilityDecreaseCoef, bool newPersonalCorpse, bool newRespawnOnArena, SpawnTypes* newSpawnType, bool newShowChangeHealthOnlyForPlayer) {
		return ((R (*)(LocationEntity*, StatusNameShow*, bool, Il2CppString*, Nullable1float>*, Nullable1float>*, Nullable1float>*, bool, bool, SpawnTypes*, bool))(Il2CppBase() + 0x17AC14C))(this, newStatusNameShow, newKillOnTimeout, newKillOnTimeoutCondition, newArmorDurabilityDecreaseCoef, newWeaponDurabilityDecreaseCoef, newOnDeathDurabilityDecreaseCoef, newPersonalCorpse, newRespawnOnArena, newSpawnType, newShowChangeHealthOnlyForPlayer);
	}
	template <typename R = void> R RemoveLocationRules() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC2DC))(this);
	}
	template <typename R = LocationStatComponent*> R get_locationStat() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC2E8))(this);
	}
	template <typename R = bool> R get_hasLocationStat() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC370))(this);
	}
	template <typename R = void> R AddLocationStat(HashSet1int64_t>* newVisits, HashSet1int64_t>* newPkOn, HashSet1LongLong*>* newPvPKills) {
		return ((R (*)(LocationEntity*, HashSet1int64_t>*, HashSet1int64_t>*, HashSet1LongLong*>*))(Il2CppBase() + 0x17AC37C))(this, newVisits, newPkOn, newPvPKills);
	}
	template <typename R = void> R ReplaceLocationStat(HashSet1int64_t>* newVisits, HashSet1int64_t>* newPkOn, HashSet1LongLong*>* newPvPKills) {
		return ((R (*)(LocationEntity*, HashSet1int64_t>*, HashSet1int64_t>*, HashSet1LongLong*>*))(Il2CppBase() + 0x17AC4C0))(this, newVisits, newPkOn, newPvPKills);
	}
	template <typename R = void> R RemoveLocationStat() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC604))(this);
	}
	template <typename R = LocationTypeComponent*> R get_locationType() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC610))(this);
	}
	template <typename R = bool> R get_hasLocationType() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC698))(this);
	}
	template <typename R = void> R AddLocationType(LocationType* newType) {
		return ((R (*)(LocationEntity*, LocationType*))(Il2CppBase() + 0x17AC6A4))(this, newType);
	}
	template <typename R = void> R ReplaceLocationType(LocationType* newType) {
		return ((R (*)(LocationEntity*, LocationType*))(Il2CppBase() + 0x17AC7A8))(this, newType);
	}
	template <typename R = void> R RemoveLocationType() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC8AC))(this);
	}
	template <typename R = NameComponent*> R get_name() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC8B8))(this);
	}
	template <typename R = bool> R get_hasName() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AC940))(this);
	}
	template <typename R = void> R AddName(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AC94C))(this, newValue);
	}
	template <typename R = void> R ReplaceName(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17ACA60))(this, newValue);
	}
	template <typename R = void> R RemoveName() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ACB74))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ACB80))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ACC08))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(LocationEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17ACC14))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(LocationEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17ACD28))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ACE3C))(this);
	}
	template <typename R = bool> R get_isOneCell() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ACE48))(this);
	}
	template <typename R = void> R set_isOneCell(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17ACE54))(this, value);
	}
	template <typename R = OwnerAudioComponent*> R get_ownerAudio() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ACF6C))(this);
	}
	template <typename R = bool> R get_hasOwnerAudio() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ACFF4))(this);
	}
	template <typename R = void> R AddOwnerAudio(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD000))(this, newValue);
	}
	template <typename R = void> R ReplaceOwnerAudio(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD114))(this, newValue);
	}
	template <typename R = void> R RemoveOwnerAudio() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD228))(this);
	}
	template <typename R = OwnerNameComponent*> R get_ownerName() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD234))(this);
	}
	template <typename R = bool> R get_hasOwnerName() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD2BC))(this);
	}
	template <typename R = void> R AddOwnerName(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD2C8))(this, newValue);
	}
	template <typename R = void> R ReplaceOwnerName(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD3DC))(this, newValue);
	}
	template <typename R = void> R RemoveOwnerName() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD4F0))(this);
	}
	template <typename R = PlayroomComponent*> R get_playroom() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD4FC))(this);
	}
	template <typename R = bool> R get_hasPlayroom() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD584))(this);
	}
	template <typename R = void> R AddPlayroom(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD590))(this, newValue);
	}
	template <typename R = void> R ReplacePlayroom(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD6A4))(this, newValue);
	}
	template <typename R = void> R RemovePlayroom() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD7B8))(this);
	}
	template <typename R = PointComponent*> R get_point() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6174))(this);
	}
	template <typename R = bool> R get_hasPoint() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD7C4))(this);
	}
	template <typename R = void> R AddPoint(Il2CppString* newName) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD7D0))(this, newName);
	}
	template <typename R = void> R ReplacePoint(Il2CppString* newName) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD8E4))(this, newName);
	}
	template <typename R = void> R RemovePoint() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AD9F8))(this);
	}
	template <typename R = PortalInfoComponent*> R get_portalInfo() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ADA04))(this);
	}
	template <typename R = bool> R get_hasPortalInfo() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ADA8C))(this);
	}
	template <typename R = void> R AddPortalInfo(LobbyType* newType, int32_t newPortalsRank, Il2CppArray<int64_t>* newPlayers) {
		return ((R (*)(LocationEntity*, LobbyType*, int32_t, Il2CppArray<int64_t>*))(Il2CppBase() + 0x17ADA98))(this, newType, newPortalsRank, newPlayers);
	}
	template <typename R = void> R ReplacePortalInfo(LobbyType* newType, int32_t newPortalsRank, Il2CppArray<int64_t>* newPlayers) {
		return ((R (*)(LocationEntity*, LobbyType*, int32_t, Il2CppArray<int64_t>*))(Il2CppBase() + 0x17ADBC0))(this, newType, newPortalsRank, newPlayers);
	}
	template <typename R = void> R RemovePortalInfo() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ADCE8))(this);
	}
	template <typename R = PvpModeComponent*> R get_pvpMode() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A5104))(this);
	}
	template <typename R = bool> R get_hasPvpMode() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A50F8))(this);
	}
	template <typename R = void> R AddPvpMode(PvpMode* newType) {
		return ((R (*)(LocationEntity*, PvpMode*))(Il2CppBase() + 0x17ADCF4))(this, newType);
	}
	template <typename R = void> R ReplacePvpMode(PvpMode* newType) {
		return ((R (*)(LocationEntity*, PvpMode*))(Il2CppBase() + 0x17ADDF8))(this, newType);
	}
	template <typename R = void> R RemovePvpMode() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ADEFC))(this);
	}
	template <typename R = QuadOwnerComponent*> R get_quadOwner() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ADF08))(this);
	}
	template <typename R = bool> R get_hasQuadOwner() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17ADF90))(this);
	}
	template <typename R = void> R AddQuadOwner(Il2CppArray<int64_t>* newValues) {
		return ((R (*)(LocationEntity*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x17ADF9C))(this, newValues);
	}
	template <typename R = void> R ReplaceQuadOwner(Il2CppArray<int64_t>* newValues) {
		return ((R (*)(LocationEntity*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x17AE0B0))(this, newValues);
	}
	template <typename R = void> R RemoveQuadOwner() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE1C4))(this);
	}
	template <typename R = QuestsComponent*> R get_quests() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE1D0))(this);
	}
	template <typename R = bool> R get_hasQuests() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE258))(this);
	}
	template <typename R = void> R AddQuests(int64_t newStartTime, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(LocationEntity*, int64_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17AE264))(this, newStartTime, newNames);
	}
	template <typename R = void> R ReplaceQuests(int64_t newStartTime, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(LocationEntity*, int64_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17AE380))(this, newStartTime, newNames);
	}
	template <typename R = void> R RemoveQuests() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE49C))(this);
	}
	template <typename R = RaidMatchingTimeout*> R get_raidMatchingTimeout() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE4A8))(this);
	}
	template <typename R = bool> R get_hasRaidMatchingTimeout() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE530))(this);
	}
	template <typename R = void> R AddRaidMatchingTimeout(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17AE53C))(this, newValue);
	}
	template <typename R = void> R ReplaceRaidMatchingTimeout(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17AE640))(this, newValue);
	}
	template <typename R = void> R RemoveRaidMatchingTimeout() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE744))(this);
	}
	template <typename R = RelationshipComponent*> R get_relationship() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE750))(this);
	}
	template <typename R = bool> R get_hasRelationship() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE7D8))(this);
	}
	template <typename R = void> R AddRelationship(RelationshipRules* newType) {
		return ((R (*)(LocationEntity*, RelationshipRules*))(Il2CppBase() + 0x17AE7E4))(this, newType);
	}
	template <typename R = void> R ReplaceRelationship(RelationshipRules* newType) {
		return ((R (*)(LocationEntity*, RelationshipRules*))(Il2CppBase() + 0x17AE8E8))(this, newType);
	}
	template <typename R = void> R RemoveRelationship() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AE9EC))(this);
	}
	template <typename R = RequiredItemsComponent*> R get_requiredItems() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A3CB0))(this);
	}
	template <typename R = bool> R get_hasRequiredItems() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A3CA4))(this);
	}
	template <typename R = void> R AddRequiredItems(Il2CppArray<Item*>* newItems, Il2CppString* newInfoText) {
		return ((R (*)(LocationEntity*, Il2CppArray<Item*>*, Il2CppString*))(Il2CppBase() + 0x17AE9F8))(this, newItems, newInfoText);
	}
	template <typename R = void> R ReplaceRequiredItems(Il2CppArray<Item*>* newItems, Il2CppString* newInfoText) {
		return ((R (*)(LocationEntity*, Il2CppArray<Item*>*, Il2CppString*))(Il2CppBase() + 0x17AEB20))(this, newItems, newInfoText);
	}
	template <typename R = void> R RemoveRequiredItems() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AEC48))(this);
	}
	template <typename R = ResetTimeComponent*> R get_resetTime() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6408))(this);
	}
	template <typename R = bool> R get_hasResetTime() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A63FC))(this);
	}
	template <typename R = void> R AddResetTime(int64_t newValue) {
		return ((R (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17AEC54))(this, newValue);
	}
	template <typename R = void> R ReplaceResetTime(int64_t newValue) {
		return ((R (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17AED58))(this, newValue);
	}
	template <typename R = void> R RemoveResetTime() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AEE5C))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AEE68))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AEEF0))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(LocationEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x17AEEFC))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(LocationEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x17AF010))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF124))(this);
	}
	template <typename R = SceneComponent*> R get_scene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF130))(this);
	}
	template <typename R = bool> R get_hasScene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF1B8))(this);
	}
	template <typename R = void> R AddScene(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AF1C4))(this, newValue);
	}
	template <typename R = void> R ReplaceScene(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AF2D8))(this, newValue);
	}
	template <typename R = void> R RemoveScene() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF3EC))(this);
	}
	template <typename R = SizeComponent*> R get_size() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF3F8))(this);
	}
	template <typename R = bool> R get_hasSize() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF480))(this);
	}
	template <typename R = void> R AddSize(float newWidth, float newHeight) {
		return ((R (*)(LocationEntity*, float, float))(Il2CppBase() + 0x17AF48C))(this, newWidth, newHeight);
	}
	template <typename R = void> R ReplaceSize(float newWidth, float newHeight) {
		return ((R (*)(LocationEntity*, float, float))(Il2CppBase() + 0x17AF594))(this, newWidth, newHeight);
	}
	template <typename R = void> R RemoveSize() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF69C))(this);
	}
	template <typename R = StaticSaveComponent*> R get_staticSave() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF6A8))(this);
	}
	template <typename R = bool> R get_hasStaticSave() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF730))(this);
	}
	template <typename R = void> R AddStaticSave(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AF73C))(this, newValue);
	}
	template <typename R = void> R ReplaceStaticSave(Il2CppString* newValue) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AF850))(this, newValue);
	}
	template <typename R = void> R RemoveStaticSave() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF964))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF970))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AF9F8))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(LocationEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17AFA04))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(LocationEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17AFB18))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AFC2C))(this);
	}
	template <typename R = TimeOutExitMapComponent*> R get_timeOutExitMap() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AFC38))(this);
	}
	template <typename R = bool> R get_hasTimeOutExitMap() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AFCC0))(this);
	}
	template <typename R = void> R AddTimeOutExitMap(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17AFCCC))(this, newValue);
	}
	template <typename R = void> R ReplaceTimeOutExitMap(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17AFDD0))(this, newValue);
	}
	template <typename R = void> R RemoveTimeOutExitMap() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AFED4))(this);
	}
	template <typename R = TimeOutExitMapPvpComponent*> R get_timeOutExitMapPvp() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AFEE0))(this);
	}
	template <typename R = bool> R get_hasTimeOutExitMapPvp() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17AFF68))(this);
	}
	template <typename R = void> R AddTimeOutExitMapPvp(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17AFF74))(this, newValue);
	}
	template <typename R = void> R ReplaceTimeOutExitMapPvp(float newValue) {
		return ((R (*)(LocationEntity*, float))(Il2CppBase() + 0x17B0078))(this, newValue);
	}
	template <typename R = void> R RemoveTimeOutExitMapPvp() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B017C))(this);
	}
	template <typename R = TransportComponent*> R get_transport() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B0188))(this);
	}
	template <typename R = bool> R get_hasTransport() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B0210))(this);
	}
	template <typename R = void> R AddTransport(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(LocationEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17B021C))(this, newValues);
	}
	template <typename R = void> R ReplaceTransport(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(LocationEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17B0330))(this, newValues);
	}
	template <typename R = void> R RemoveTransport() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B0444))(this);
	}
	template <typename R = VisualTextComponent*> R get_visualText() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6B40))(this);
	}
	template <typename R = bool> R get_hasVisualText() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17A6B34))(this);
	}
	template <typename R = void> R AddVisualText(Il2CppString* newName) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17B0450))(this, newName);
	}
	template <typename R = void> R ReplaceVisualText(Il2CppString* newName) {
		return ((R (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17B0564))(this, newName);
	}
	template <typename R = void> R RemoveVisualText() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B0678))(this);
	}
	template <typename R = bool> R get_isWithoutBorder() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B0684))(this);
	}
	template <typename R = void> R set_isWithoutBorder(bool value) {
		return ((R (*)(LocationEntity*, bool))(Il2CppBase() + 0x17B0690))(this, value);
	}
	template <typename R = WorldTypeComponent*> R get_worldType() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B07A8))(this);
	}
	template <typename R = bool> R get_hasWorldType() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B0830))(this);
	}
	template <typename R = void> R AddWorldType(WorldType* newType) {
		return ((R (*)(LocationEntity*, WorldType*))(Il2CppBase() + 0x17B083C))(this, newType);
	}
	template <typename R = void> R ReplaceWorldType(WorldType* newType) {
		return ((R (*)(LocationEntity*, WorldType*))(Il2CppBase() + 0x17B0940))(this, newType);
	}
	template <typename R = void> R RemoveWorldType() {
		return ((R (*)(LocationEntity*))(Il2CppBase() + 0x17B0A44))(this);
	}

};

