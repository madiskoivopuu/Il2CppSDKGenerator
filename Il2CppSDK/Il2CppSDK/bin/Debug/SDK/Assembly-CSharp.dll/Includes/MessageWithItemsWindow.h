#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class MessageWithItemsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWithItemsWindow"));
	}

	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _fromHolder() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _arrow() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _toHolder() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _toGridLayoutGroup() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _sliderPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _slider() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _noButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _noButtonText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _yesButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _yesButtonText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = ItemForMessage*> T& _defaultItemPrefab() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _descriptions() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<ItemForMessage*>*> T& _currentItems() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(MessageWithItemsWindow*))(Il2CppBase() + 0x12CF77C))(this);
	}
	template <typename T = void> T ShowSlider(int32_t minValue, int32_t maxValue, int32_t currentValue) {
		return ((T (*)(MessageWithItemsWindow*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x12CFF38))(this, minValue, maxValue, currentValue);
	}
	template <typename T = void> T OnSliderValueChanged(float value) {
		return ((T (*)(MessageWithItemsWindow*, float))(Il2CppBase() + 0x12D00D8))(this, value);
	}
	template <typename T = void> T OnYesClick() {
		return ((T (*)(MessageWithItemsWindow*))(Il2CppBase() + 0x12D0210))(this);
	}
	template <typename T = void> T InitItem(ItemMessageData* messageData, uintptr_t holder) {
		return ((T (*)(MessageWithItemsWindow*, ItemMessageData*, uintptr_t))(Il2CppBase() + 0x12CFB70))(this, messageData, holder);
	}
	template <typename T = void> T InitDescription(ItemMessageData* messageData, DescriptionType* dType) {
		return ((T (*)(MessageWithItemsWindow*, ItemMessageData*, DescriptionType*))(Il2CppBase() + 0x12CFE10))(this, messageData, dType);
	}
	template <typename T = void> T OnHold(Il2CppString* blueprint, Nullable1int64_t>* showGhostyEndTime) {
		return ((T (*)(MessageWithItemsWindow*, Il2CppString*, Nullable1int64_t>*))(Il2CppBase() + 0x12D0328))(this, blueprint, showGhostyEndTime);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(MessageWithItemsWindow*))(Il2CppBase() + 0x12D073C))(this);
	}

};

