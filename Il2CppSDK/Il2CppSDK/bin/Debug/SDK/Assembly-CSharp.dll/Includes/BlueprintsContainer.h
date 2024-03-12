#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer" 

class BlueprintsContainer: ClickableItemsContainer
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
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& Categories() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void*> T get_Categories() {
		return ((T (*)(BlueprintsContainer*))(Il2CppBase() + 0x16C3560))(this);
	}
	template <typename T = void> T set_Categories(void* value) {
		return ((T (*)(BlueprintsContainer*, void*))(Il2CppBase() + 0x16C3568))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, void* onClicked, uintptr_t avatarEntity, uintptr_t currentStep, Il2CppArray<uintptr_t>* notSeenRecipes, uintptr_t tooltipView, Il2CppString* craftType, Il2CppString* initialSelectionName) {
		return ((T (*)(BlueprintsContainer*, uintptr_t, void*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16C3570))(this, window, onClicked, avatarEntity, currentStep, notSeenRecipes, tooltipView, craftType, initialSelectionName);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BlueprintsContainer*))(Il2CppBase() + 0x16C4014))(this);
	}
	template <typename T = void> T ChangeScrollPosition(uintptr_t item) {
		return ((T (*)(BlueprintsContainer*, uintptr_t))(Il2CppBase() + 0x16C3E30))(this, item);
	}
	template <typename T = void> T Filter(Il2CppString* category, uintptr_t lastSelectedBlueprint) {
		return ((T (*)(BlueprintsContainer*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x16C4154))(this, category, lastSelectedBlueprint);
	}

};

}
