#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffEntity"));
	}

	template <typename T = uintptr_t> static T& serverLifeTimeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_active() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B020C))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0294))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(TempBuffEntity*, bool))(Il2CppBase() + 0x16B02A0))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(TempBuffEntity*, bool))(Il2CppBase() + 0x16B03A8))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B04B0))(this);
	}
	template <typename T = uintptr_t> T get_applyOpenWindow() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B04BC))(this);
	}
	template <typename T = bool> T get_hasApplyOpenWindow() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0544))(this);
	}
	template <typename T = void> T AddApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((T (*)(TempBuffEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B0550))(this, newName, newArg);
	}
	template <typename T = void> T ReplaceApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((T (*)(TempBuffEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B0678))(this, newName, newArg);
	}
	template <typename T = void> T RemoveApplyOpenWindow() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B07A0))(this);
	}
	template <typename T = uintptr_t> T get_applyStartDialogue() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B07AC))(this);
	}
	template <typename T = bool> T get_hasApplyStartDialogue() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0834))(this);
	}
	template <typename T = void> T AddApplyStartDialogue(Il2CppString* newName) {
		return ((T (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B0840))(this, newName);
	}
	template <typename T = void> T ReplaceApplyStartDialogue(Il2CppString* newName) {
		return ((T (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B0954))(this, newName);
	}
	template <typename T = void> T RemoveApplyStartDialogue() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0A68))(this);
	}
	template <typename T = uintptr_t> T get_applyTargetMagic() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0A74))(this);
	}
	template <typename T = bool> T get_hasApplyTargetMagic() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0AFC))(this);
	}
	template <typename T = void> T AddApplyTargetMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(TempBuffEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x16B0B08))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyTargetMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(TempBuffEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x16B0C70))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyTargetMagic() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0DD8))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0DE4))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0E6C))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B0E78))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B0F8C))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B10A0))(this);
	}
	template <typename T = uintptr_t> T get_description() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B10AC))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1134))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(TempBuffEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B1140))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(TempBuffEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B1268))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1390))(this);
	}
	template <typename T = uintptr_t> T get_icon() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B139C))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1424))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(TempBuffEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B1430))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(TempBuffEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B1588))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B16E0))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B16EC))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1774))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TempBuffEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B1780))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TempBuffEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B1894))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B19A8))(this);
	}
	template <typename T = uintptr_t> T get_point() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B19B4))(this);
	}
	template <typename T = bool> T get_hasPoint() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1A3C))(this);
	}
	template <typename T = void> T AddPoint(Il2CppString* newName) {
		return ((T (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B1A48))(this, newName);
	}
	template <typename T = void> T ReplacePoint(Il2CppString* newName) {
		return ((T (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B1B5C))(this, newName);
	}
	template <typename T = void> T RemovePoint() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1C70))(this);
	}
	template <typename T = uintptr_t> T get_positionTransaction() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1C7C))(this);
	}
	template <typename T = bool> T get_hasPositionTransaction() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1D04))(this);
	}
	template <typename T = void> T AddPositionTransaction(uintptr_t newEase, float newDuration, int64_t newStartTime, uintptr_t newStartPosition, uintptr_t newEndPosition) {
		return ((T (*)(TempBuffEntity*, uintptr_t, float, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B1D10))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T ReplacePositionTransaction(uintptr_t newEase, float newDuration, int64_t newStartTime, uintptr_t newStartPosition, uintptr_t newEndPosition) {
		return ((T (*)(TempBuffEntity*, uintptr_t, float, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B1E54))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T RemovePositionTransaction() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1F98))(this);
	}
	template <typename T = uintptr_t> T get_quests() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1FA4))(this);
	}
	template <typename T = bool> T get_hasQuests() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B202C))(this);
	}
	template <typename T = void> T AddQuests(int64_t newStartTime, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TempBuffEntity*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B2038))(this, newStartTime, newNames);
	}
	template <typename T = void> T ReplaceQuests(int64_t newStartTime, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TempBuffEntity*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B2154))(this, newStartTime, newNames);
	}
	template <typename T = void> T RemoveQuests() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2270))(this);
	}
	template <typename T = uintptr_t> T get_resources() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B227C))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2304))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TempBuffEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B2310))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TempBuffEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16B2424))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2538))(this);
	}
	template <typename T = bool> T get_isServerLifeTime() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2544))(this);
	}
	template <typename T = void> T set_isServerLifeTime(bool value) {
		return ((T (*)(TempBuffEntity*, bool))(Il2CppBase() + 0x16B2550))(this, value);
	}
	template <typename T = uintptr_t> T get_temporary() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2668))(this);
	}
	template <typename T = bool> T get_hasTemporary() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B26F0))(this);
	}
	template <typename T = void> T AddTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, uintptr_t newCyclic) {
		return ((T (*)(TempBuffEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, uintptr_t))(Il2CppBase() + 0x16B26FC))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename T = void> T ReplaceTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, uintptr_t newCyclic) {
		return ((T (*)(TempBuffEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, uintptr_t))(Il2CppBase() + 0x16B2848))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename T = void> T RemoveTemporary() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2994))(this);
	}
	template <typename T = uintptr_t> T get_toolTip() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B29A0))(this);
	}
	template <typename T = bool> T get_hasToolTip() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2A28))(this);
	}
	template <typename T = void> T AddToolTip(uintptr_t newValue) {
		return ((T (*)(TempBuffEntity*, uintptr_t))(Il2CppBase() + 0x16B2A34))(this, newValue);
	}
	template <typename T = void> T ReplaceToolTip(uintptr_t newValue) {
		return ((T (*)(TempBuffEntity*, uintptr_t))(Il2CppBase() + 0x16B2B48))(this, newValue);
	}
	template <typename T = void> T RemoveToolTip() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2C5C))(this);
	}
	template <typename T = uintptr_t> T get_uIPrefab() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2C68))(this);
	}
	template <typename T = bool> T get_hasUIPrefab() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2CF0))(this);
	}
	template <typename T = void> T AddUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((T (*)(TempBuffEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B2CFC))(this, newName, newText, newIcon, newParams);
	}
	template <typename T = void> T ReplaceUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((T (*)(TempBuffEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B2E54))(this, newName, newText, newIcon, newParams);
	}
	template <typename T = void> T RemoveUIPrefab() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2FAC))(this);
	}
	template <typename T = uintptr_t> T get_uniqueLookup() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2FB8))(this);
	}
	template <typename T = bool> T get_hasUniqueLookup() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B3040))(this);
	}
	template <typename T = void> T AddUniqueLookup(Il2CppString* newName) {
		return ((T (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B304C))(this, newName);
	}
	template <typename T = void> T ReplaceUniqueLookup(Il2CppString* newName) {
		return ((T (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B3160))(this, newName);
	}
	template <typename T = void> T RemoveUniqueLookup() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B3274))(this);
	}
	template <typename T = uintptr_t> T get_version() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B3280))(this);
	}
	template <typename T = bool> T get_hasVersion() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B3308))(this);
	}
	template <typename T = void> T AddVersion(int32_t newValue) {
		return ((T (*)(TempBuffEntity*, int32_t))(Il2CppBase() + 0x16B3314))(this, newValue);
	}
	template <typename T = void> T ReplaceVersion(int32_t newValue) {
		return ((T (*)(TempBuffEntity*, int32_t))(Il2CppBase() + 0x16B3418))(this, newValue);
	}
	template <typename T = void> T RemoveVersion() {
		return ((T (*)(TempBuffEntity*))(Il2CppBase() + 0x16B351C))(this);
	}

};

}
