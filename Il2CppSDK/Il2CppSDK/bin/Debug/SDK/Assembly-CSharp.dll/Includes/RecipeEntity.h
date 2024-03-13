#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeEntity"));
	}

	template <typename T = ClickComponent*> static T& clickComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = ActiveConditionComponent*> T get_activeCondition() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x139694C))(this);
	}
	template <typename T = bool> T get_hasActiveCondition() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13969D4))(this);
	}
	template <typename T = void> T AddActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x13969E0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x1396B30))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveActiveCondition() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1396C80))(this);
	}
	template <typename T = bool> T get_isClick() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1396C8C))(this);
	}
	template <typename T = void> T set_isClick(bool value) {
		return ((T (*)(RecipeEntity*, bool))(Il2CppBase() + 0x1396C98))(this, value);
	}
	template <typename T = CountComponent*> T get_count() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1396DB0))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1396E38))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(RecipeEntity*, int32_t))(Il2CppBase() + 0x1396E44))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(RecipeEntity*, int32_t))(Il2CppBase() + 0x1396F48))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x139704C))(this);
	}
	template <typename T = CraftComponent*> T get_craft() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397058))(this);
	}
	template <typename T = bool> T get_hasCraft() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13970E0))(this);
	}
	template <typename T = void> T AddCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<uintptr_t>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13970EC))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename T = void> T ReplaceCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<uintptr_t>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13972EC))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename T = void> T RemoveCraft() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13974EC))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13974F8))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397580))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x139758C))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13976B4))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13977DC))(this);
	}
	template <typename T = DurationComponent*> T get_duration() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13977E8))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397870))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(RecipeEntity*, float))(Il2CppBase() + 0x139787C))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(RecipeEntity*, float))(Il2CppBase() + 0x1397980))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397A84))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397A90))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397B18))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1397B24))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1397C7C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397DD4))(this);
	}
	template <typename T = ItemComponent*> T get_item() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397DE0))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1397E68))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(RecipeEntity*, Il2CppString*))(Il2CppBase() + 0x1397E74))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(RecipeEntity*, Il2CppString*))(Il2CppBase() + 0x1397F88))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x139809C))(this);
	}
	template <typename T = PrefabComponent*> T get_prefab() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13980A8))(this);
	}
	template <typename T = bool> T get_hasPrefab() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398130))(this);
	}
	template <typename T = void> T AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, WorldResourcesType* newResourceType) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppString*, bool, WorldResourcesType*))(Il2CppBase() + 0x139813C))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, WorldResourcesType* newResourceType) {
		return ((T (*)(RecipeEntity*, Il2CppString*, Il2CppString*, bool, WorldResourcesType*))(Il2CppBase() + 0x1398280))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T RemovePrefab() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13983C4))(this);
	}
	template <typename T = RequiredComponent*> T get_required() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13983D0))(this);
	}
	template <typename T = bool> T get_hasRequired() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398458))(this);
	}
	template <typename T = void> T AddRequired(int32_t newLevel) {
		return ((T (*)(RecipeEntity*, int32_t))(Il2CppBase() + 0x1398464))(this, newLevel);
	}
	template <typename T = void> T ReplaceRequired(int32_t newLevel) {
		return ((T (*)(RecipeEntity*, int32_t))(Il2CppBase() + 0x1398568))(this, newLevel);
	}
	template <typename T = void> T RemoveRequired() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x139866C))(this);
	}
	template <typename T = RequiredConditionComponent*> T get_requiredCondition() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398678))(this);
	}
	template <typename T = bool> T get_hasRequiredCondition() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398700))(this);
	}
	template <typename T = void> T AddRequiredCondition(Il2CppString* newName) {
		return ((T (*)(RecipeEntity*, Il2CppString*))(Il2CppBase() + 0x139870C))(this, newName);
	}
	template <typename T = void> T ReplaceRequiredCondition(Il2CppString* newName) {
		return ((T (*)(RecipeEntity*, Il2CppString*))(Il2CppBase() + 0x1398820))(this, newName);
	}
	template <typename T = void> T RemoveRequiredCondition() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398934))(this);
	}
	template <typename T = ResourcesComponent*> T get_resources() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398940))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x13989C8))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(RecipeEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13989D4))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(RecipeEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1398AE8))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398BFC))(this);
	}
	template <typename T = SortingComponent*> T get_sorting() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398C08))(this);
	}
	template <typename T = bool> T get_hasSorting() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398C90))(this);
	}
	template <typename T = void> T AddSorting(SortingType* newValue) {
		return ((T (*)(RecipeEntity*, SortingType*))(Il2CppBase() + 0x1398C9C))(this, newValue);
	}
	template <typename T = void> T ReplaceSorting(SortingType* newValue) {
		return ((T (*)(RecipeEntity*, SortingType*))(Il2CppBase() + 0x1398DA0))(this, newValue);
	}
	template <typename T = void> T RemoveSorting() {
		return ((T (*)(RecipeEntity*))(Il2CppBase() + 0x1398EA4))(this);
	}

};

