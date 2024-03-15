#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BlueprintsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintsWindow"));
	}

	template <typename R = JoystickDPad*> R& D_Pad() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ScrollCanvasGroup() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = DelayedButton*> R& CraftButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = TextMonoBehaviour*> R& LevelRequired() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ItemName() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& ItemDescription() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = TextMonoBehaviour*> R& PlacedText() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& ItemIcon() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& CraftProgressImage() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& LearnProgressImage() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = Il2CppArray<BlueprintItemSlotView*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = BlueprintsContainer*> R& BlueprintsContainer() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& HeadersImage() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& HeadersText() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& HeadersCategorySeparator() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& HeadersCategory() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& CategoryContainer() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = Il2CppArray<CategoryButton>*> R& CategoryButtons() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = Il2CppString*> R& _selectedEntityName() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = BlueprintItem*> R& _selectedBlueprintItem() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = bool> R& _isSelectedEntityUnlocked() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = int32_t> R& _startResourseCount() {
		return *(R*)((uintptr_t)this + 0x124);
	}
	template <typename R = TrophyRoadEntity*> R& _currentTRStep() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = Il2CppString*> R& _requiredTextKey() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = bool> R& _categoriesInited() {
		return *(R*)((uintptr_t)this + 0x138);
	}

	template <typename R = Il2CppString*> R get_SelectedEntityName() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C46A0))(this);
	}
	template <typename R = bool> R get__isResourcesChanged() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C46A8))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C48C4))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C4960))(this);
	}
	template <typename R = void> R SetupCategories(HashSet1<Il2CppString*>* categories) {
		return ((R (*)(BlueprintsWindow*, HashSet1<Il2CppString*>*))(Il2CppBase() + 0x16C50CC))(this, categories);
	}
	template <typename R = void> R OnCategoryClick(Il2CppString* category) {
		return ((R (*)(BlueprintsWindow*, Il2CppString*))(Il2CppBase() + 0x16C53A0))(this, category);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C5610))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C56A4))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C579C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BlueprintsWindow*, float))(Il2CppBase() + 0x16C57F8))(this, deltaTime);
	}
	template <typename R = bool> R OnStartCraftBlueprint() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C5D38))(this);
	}
	template <typename R = void> R OnFinishCraftBlueprint() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C60B8))(this);
	}
	template <typename R = void> R ShowUnlockedBlueprints() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6194))(this);
	}
	template <typename R = uintptr_t> R ShowUnlockedBlueprintsCoroutine(Il2CppArray<Il2CppString*>* blueprints) {
		return ((R (*)(BlueprintsWindow*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x16C6338))(this, blueprints);
	}
	template <typename R = void> R OnBlueprintSelected(BlueprintItem* view, BlueprintEntity* entity) {
		return ((R (*)(BlueprintsWindow*, BlueprintItem*, BlueprintEntity*))(Il2CppBase() + 0x16C63CC))(this, view, entity);
	}
	template <typename R = void> R UpdateCraftButton() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C5924))(this);
	}
	template <typename R = bool> R CanCraft() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6AE0))(this);
	}
	template <typename R = int32_t> R GetNeedResourcesHas() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C46DC))(this);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6C74))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6CE8))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6D5C))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6DD0))(this);
	}

};

