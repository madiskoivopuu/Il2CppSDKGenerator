#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class BlueprintsContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintsContainer"));
	}

	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& GridLayout() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = BlueprintItem*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<BlueprintItem*>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = HashSet1Il2CppString*>*> T& Categories() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = HashSet1Il2CppString*>*> T get_Categories() {
		return ((T (*)(BlueprintsContainer*))(Il2CppBase() + 0x16C3560))(this);
	}
	template <typename T = void> T set_Categories(HashSet1Il2CppString*>* value) {
		return ((T (*)(BlueprintsContainer*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x16C3568))(this, value);
	}
	template <typename T = void> T Bind(IUIWindow* window, Action2BlueprintItem*, BlueprintEntity*>* onClicked, GameEntity* avatarEntity, TrophyRoadEntity* currentStep, Il2CppArray<uintptr_t>* notSeenRecipes, TooltipView* tooltipView, Il2CppString* craftType, Il2CppString* initialSelectionName) {
		return ((T (*)(BlueprintsContainer*, IUIWindow*, Action2BlueprintItem*, BlueprintEntity*>*, GameEntity*, TrophyRoadEntity*, Il2CppArray<uintptr_t>*, TooltipView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16C3570))(this, window, onClicked, avatarEntity, currentStep, notSeenRecipes, tooltipView, craftType, initialSelectionName);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BlueprintsContainer*))(Il2CppBase() + 0x16C4014))(this);
	}
	template <typename T = void> T ChangeScrollPosition(BlueprintItem* item) {
		return ((T (*)(BlueprintsContainer*, BlueprintItem*))(Il2CppBase() + 0x16C3E30))(this, item);
	}
	template <typename T = void> T Filter(Il2CppString* category, BlueprintItem* lastSelectedBlueprint) {
		return ((T (*)(BlueprintsContainer*, Il2CppString*, BlueprintItem*))(Il2CppBase() + 0x16C4154))(this, category, lastSelectedBlueprint);
	}

};

