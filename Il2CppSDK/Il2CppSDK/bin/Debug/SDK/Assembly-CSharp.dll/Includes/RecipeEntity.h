#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeEntity"));
	}

	template <typename R = ClickComponent*> static R& clickComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ActiveConditionComponent*> R get_activeCondition() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x139694C))(this);
	}
	template <typename R = bool> R get_hasActiveCondition() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13969D4))(this);
	}
	template <typename R = void> R AddActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x13969E0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x1396B30))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveActiveCondition() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1396C80))(this);
	}
	template <typename R = bool> R get_isClick() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1396C8C))(this);
	}
	template <typename R = void> R set_isClick(bool value) {
		return ((R (*)(RecipeEntity*, bool))(Il2CppBase() + 0x1396C98))(this, value);
	}
	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1396DB0))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1396E38))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(RecipeEntity*, int32_t))(Il2CppBase() + 0x1396E44))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(RecipeEntity*, int32_t))(Il2CppBase() + 0x1396F48))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x139704C))(this);
	}
	template <typename R = CraftComponent*> R get_craft() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397058))(this);
	}
	template <typename R = bool> R get_hasCraft() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13970E0))(this);
	}
	template <typename R = void> R AddCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<FuelItem*>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<FuelItem*>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13970EC))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename R = void> R ReplaceCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<FuelItem*>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<FuelItem*>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13972EC))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename R = void> R RemoveCraft() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13974EC))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13974F8))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397580))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x139758C))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13976B4))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13977DC))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13977E8))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397870))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(RecipeEntity*, float))(Il2CppBase() + 0x139787C))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(RecipeEntity*, float))(Il2CppBase() + 0x1397980))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397A84))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397A90))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397B18))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1397B24))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1397C7C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397DD4))(this);
	}
	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397DE0))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1397E68))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(RecipeEntity*, Il2CppString*))(Il2CppBase() + 0x1397E74))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(RecipeEntity*, Il2CppString*))(Il2CppBase() + 0x1397F88))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x139809C))(this);
	}
	template <typename R = PrefabComponent*> R get_prefab() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13980A8))(this);
	}
	template <typename R = bool> R get_hasPrefab() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398130))(this);
	}
	template <typename R = void> R AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x139813C))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(RecipeEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x1398280))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R RemovePrefab() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13983C4))(this);
	}
	template <typename R = RequiredComponent*> R get_required() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13983D0))(this);
	}
	template <typename R = bool> R get_hasRequired() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398458))(this);
	}
	template <typename R = void> R AddRequired(int32_t newLevel) {
		return ((R (*)(RecipeEntity*, int32_t))(Il2CppBase() + 0x1398464))(this, newLevel);
	}
	template <typename R = void> R ReplaceRequired(int32_t newLevel) {
		return ((R (*)(RecipeEntity*, int32_t))(Il2CppBase() + 0x1398568))(this, newLevel);
	}
	template <typename R = void> R RemoveRequired() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x139866C))(this);
	}
	template <typename R = RequiredConditionComponent*> R get_requiredCondition() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398678))(this);
	}
	template <typename R = bool> R get_hasRequiredCondition() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398700))(this);
	}
	template <typename R = void> R AddRequiredCondition(Il2CppString* newName) {
		return ((R (*)(RecipeEntity*, Il2CppString*))(Il2CppBase() + 0x139870C))(this, newName);
	}
	template <typename R = void> R ReplaceRequiredCondition(Il2CppString* newName) {
		return ((R (*)(RecipeEntity*, Il2CppString*))(Il2CppBase() + 0x1398820))(this, newName);
	}
	template <typename R = void> R RemoveRequiredCondition() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398934))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398940))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x13989C8))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(RecipeEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x13989D4))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(RecipeEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1398AE8))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398BFC))(this);
	}
	template <typename R = SortingComponent*> R get_sorting() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398C08))(this);
	}
	template <typename R = bool> R get_hasSorting() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398C90))(this);
	}
	template <typename R = void> R AddSorting(SortingType* newValue) {
		return ((R (*)(RecipeEntity*, SortingType*))(Il2CppBase() + 0x1398C9C))(this, newValue);
	}
	template <typename R = void> R ReplaceSorting(SortingType* newValue) {
		return ((R (*)(RecipeEntity*, SortingType*))(Il2CppBase() + 0x1398DA0))(this, newValue);
	}
	template <typename R = void> R RemoveSorting() {
		return ((R (*)(RecipeEntity*))(Il2CppBase() + 0x1398EA4))(this);
	}

};

