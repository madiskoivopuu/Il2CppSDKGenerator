#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class BlueprintsContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintsContainer"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& GridLayout() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = BlueprintItem*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Il2CppList<BlueprintItem*>*& _items() {
		return *(Il2CppList<BlueprintItem*>**)((uintptr_t)this + 0x60);
	}
	 HashSet1Il2CppString*>*& Categories() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x68);
	}

	 HashSet1Il2CppString*>* get_Categories() {
		return ((HashSet1Il2CppString*>* (*)(BlueprintsContainer*))(Il2CppBase() + 0x16C3560))(this);
	}
	template <typename R = void> R set_Categories(HashSet1Il2CppString*>* value) {
		return ((R (*)(BlueprintsContainer*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x16C3568))(this, value);
	}
	template <typename R = void> R Bind(IUIWindow* window, Action2BlueprintItem*, BlueprintEntity*>* onClicked, GameEntity* avatarEntity, TrophyRoadEntity* currentStep, Il2CppArray<Il2CppString*>* notSeenRecipes, TooltipView* tooltipView, Il2CppString* craftType, Il2CppString* initialSelectionName) {
		return ((R (*)(BlueprintsContainer*, IUIWindow*, Action2BlueprintItem*, BlueprintEntity*>*, GameEntity*, TrophyRoadEntity*, Il2CppArray<Il2CppString*>*, TooltipView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16C3570))(this, window, onClicked, avatarEntity, currentStep, notSeenRecipes, tooltipView, craftType, initialSelectionName);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BlueprintsContainer*))(Il2CppBase() + 0x16C4014))(this);
	}
	template <typename R = void> R ChangeScrollPosition(BlueprintItem* item) {
		return ((R (*)(BlueprintsContainer*, BlueprintItem*))(Il2CppBase() + 0x16C3E30))(this, item);
	}
	template <typename R = void> R Filter(Il2CppString* category, BlueprintItem* lastSelectedBlueprint) {
		return ((R (*)(BlueprintsContainer*, Il2CppString*, BlueprintItem*))(Il2CppBase() + 0x16C4154))(this, category, lastSelectedBlueprint);
	}

};

