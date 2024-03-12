#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class BlueprintsWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintsWindow"));
	}

	template <typename T = uintptr_t> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ScrollCanvasGroup() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CraftButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LevelRequired() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ItemName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ItemDescription() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& PlacedText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ItemIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CraftProgressImage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LearnProgressImage() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BlueprintsContainer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& HeadersImage() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& HeadersText() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& HeadersCategorySeparator() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& HeadersCategory() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& CategoryContainer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CategoryButtons() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& _selectedEntityName() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _selectedBlueprintItem() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& _isSelectedEntityUnlocked() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& _startResourseCount() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& _currentTRStep() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& _requiredTextKey() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& _categoriesInited() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = Il2CppString*> T get_SelectedEntityName() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C46A0))(this);
	}
	template <typename T = bool> T get__isResourcesChanged() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C46A8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C48C4))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C4960))(this);
	}
	template <typename T = void> T SetupCategories(void* categories) {
		return ((T (*)(BlueprintsWindow*, void*))(Il2CppBase() + 0x16C50CC))(this, categories);
	}
	template <typename T = void> T OnCategoryClick(Il2CppString* category) {
		return ((T (*)(BlueprintsWindow*, Il2CppString*))(Il2CppBase() + 0x16C53A0))(this, category);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C5610))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C56A4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C579C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BlueprintsWindow*, float))(Il2CppBase() + 0x16C57F8))(this, deltaTime);
	}
	template <typename T = bool> T OnStartCraftBlueprint() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C5D38))(this);
	}
	template <typename T = void> T OnFinishCraftBlueprint() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C60B8))(this);
	}
	template <typename T = void> T ShowUnlockedBlueprints() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6194))(this);
	}
	template <typename T = uintptr_t> T ShowUnlockedBlueprintsCoroutine(Il2CppArray<uintptr_t>* blueprints) {
		return ((T (*)(BlueprintsWindow*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16C6338))(this, blueprints);
	}
	template <typename T = void> T OnBlueprintSelected(uintptr_t view, uintptr_t entity) {
		return ((T (*)(BlueprintsWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16C63CC))(this, view, entity);
	}
	template <typename T = void> T UpdateCraftButton() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C5924))(this);
	}
	template <typename T = bool> T CanCraft() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6AE0))(this);
	}
	template <typename T = int32_t> T GetNeedResourcesHas() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C46DC))(this);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6C74))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6CE8))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6D5C))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(BlueprintsWindow*))(Il2CppBase() + 0x16C6DD0))(this);
	}

};

}
