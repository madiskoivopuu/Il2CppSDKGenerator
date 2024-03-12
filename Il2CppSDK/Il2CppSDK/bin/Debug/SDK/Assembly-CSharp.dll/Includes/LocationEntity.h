#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationEntity"));
	}

	template <typename T = uintptr_t> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& borderOffsetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& clanLockedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& dontShowLeaveGridComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& dummyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& guildLockedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& hUDTimerComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& oneCellComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& withoutBorderComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A68D4))(this);
	}
	template <typename T = uintptr_t> T get_aABB() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6BD4))(this);
	}
	template <typename T = bool> T get_hasAABB() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6C5C))(this);
	}
	template <typename T = void> T AddAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((T (*)(LocationEntity*, float, float, float, float))(Il2CppBase() + 0x17A6C68))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename T = void> T ReplaceAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((T (*)(LocationEntity*, float, float, float, float))(Il2CppBase() + 0x17A6D84))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename T = void> T RemoveAABB() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6EA0))(this);
	}
	template <typename T = uintptr_t> T get_additionalScene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6EAC))(this);
	}
	template <typename T = bool> T get_hasAdditionalScene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6F34))(this);
	}
	template <typename T = void> T AddAdditionalScene(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A6F40))(this, newValue);
	}
	template <typename T = void> T ReplaceAdditionalScene(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7054))(this, newValue);
	}
	template <typename T = void> T RemoveAdditionalScene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A7168))(this);
	}
	template <typename T = uintptr_t> T get_additiveScene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A7174))(this);
	}
	template <typename T = bool> T get_hasAdditiveScene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A71FC))(this);
	}
	template <typename T = void> T AddAdditiveScene(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7208))(this, newValue);
	}
	template <typename T = void> T ReplaceAdditiveScene(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A731C))(this, newValue);
	}
	template <typename T = void> T RemoveAdditiveScene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A7430))(this);
	}
	template <typename T = uintptr_t> T get_ambient() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A743C))(this);
	}
	template <typename T = bool> T get_hasAmbient() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A74C4))(this);
	}
	template <typename T = void> T AddAmbient(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A74D0))(this, newValue);
	}
	template <typename T = void> T ReplaceAmbient(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A75E4))(this, newValue);
	}
	template <typename T = void> T RemoveAmbient() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A76F8))(this);
	}
	template <typename T = uintptr_t> T get_audio() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A7704))(this);
	}
	template <typename T = bool> T get_hasAudio() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A778C))(this);
	}
	template <typename T = void> T AddAudio(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7798))(this, newValue);
	}
	template <typename T = void> T ReplaceAudio(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A78AC))(this, newValue);
	}
	template <typename T = void> T RemoveAudio() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A79C0))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A79CC))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A0C1C))(this, value);
	}
	template <typename T = uintptr_t> T get_biome() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A79D8))(this);
	}
	template <typename T = bool> T get_hasBiome() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A7A60))(this);
	}
	template <typename T = void> T AddBiome(float newWetDry, float newColdHotGround, float newColdHotGrass, float newSnow, float newBlizzardPower, uintptr_t newBlizzardVector, bool newBlizzardEnable, bool newSnowEnable, bool newRainEnable, bool newRiftEnable, bool newFireEnable, float newDeltaWetDry, float newDeltaColdHotGround, float newDeltaColdHotGrass, float newDeltaSnow) {
		return ((T (*)(LocationEntity*, float, float, float, float, float, uintptr_t, bool, bool, bool, bool, bool, float, float, float, float))(Il2CppBase() + 0x17A7A6C))(this, newWetDry, newColdHotGround, newColdHotGrass, newSnow, newBlizzardPower, newBlizzardVector, newBlizzardEnable, newSnowEnable, newRainEnable, newRiftEnable, newFireEnable, newDeltaWetDry, newDeltaColdHotGround, newDeltaColdHotGrass, newDeltaSnow);
	}
	template <typename T = void> T ReplaceBiome(float newWetDry, float newColdHotGround, float newColdHotGrass, float newSnow, float newBlizzardPower, uintptr_t newBlizzardVector, bool newBlizzardEnable, bool newSnowEnable, bool newRainEnable, bool newRiftEnable, bool newFireEnable, float newDeltaWetDry, float newDeltaColdHotGround, float newDeltaColdHotGrass, float newDeltaSnow) {
		return ((T (*)(LocationEntity*, float, float, float, float, float, uintptr_t, bool, bool, bool, bool, bool, float, float, float, float))(Il2CppBase() + 0x17A7C50))(this, newWetDry, newColdHotGround, newColdHotGrass, newSnow, newBlizzardPower, newBlizzardVector, newBlizzardEnable, newSnowEnable, newRainEnable, newRiftEnable, newFireEnable, newDeltaWetDry, newDeltaColdHotGround, newDeltaColdHotGrass, newDeltaSnow);
	}
	template <typename T = void> T RemoveBiome() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A7E34))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A7E40))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A7EC8))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7ED4))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17A7FE8))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A80FC))(this);
	}
	template <typename T = bool> T get_hasBorderOffset() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8108))(this);
	}
	template <typename T = void> T set_hasBorderOffset(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A8114))(this, value);
	}
	template <typename T = uintptr_t> T get_chanceEnemyIncome() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A5070))(this);
	}
	template <typename T = bool> T get_hasChanceEnemyIncome() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A5064))(this);
	}
	template <typename T = void> T AddChanceEnemyIncome(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17A822C))(this, newValue);
	}
	template <typename T = void> T ReplaceChanceEnemyIncome(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17A8330))(this, newValue);
	}
	template <typename T = void> T RemoveChanceEnemyIncome() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8434))(this);
	}
	template <typename T = uintptr_t> T get_clan() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8440))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A84C8))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17A84D4))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17A85D8))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A86DC))(this);
	}
	template <typename T = bool> T get_isClanLocked() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A86E8))(this);
	}
	template <typename T = void> T set_isClanLocked(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A86F4))(this, value);
	}
	template <typename T = uintptr_t> T get_currentPhase() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A880C))(this);
	}
	template <typename T = bool> T get_hasCurrentPhase() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8894))(this);
	}
	template <typename T = void> T AddCurrentPhase(int32_t newIndex, int64_t newNextPhaseTime) {
		return ((T (*)(LocationEntity*, int32_t, int64_t))(Il2CppBase() + 0x17A88A0))(this, newIndex, newNextPhaseTime);
	}
	template <typename T = void> T ReplaceCurrentPhase(int32_t newIndex, int64_t newNextPhaseTime) {
		return ((T (*)(LocationEntity*, int32_t, int64_t))(Il2CppBase() + 0x17A89AC))(this, newIndex, newNextPhaseTime);
	}
	template <typename T = void> T RemoveCurrentPhase() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8AB8))(this);
	}
	template <typename T = uintptr_t> T get_difficulty() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8AC4))(this);
	}
	template <typename T = bool> T get_hasDifficulty() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8B4C))(this);
	}
	template <typename T = void> T AddDifficulty(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17A8B58))(this, newType);
	}
	template <typename T = void> T ReplaceDifficulty(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17A8C5C))(this, newType);
	}
	template <typename T = void> T RemoveDifficulty() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8D60))(this);
	}
	template <typename T = uintptr_t> T get_disconnectTimeout() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8D6C))(this);
	}
	template <typename T = bool> T get_hasDisconnectTimeout() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A8DF4))(this);
	}
	template <typename T = void> T AddDisconnectTimeout(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17A8E00))(this, newValue);
	}
	template <typename T = void> T ReplaceDisconnectTimeout(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17A8F04))(this, newValue);
	}
	template <typename T = void> T RemoveDisconnectTimeout() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9008))(this);
	}
	template <typename T = bool> T get_isDontShowLeaveGrid() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9014))(this);
	}
	template <typename T = void> T set_isDontShowLeaveGrid(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A9020))(this, value);
	}
	template <typename T = bool> T get_isDummy() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9138))(this);
	}
	template <typename T = void> T set_isDummy(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17A9144))(this, value);
	}
	template <typename T = uintptr_t> T get_dynamicGrade() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A925C))(this);
	}
	template <typename T = bool> T get_hasDynamicGrade() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A92E4))(this);
	}
	template <typename T = void> T AddDynamicGrade(uintptr_t newType, int32_t newOffset, void* newMax) {
		return ((T (*)(LocationEntity*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x17A92F0))(this, newType, newOffset, newMax);
	}
	template <typename T = void> T ReplaceDynamicGrade(uintptr_t newType, int32_t newOffset, void* newMax) {
		return ((T (*)(LocationEntity*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x17A9408))(this, newType, newOffset, newMax);
	}
	template <typename T = void> T RemoveDynamicGrade() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9520))(this);
	}
	template <typename T = uintptr_t> T get_endTime() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A952C))(this);
	}
	template <typename T = bool> T get_hasEndTime() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A95B4))(this);
	}
	template <typename T = void> T AddEndTime(int64_t newValue) {
		return ((T (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17A95C0))(this, newValue);
	}
	template <typename T = void> T ReplaceEndTime(int64_t newValue) {
		return ((T (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17A96C4))(this, newValue);
	}
	template <typename T = void> T RemoveEndTime() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A97C8))(this);
	}
	template <typename T = uintptr_t> T get_energyPrice() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A97D4))(this);
	}
	template <typename T = bool> T get_hasEnergyPrice() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A985C))(this);
	}
	template <typename T = void> T AddEnergyPrice(int32_t newValue) {
		return ((T (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17A9868))(this, newValue);
	}
	template <typename T = void> T ReplaceEnergyPrice(int32_t newValue) {
		return ((T (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17A996C))(this, newValue);
	}
	template <typename T = void> T RemoveEnergyPrice() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9A70))(this);
	}
	template <typename T = uintptr_t> T get_enterCondition() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9A7C))(this);
	}
	template <typename T = bool> T get_hasEnterCondition() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9B04))(this);
	}
	template <typename T = void> T AddEnterCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(LocationEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x17A9B10))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceEnterCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(LocationEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x17A9C60))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveEnterCondition() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9DB0))(this);
	}
	template <typename T = uintptr_t> T get_enterMagic() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9DBC))(this);
	}
	template <typename T = bool> T get_hasEnterMagic() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A9E44))(this);
	}
	template <typename T = void> T AddEnterMagic(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newDailyRandom) {
		return ((T (*)(LocationEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x17A9E50))(this, newName, newNames, newDailyRandom);
	}
	template <typename T = void> T ReplaceEnterMagic(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newDailyRandom) {
		return ((T (*)(LocationEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x17A9F8C))(this, newName, newNames, newDailyRandom);
	}
	template <typename T = void> T RemoveEnterMagic() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA0C8))(this);
	}
	template <typename T = uintptr_t> T get_enterNotify() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA0D4))(this);
	}
	template <typename T = bool> T get_hasEnterNotify() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA15C))(this);
	}
	template <typename T = void> T AddEnterNotify(uintptr_t newOwnerNotify, uintptr_t newForeignNotify) {
		return ((T (*)(LocationEntity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AA168))(this, newOwnerNotify, newForeignNotify);
	}
	template <typename T = void> T ReplaceEnterNotify(uintptr_t newOwnerNotify, uintptr_t newForeignNotify) {
		return ((T (*)(LocationEntity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AA2C0))(this, newOwnerNotify, newForeignNotify);
	}
	template <typename T = void> T RemoveEnterNotify() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA418))(this);
	}
	template <typename T = uintptr_t> T get_exitCondition() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA424))(this);
	}
	template <typename T = bool> T get_hasExitCondition() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA4AC))(this);
	}
	template <typename T = void> T AddExitCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(LocationEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x17AA4B8))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceExitCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(LocationEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x17AA608))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveExitCondition() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA758))(this);
	}
	template <typename T = uintptr_t> T get_fogOfWar() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA764))(this);
	}
	template <typename T = bool> T get_hasFogOfWar() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AA7EC))(this);
	}
	template <typename T = void> T AddFogOfWar(Il2CppString* newPrefabName, uintptr_t newResourceType) {
		return ((T (*)(LocationEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x17AA7F8))(this, newPrefabName, newResourceType);
	}
	template <typename T = void> T ReplaceFogOfWar(Il2CppString* newPrefabName, uintptr_t newResourceType) {
		return ((T (*)(LocationEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x17AA914))(this, newPrefabName, newResourceType);
	}
	template <typename T = void> T RemoveFogOfWar() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AAA30))(this);
	}
	template <typename T = uintptr_t> T get_generatorParams() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AAA3C))(this);
	}
	template <typename T = bool> T get_hasGeneratorParams() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AAAC4))(this);
	}
	template <typename T = void> T AddGeneratorParams(uintptr_t newValue) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17AAAD0))(this, newValue);
	}
	template <typename T = void> T ReplaceGeneratorParams(uintptr_t newValue) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17AABE4))(this, newValue);
	}
	template <typename T = void> T RemoveGeneratorParams() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AACF8))(this);
	}
	template <typename T = uintptr_t> T get_grade() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AAD04))(this);
	}
	template <typename T = bool> T get_hasGrade() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AAD8C))(this);
	}
	template <typename T = void> T AddGrade(int32_t newValue) {
		return ((T (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17AAD98))(this, newValue);
	}
	template <typename T = void> T ReplaceGrade(int32_t newValue) {
		return ((T (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17AAE9C))(this, newValue);
	}
	template <typename T = void> T RemoveGrade() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AAFA0))(this);
	}
	template <typename T = uintptr_t> T get_ground() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AAFAC))(this);
	}
	template <typename T = bool> T get_hasGround() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB034))(this);
	}
	template <typename T = void> T AddGround(Il2CppString* newName) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AB040))(this, newName);
	}
	template <typename T = void> T ReplaceGround(Il2CppString* newName) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AB154))(this, newName);
	}
	template <typename T = void> T RemoveGround() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB268))(this);
	}
	template <typename T = uintptr_t> T get_guild() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB274))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB2FC))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17AB308))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17AB40C))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB510))(this);
	}
	template <typename T = bool> T get_isGuildLocked() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB51C))(this);
	}
	template <typename T = void> T set_isGuildLocked(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17AB528))(this, value);
	}
	template <typename T = bool> T get_hasHUDTimer() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB640))(this);
	}
	template <typename T = void> T set_hasHUDTimer(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17AB64C))(this, value);
	}
	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A3D38))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6BC8))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17A07DC))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(LocationEntity*, int32_t))(Il2CppBase() + 0x17AB764))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB868))(this);
	}
	template <typename T = uintptr_t> T get_lighting() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB874))(this);
	}
	template <typename T = bool> T get_hasLighting() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AB8FC))(this);
	}
	template <typename T = void> T AddLighting(Il2CppString* newEquatorColor, Il2CppString* newSkyColor, Il2CppString* newGroundColor, Il2CppString* newFogColor, float newFogStart, float newFogEnd, Il2CppString* newSceneLights) {
		return ((T (*)(LocationEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, float, Il2CppString*))(Il2CppBase() + 0x17AB908))(this, newEquatorColor, newSkyColor, newGroundColor, newFogColor, newFogStart, newFogEnd, newSceneLights);
	}
	template <typename T = void> T ReplaceLighting(Il2CppString* newEquatorColor, Il2CppString* newSkyColor, Il2CppString* newGroundColor, Il2CppString* newFogColor, float newFogStart, float newFogEnd, Il2CppString* newSceneLights) {
		return ((T (*)(LocationEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, float, Il2CppString*))(Il2CppBase() + 0x17ABA90))(this, newEquatorColor, newSkyColor, newGroundColor, newFogColor, newFogStart, newFogEnd, newSceneLights);
	}
	template <typename T = void> T RemoveLighting() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ABC18))(this);
	}
	template <typename T = uintptr_t> T get_locationMode() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A0560))(this);
	}
	template <typename T = bool> T get_hasLocationMode() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A0554))(this);
	}
	template <typename T = void> T AddLocationMode(uintptr_t newType, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon, void* newDifficultyIndex, void* newLootIndex, Il2CppString* newPvPName) {
		return ((T (*)(LocationEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, void*, void*, Il2CppString*))(Il2CppBase() + 0x17ABC24))(this, newType, newCaption, newDescription, newIcon, newDifficultyIndex, newLootIndex, newPvPName);
	}
	template <typename T = void> T ReplaceLocationMode(uintptr_t newType, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon, void* newDifficultyIndex, void* newLootIndex, Il2CppString* newPvPName) {
		return ((T (*)(LocationEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, void*, void*, Il2CppString*))(Il2CppBase() + 0x17ABDA0))(this, newType, newCaption, newDescription, newIcon, newDifficultyIndex, newLootIndex, newPvPName);
	}
	template <typename T = void> T RemoveLocationMode() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ABF1C))(this);
	}
	template <typename T = uintptr_t> T get_locationRules() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ABF28))(this);
	}
	template <typename T = bool> T get_hasLocationRules() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ABFB0))(this);
	}
	template <typename T = void> T AddLocationRules(uintptr_t newStatusNameShow, bool newKillOnTimeout, Il2CppString* newKillOnTimeoutCondition, void* newArmorDurabilityDecreaseCoef, void* newWeaponDurabilityDecreaseCoef, void* newOnDeathDurabilityDecreaseCoef, bool newPersonalCorpse, bool newRespawnOnArena, uintptr_t newSpawnType, bool newShowChangeHealthOnlyForPlayer) {
		return ((T (*)(LocationEntity*, uintptr_t, bool, Il2CppString*, void*, void*, void*, bool, bool, uintptr_t, bool))(Il2CppBase() + 0x17ABFBC))(this, newStatusNameShow, newKillOnTimeout, newKillOnTimeoutCondition, newArmorDurabilityDecreaseCoef, newWeaponDurabilityDecreaseCoef, newOnDeathDurabilityDecreaseCoef, newPersonalCorpse, newRespawnOnArena, newSpawnType, newShowChangeHealthOnlyForPlayer);
	}
	template <typename T = void> T ReplaceLocationRules(uintptr_t newStatusNameShow, bool newKillOnTimeout, Il2CppString* newKillOnTimeoutCondition, void* newArmorDurabilityDecreaseCoef, void* newWeaponDurabilityDecreaseCoef, void* newOnDeathDurabilityDecreaseCoef, bool newPersonalCorpse, bool newRespawnOnArena, uintptr_t newSpawnType, bool newShowChangeHealthOnlyForPlayer) {
		return ((T (*)(LocationEntity*, uintptr_t, bool, Il2CppString*, void*, void*, void*, bool, bool, uintptr_t, bool))(Il2CppBase() + 0x17AC14C))(this, newStatusNameShow, newKillOnTimeout, newKillOnTimeoutCondition, newArmorDurabilityDecreaseCoef, newWeaponDurabilityDecreaseCoef, newOnDeathDurabilityDecreaseCoef, newPersonalCorpse, newRespawnOnArena, newSpawnType, newShowChangeHealthOnlyForPlayer);
	}
	template <typename T = void> T RemoveLocationRules() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC2DC))(this);
	}
	template <typename T = uintptr_t> T get_locationStat() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC2E8))(this);
	}
	template <typename T = bool> T get_hasLocationStat() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC370))(this);
	}
	template <typename T = void> T AddLocationStat(void* newVisits, void* newPkOn, void* newPvPKills) {
		return ((T (*)(LocationEntity*, void*, void*, void*))(Il2CppBase() + 0x17AC37C))(this, newVisits, newPkOn, newPvPKills);
	}
	template <typename T = void> T ReplaceLocationStat(void* newVisits, void* newPkOn, void* newPvPKills) {
		return ((T (*)(LocationEntity*, void*, void*, void*))(Il2CppBase() + 0x17AC4C0))(this, newVisits, newPkOn, newPvPKills);
	}
	template <typename T = void> T RemoveLocationStat() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC604))(this);
	}
	template <typename T = uintptr_t> T get_locationType() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC610))(this);
	}
	template <typename T = bool> T get_hasLocationType() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC698))(this);
	}
	template <typename T = void> T AddLocationType(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17AC6A4))(this, newType);
	}
	template <typename T = void> T ReplaceLocationType(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17AC7A8))(this, newType);
	}
	template <typename T = void> T RemoveLocationType() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC8AC))(this);
	}
	template <typename T = uintptr_t> T get_name() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC8B8))(this);
	}
	template <typename T = bool> T get_hasName() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AC940))(this);
	}
	template <typename T = void> T AddName(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AC94C))(this, newValue);
	}
	template <typename T = void> T ReplaceName(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17ACA60))(this, newValue);
	}
	template <typename T = void> T RemoveName() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ACB74))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ACB80))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ACC08))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17ACC14))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17ACD28))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ACE3C))(this);
	}
	template <typename T = bool> T get_isOneCell() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ACE48))(this);
	}
	template <typename T = void> T set_isOneCell(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17ACE54))(this, value);
	}
	template <typename T = uintptr_t> T get_ownerAudio() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ACF6C))(this);
	}
	template <typename T = bool> T get_hasOwnerAudio() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ACFF4))(this);
	}
	template <typename T = void> T AddOwnerAudio(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD000))(this, newValue);
	}
	template <typename T = void> T ReplaceOwnerAudio(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD114))(this, newValue);
	}
	template <typename T = void> T RemoveOwnerAudio() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD228))(this);
	}
	template <typename T = uintptr_t> T get_ownerName() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD234))(this);
	}
	template <typename T = bool> T get_hasOwnerName() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD2BC))(this);
	}
	template <typename T = void> T AddOwnerName(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD2C8))(this, newValue);
	}
	template <typename T = void> T ReplaceOwnerName(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD3DC))(this, newValue);
	}
	template <typename T = void> T RemoveOwnerName() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD4F0))(this);
	}
	template <typename T = uintptr_t> T get_playroom() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD4FC))(this);
	}
	template <typename T = bool> T get_hasPlayroom() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD584))(this);
	}
	template <typename T = void> T AddPlayroom(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD590))(this, newValue);
	}
	template <typename T = void> T ReplacePlayroom(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD6A4))(this, newValue);
	}
	template <typename T = void> T RemovePlayroom() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD7B8))(this);
	}
	template <typename T = uintptr_t> T get_point() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6174))(this);
	}
	template <typename T = bool> T get_hasPoint() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD7C4))(this);
	}
	template <typename T = void> T AddPoint(Il2CppString* newName) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD7D0))(this, newName);
	}
	template <typename T = void> T ReplacePoint(Il2CppString* newName) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AD8E4))(this, newName);
	}
	template <typename T = void> T RemovePoint() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AD9F8))(this);
	}
	template <typename T = uintptr_t> T get_portalInfo() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ADA04))(this);
	}
	template <typename T = bool> T get_hasPortalInfo() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ADA8C))(this);
	}
	template <typename T = void> T AddPortalInfo(uintptr_t newType, int32_t newPortalsRank, Il2CppArray<uintptr_t>* newPlayers) {
		return ((T (*)(LocationEntity*, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17ADA98))(this, newType, newPortalsRank, newPlayers);
	}
	template <typename T = void> T ReplacePortalInfo(uintptr_t newType, int32_t newPortalsRank, Il2CppArray<uintptr_t>* newPlayers) {
		return ((T (*)(LocationEntity*, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17ADBC0))(this, newType, newPortalsRank, newPlayers);
	}
	template <typename T = void> T RemovePortalInfo() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ADCE8))(this);
	}
	template <typename T = uintptr_t> T get_pvpMode() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A5104))(this);
	}
	template <typename T = bool> T get_hasPvpMode() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A50F8))(this);
	}
	template <typename T = void> T AddPvpMode(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17ADCF4))(this, newType);
	}
	template <typename T = void> T ReplacePvpMode(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17ADDF8))(this, newType);
	}
	template <typename T = void> T RemovePvpMode() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ADEFC))(this);
	}
	template <typename T = uintptr_t> T get_quadOwner() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ADF08))(this);
	}
	template <typename T = bool> T get_hasQuadOwner() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17ADF90))(this);
	}
	template <typename T = void> T AddQuadOwner(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17ADF9C))(this, newValues);
	}
	template <typename T = void> T ReplaceQuadOwner(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17AE0B0))(this, newValues);
	}
	template <typename T = void> T RemoveQuadOwner() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE1C4))(this);
	}
	template <typename T = uintptr_t> T get_quests() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE1D0))(this);
	}
	template <typename T = bool> T get_hasQuests() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE258))(this);
	}
	template <typename T = void> T AddQuests(int64_t newStartTime, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(LocationEntity*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17AE264))(this, newStartTime, newNames);
	}
	template <typename T = void> T ReplaceQuests(int64_t newStartTime, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(LocationEntity*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17AE380))(this, newStartTime, newNames);
	}
	template <typename T = void> T RemoveQuests() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE49C))(this);
	}
	template <typename T = uintptr_t> T get_raidMatchingTimeout() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE4A8))(this);
	}
	template <typename T = bool> T get_hasRaidMatchingTimeout() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE530))(this);
	}
	template <typename T = void> T AddRaidMatchingTimeout(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17AE53C))(this, newValue);
	}
	template <typename T = void> T ReplaceRaidMatchingTimeout(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17AE640))(this, newValue);
	}
	template <typename T = void> T RemoveRaidMatchingTimeout() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE744))(this);
	}
	template <typename T = uintptr_t> T get_relationship() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE750))(this);
	}
	template <typename T = bool> T get_hasRelationship() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE7D8))(this);
	}
	template <typename T = void> T AddRelationship(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17AE7E4))(this, newType);
	}
	template <typename T = void> T ReplaceRelationship(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17AE8E8))(this, newType);
	}
	template <typename T = void> T RemoveRelationship() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AE9EC))(this);
	}
	template <typename T = uintptr_t> T get_requiredItems() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A3CB0))(this);
	}
	template <typename T = bool> T get_hasRequiredItems() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A3CA4))(this);
	}
	template <typename T = void> T AddRequiredItems(Il2CppArray<uintptr_t>* newItems, Il2CppString* newInfoText) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x17AE9F8))(this, newItems, newInfoText);
	}
	template <typename T = void> T ReplaceRequiredItems(Il2CppArray<uintptr_t>* newItems, Il2CppString* newInfoText) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x17AEB20))(this, newItems, newInfoText);
	}
	template <typename T = void> T RemoveRequiredItems() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AEC48))(this);
	}
	template <typename T = uintptr_t> T get_resetTime() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6408))(this);
	}
	template <typename T = bool> T get_hasResetTime() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A63FC))(this);
	}
	template <typename T = void> T AddResetTime(int64_t newValue) {
		return ((T (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17AEC54))(this, newValue);
	}
	template <typename T = void> T ReplaceResetTime(int64_t newValue) {
		return ((T (*)(LocationEntity*, int64_t))(Il2CppBase() + 0x17AED58))(this, newValue);
	}
	template <typename T = void> T RemoveResetTime() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AEE5C))(this);
	}
	template <typename T = uintptr_t> T get_resources() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AEE68))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AEEF0))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17AEEFC))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17AF010))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF124))(this);
	}
	template <typename T = uintptr_t> T get_scene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF130))(this);
	}
	template <typename T = bool> T get_hasScene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF1B8))(this);
	}
	template <typename T = void> T AddScene(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AF1C4))(this, newValue);
	}
	template <typename T = void> T ReplaceScene(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AF2D8))(this, newValue);
	}
	template <typename T = void> T RemoveScene() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF3EC))(this);
	}
	template <typename T = uintptr_t> T get_size() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF3F8))(this);
	}
	template <typename T = bool> T get_hasSize() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF480))(this);
	}
	template <typename T = void> T AddSize(float newWidth, float newHeight) {
		return ((T (*)(LocationEntity*, float, float))(Il2CppBase() + 0x17AF48C))(this, newWidth, newHeight);
	}
	template <typename T = void> T ReplaceSize(float newWidth, float newHeight) {
		return ((T (*)(LocationEntity*, float, float))(Il2CppBase() + 0x17AF594))(this, newWidth, newHeight);
	}
	template <typename T = void> T RemoveSize() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF69C))(this);
	}
	template <typename T = uintptr_t> T get_staticSave() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF6A8))(this);
	}
	template <typename T = bool> T get_hasStaticSave() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF730))(this);
	}
	template <typename T = void> T AddStaticSave(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AF73C))(this, newValue);
	}
	template <typename T = void> T ReplaceStaticSave(Il2CppString* newValue) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17AF850))(this, newValue);
	}
	template <typename T = void> T RemoveStaticSave() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF964))(this);
	}
	template <typename T = uintptr_t> T get_tags() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF970))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AF9F8))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17AFA04))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17AFB18))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AFC2C))(this);
	}
	template <typename T = uintptr_t> T get_timeOutExitMap() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AFC38))(this);
	}
	template <typename T = bool> T get_hasTimeOutExitMap() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AFCC0))(this);
	}
	template <typename T = void> T AddTimeOutExitMap(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17AFCCC))(this, newValue);
	}
	template <typename T = void> T ReplaceTimeOutExitMap(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17AFDD0))(this, newValue);
	}
	template <typename T = void> T RemoveTimeOutExitMap() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AFED4))(this);
	}
	template <typename T = uintptr_t> T get_timeOutExitMapPvp() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AFEE0))(this);
	}
	template <typename T = bool> T get_hasTimeOutExitMapPvp() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17AFF68))(this);
	}
	template <typename T = void> T AddTimeOutExitMapPvp(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17AFF74))(this, newValue);
	}
	template <typename T = void> T ReplaceTimeOutExitMapPvp(float newValue) {
		return ((T (*)(LocationEntity*, float))(Il2CppBase() + 0x17B0078))(this, newValue);
	}
	template <typename T = void> T RemoveTimeOutExitMapPvp() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B017C))(this);
	}
	template <typename T = uintptr_t> T get_transport() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B0188))(this);
	}
	template <typename T = bool> T get_hasTransport() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B0210))(this);
	}
	template <typename T = void> T AddTransport(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17B021C))(this, newValues);
	}
	template <typename T = void> T ReplaceTransport(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(LocationEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17B0330))(this, newValues);
	}
	template <typename T = void> T RemoveTransport() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B0444))(this);
	}
	template <typename T = uintptr_t> T get_visualText() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6B40))(this);
	}
	template <typename T = bool> T get_hasVisualText() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17A6B34))(this);
	}
	template <typename T = void> T AddVisualText(Il2CppString* newName) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17B0450))(this, newName);
	}
	template <typename T = void> T ReplaceVisualText(Il2CppString* newName) {
		return ((T (*)(LocationEntity*, Il2CppString*))(Il2CppBase() + 0x17B0564))(this, newName);
	}
	template <typename T = void> T RemoveVisualText() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B0678))(this);
	}
	template <typename T = bool> T get_isWithoutBorder() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B0684))(this);
	}
	template <typename T = void> T set_isWithoutBorder(bool value) {
		return ((T (*)(LocationEntity*, bool))(Il2CppBase() + 0x17B0690))(this, value);
	}
	template <typename T = uintptr_t> T get_worldType() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B07A8))(this);
	}
	template <typename T = bool> T get_hasWorldType() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B0830))(this);
	}
	template <typename T = void> T AddWorldType(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17B083C))(this, newType);
	}
	template <typename T = void> T ReplaceWorldType(uintptr_t newType) {
		return ((T (*)(LocationEntity*, uintptr_t))(Il2CppBase() + 0x17B0940))(this, newType);
	}
	template <typename T = void> T RemoveWorldType() {
		return ((T (*)(LocationEntity*))(Il2CppBase() + 0x17B0A44))(this);
	}

};

}
