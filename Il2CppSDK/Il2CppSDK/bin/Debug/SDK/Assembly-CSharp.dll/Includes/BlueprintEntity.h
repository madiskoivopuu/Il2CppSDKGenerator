#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintEntity"));
	}

	template <typename R = ClickComponent*> static R& clickComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ActiveConditionComponent*> R get_activeCondition() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BD8AC))(this);
	}
	template <typename R = bool> R get_hasActiveCondition() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BD934))(this);
	}
	template <typename R = void> R AddActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x16BD940))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x16BDA90))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveActiveCondition() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDBE0))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BBF60))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDBEC))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(BlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x16BDBF8))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(BlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x16BDD0C))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDE20))(this);
	}
	template <typename R = bool> R get_isClick() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDE2C))(this);
	}
	template <typename R = void> R set_isClick(bool value) {
		return ((R (*)(BlueprintEntity*, bool))(Il2CppBase() + 0x16BDE38))(this, value);
	}
	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDF50))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDFD8))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BDFE4))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BE0E8))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE1EC))(this);
	}
	template <typename R = CraftComponent*> R get_craft() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BBED8))(this);
	}
	template <typename R = bool> R get_hasCraft() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE1F8))(this);
	}
	template <typename R = void> R AddCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<FuelItem*>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<FuelItem*>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BE204))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename R = void> R ReplaceCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<FuelItem*>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<FuelItem*>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BE404))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename R = void> R RemoveCraft() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE604))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE610))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE698))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BE6A4))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BE7CC))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE8F4))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE900))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE988))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(BlueprintEntity*, float))(Il2CppBase() + 0x16BE994))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(BlueprintEntity*, float))(Il2CppBase() + 0x16BEA98))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEB9C))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEBA8))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEC30))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BEC3C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BED94))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEEEC))(this);
	}
	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEEF8))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEF80))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(BlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x16BEF8C))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(BlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x16BF0A0))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF1B4))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF1C0))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF248))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(BlueprintEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16BF254))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(BlueprintEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16BF368))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF47C))(this);
	}
	template <typename R = OrderComponent*> R get_order() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF488))(this);
	}
	template <typename R = bool> R get_hasOrder() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF510))(this);
	}
	template <typename R = void> R AddOrder(int32_t newValue) {
		return ((R (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BF51C))(this, newValue);
	}
	template <typename R = void> R ReplaceOrder(int32_t newValue) {
		return ((R (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BF620))(this, newValue);
	}
	template <typename R = void> R RemoveOrder() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF724))(this);
	}
	template <typename R = PrefabComponent*> R get_prefab() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF730))(this);
	}
	template <typename R = bool> R get_hasPrefab() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF7B8))(this);
	}
	template <typename R = void> R AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x16BF7C4))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x16BF908))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R RemovePrefab() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFA4C))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFA58))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFAE0))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(BlueprintEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x16BFAEC))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(BlueprintEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x16BFC00))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFD14))(this);
	}
	template <typename R = TierComponent*> R get_tier() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFD20))(this);
	}
	template <typename R = bool> R get_hasTier() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFDA8))(this);
	}
	template <typename R = void> R AddTier(int32_t newValue) {
		return ((R (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BFDB4))(this, newValue);
	}
	template <typename R = void> R ReplaceTier(int32_t newValue) {
		return ((R (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BFEB8))(this, newValue);
	}
	template <typename R = void> R RemoveTier() {
		return ((R (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFFBC))(this);
	}

};

