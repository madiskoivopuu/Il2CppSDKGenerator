#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffEntity"));
	}

	template <typename R = ServerLifeTimeComponent*> static R& serverLifeTimeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B020C))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0294))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(TempBuffEntity*, bool))(Il2CppBase() + 0x16B02A0))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(TempBuffEntity*, bool))(Il2CppBase() + 0x16B03A8))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B04B0))(this);
	}
	template <typename R = ApplyOpenWindowComponent*> R get_applyOpenWindow() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B04BC))(this);
	}
	template <typename R = bool> R get_hasApplyOpenWindow() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0544))(this);
	}
	template <typename R = void> R AddApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((R (*)(TempBuffEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B0550))(this, newName, newArg);
	}
	template <typename R = void> R ReplaceApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((R (*)(TempBuffEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B0678))(this, newName, newArg);
	}
	template <typename R = void> R RemoveApplyOpenWindow() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B07A0))(this);
	}
	template <typename R = ApplyStartDialogueComponent*> R get_applyStartDialogue() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B07AC))(this);
	}
	template <typename R = bool> R get_hasApplyStartDialogue() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0834))(this);
	}
	template <typename R = void> R AddApplyStartDialogue(Il2CppString* newName) {
		return ((R (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B0840))(this, newName);
	}
	template <typename R = void> R ReplaceApplyStartDialogue(Il2CppString* newName) {
		return ((R (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B0954))(this, newName);
	}
	template <typename R = void> R RemoveApplyStartDialogue() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0A68))(this);
	}
	template <typename R = ApplyTargetMagicComponent*> R get_applyTargetMagic() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0A74))(this);
	}
	template <typename R = bool> R get_hasApplyTargetMagic() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0AFC))(this);
	}
	template <typename R = void> R AddApplyTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(TempBuffEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x16B0B08))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(TempBuffEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x16B0C70))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyTargetMagic() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0DD8))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0DE4))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B0E6C))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B0E78))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B0F8C))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B10A0))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B10AC))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1134))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(TempBuffEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B1140))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(TempBuffEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B1268))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1390))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B139C))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1424))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(TempBuffEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B1430))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(TempBuffEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B1588))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B16E0))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B16EC))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1774))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TempBuffEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16B1780))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TempBuffEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16B1894))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B19A8))(this);
	}
	template <typename R = PointComponent*> R get_point() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B19B4))(this);
	}
	template <typename R = bool> R get_hasPoint() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1A3C))(this);
	}
	template <typename R = void> R AddPoint(Il2CppString* newName) {
		return ((R (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B1A48))(this, newName);
	}
	template <typename R = void> R ReplacePoint(Il2CppString* newName) {
		return ((R (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B1B5C))(this, newName);
	}
	template <typename R = void> R RemovePoint() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1C70))(this);
	}
	template <typename R = PositionTransactionComponent*> R get_positionTransaction() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1C7C))(this);
	}
	template <typename R = bool> R get_hasPositionTransaction() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1D04))(this);
	}
	template <typename R = void> R AddPositionTransaction(Ease newEase, float newDuration, int64_t newStartTime, Vec2 newStartPosition, Vec2 newEndPosition) {
		return ((R (*)(TempBuffEntity*, Ease, float, int64_t, Vec2, Vec2))(Il2CppBase() + 0x16B1D10))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R ReplacePositionTransaction(Ease newEase, float newDuration, int64_t newStartTime, Vec2 newStartPosition, Vec2 newEndPosition) {
		return ((R (*)(TempBuffEntity*, Ease, float, int64_t, Vec2, Vec2))(Il2CppBase() + 0x16B1E54))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R RemovePositionTransaction() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1F98))(this);
	}
	template <typename R = QuestsComponent*> R get_quests() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B1FA4))(this);
	}
	template <typename R = bool> R get_hasQuests() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B202C))(this);
	}
	template <typename R = void> R AddQuests(int64_t newStartTime, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TempBuffEntity*, int64_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16B2038))(this, newStartTime, newNames);
	}
	template <typename R = void> R ReplaceQuests(int64_t newStartTime, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TempBuffEntity*, int64_t, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16B2154))(this, newStartTime, newNames);
	}
	template <typename R = void> R RemoveQuests() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2270))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B227C))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2304))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(TempBuffEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x16B2310))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(TempBuffEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x16B2424))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2538))(this);
	}
	template <typename R = bool> R get_isServerLifeTime() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2544))(this);
	}
	template <typename R = void> R set_isServerLifeTime(bool value) {
		return ((R (*)(TempBuffEntity*, bool))(Il2CppBase() + 0x16B2550))(this, value);
	}
	template <typename R = TemporaryComponent*> R get_temporary() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2668))(this);
	}
	template <typename R = bool> R get_hasTemporary() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B26F0))(this);
	}
	template <typename R = void> R AddTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime newCyclic) {
		return ((R (*)(TempBuffEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime))(Il2CppBase() + 0x16B26FC))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename R = void> R ReplaceTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime newCyclic) {
		return ((R (*)(TempBuffEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime))(Il2CppBase() + 0x16B2848))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename R = void> R RemoveTemporary() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2994))(this);
	}
	template <typename R = ToolTipComponent*> R get_toolTip() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B29A0))(this);
	}
	template <typename R = bool> R get_hasToolTip() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2A28))(this);
	}
	template <typename R = void> R AddToolTip(ToolTipValue* newValue) {
		return ((R (*)(TempBuffEntity*, ToolTipValue*))(Il2CppBase() + 0x16B2A34))(this, newValue);
	}
	template <typename R = void> R ReplaceToolTip(ToolTipValue* newValue) {
		return ((R (*)(TempBuffEntity*, ToolTipValue*))(Il2CppBase() + 0x16B2B48))(this, newValue);
	}
	template <typename R = void> R RemoveToolTip() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2C5C))(this);
	}
	template <typename R = UIPrefabComponent*> R get_uIPrefab() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2C68))(this);
	}
	template <typename R = bool> R get_hasUIPrefab() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2CF0))(this);
	}
	template <typename R = void> R AddUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((R (*)(TempBuffEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B2CFC))(this, newName, newText, newIcon, newParams);
	}
	template <typename R = void> R ReplaceUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((R (*)(TempBuffEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B2E54))(this, newName, newText, newIcon, newParams);
	}
	template <typename R = void> R RemoveUIPrefab() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2FAC))(this);
	}
	template <typename R = UniqueLookupComponent*> R get_uniqueLookup() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B2FB8))(this);
	}
	template <typename R = bool> R get_hasUniqueLookup() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B3040))(this);
	}
	template <typename R = void> R AddUniqueLookup(Il2CppString* newName) {
		return ((R (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B304C))(this, newName);
	}
	template <typename R = void> R ReplaceUniqueLookup(Il2CppString* newName) {
		return ((R (*)(TempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x16B3160))(this, newName);
	}
	template <typename R = void> R RemoveUniqueLookup() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B3274))(this);
	}
	template <typename R = VersionComponent*> R get_version() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B3280))(this);
	}
	template <typename R = bool> R get_hasVersion() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B3308))(this);
	}
	template <typename R = void> R AddVersion(int32_t newValue) {
		return ((R (*)(TempBuffEntity*, int32_t))(Il2CppBase() + 0x16B3314))(this, newValue);
	}
	template <typename R = void> R ReplaceVersion(int32_t newValue) {
		return ((R (*)(TempBuffEntity*, int32_t))(Il2CppBase() + 0x16B3418))(this, newValue);
	}
	template <typename R = void> R RemoveVersion() {
		return ((R (*)(TempBuffEntity*))(Il2CppBase() + 0x16B351C))(this);
	}

};

