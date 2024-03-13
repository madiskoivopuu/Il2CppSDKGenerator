#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintEntity"));
	}

	template <typename T = ClickComponent*> static T& clickComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = ActiveConditionComponent*> T get_activeCondition() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BD8AC))(this);
	}
	template <typename T = bool> T get_hasActiveCondition() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BD934))(this);
	}
	template <typename T = void> T AddActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x16BD940))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x16BDA90))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveActiveCondition() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDBE0))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BBF60))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDBEC))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(BlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x16BDBF8))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(BlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x16BDD0C))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDE20))(this);
	}
	template <typename T = bool> T get_isClick() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDE2C))(this);
	}
	template <typename T = void> T set_isClick(bool value) {
		return ((T (*)(BlueprintEntity*, bool))(Il2CppBase() + 0x16BDE38))(this, value);
	}
	template <typename T = CountComponent*> T get_count() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDF50))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BDFD8))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BDFE4))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BE0E8))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE1EC))(this);
	}
	template <typename T = CraftComponent*> T get_craft() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BBED8))(this);
	}
	template <typename T = bool> T get_hasCraft() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE1F8))(this);
	}
	template <typename T = void> T AddCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<uintptr_t>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BE204))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename T = void> T ReplaceCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<uintptr_t>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BE404))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename T = void> T RemoveCraft() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE604))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE610))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE698))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BE6A4))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BE7CC))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE8F4))(this);
	}
	template <typename T = DurationComponent*> T get_duration() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE900))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BE988))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(BlueprintEntity*, float))(Il2CppBase() + 0x16BE994))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(BlueprintEntity*, float))(Il2CppBase() + 0x16BEA98))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEB9C))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEBA8))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEC30))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BEC3C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16BED94))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEEEC))(this);
	}
	template <typename T = ItemComponent*> T get_item() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEEF8))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BEF80))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(BlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x16BEF8C))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(BlueprintEntity*, Il2CppString*))(Il2CppBase() + 0x16BF0A0))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF1B4))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF1C0))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF248))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(BlueprintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16BF254))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(BlueprintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16BF368))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF47C))(this);
	}
	template <typename T = OrderComponent*> T get_order() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF488))(this);
	}
	template <typename T = bool> T get_hasOrder() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF510))(this);
	}
	template <typename T = void> T AddOrder(int32_t newValue) {
		return ((T (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BF51C))(this, newValue);
	}
	template <typename T = void> T ReplaceOrder(int32_t newValue) {
		return ((T (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BF620))(this, newValue);
	}
	template <typename T = void> T RemoveOrder() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF724))(this);
	}
	template <typename T = PrefabComponent*> T get_prefab() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF730))(this);
	}
	template <typename T = bool> T get_hasPrefab() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BF7B8))(this);
	}
	template <typename T = void> T AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, WorldResourcesType* newResourceType) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, bool, WorldResourcesType*))(Il2CppBase() + 0x16BF7C4))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, WorldResourcesType* newResourceType) {
		return ((T (*)(BlueprintEntity*, Il2CppString*, Il2CppString*, bool, WorldResourcesType*))(Il2CppBase() + 0x16BF908))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T RemovePrefab() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFA4C))(this);
	}
	template <typename T = ResourcesComponent*> T get_resources() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFA58))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFAE0))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(BlueprintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16BFAEC))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(BlueprintEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16BFC00))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFD14))(this);
	}
	template <typename T = TierComponent*> T get_tier() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFD20))(this);
	}
	template <typename T = bool> T get_hasTier() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFDA8))(this);
	}
	template <typename T = void> T AddTier(int32_t newValue) {
		return ((T (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BFDB4))(this, newValue);
	}
	template <typename T = void> T ReplaceTier(int32_t newValue) {
		return ((T (*)(BlueprintEntity*, int32_t))(Il2CppBase() + 0x16BFEB8))(this, newValue);
	}
	template <typename T = void> T RemoveTier() {
		return ((T (*)(BlueprintEntity*))(Il2CppBase() + 0x16BFFBC))(this);
	}

};

