#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class MessageWithItemsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWithItemsWindow"));
	}

	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _fromHolder() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _arrow() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _toHolder() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _toGridLayoutGroup() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _sliderPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _slider() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _noButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _noButtonText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _yesButton() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _yesButtonText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = ItemForMessage*> R& _defaultItemPrefab() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppArray<DescriptionItemForMessage*>*> R& _descriptions() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 Il2CppList<ItemForMessage*>*& _currentItems() {
		return *(Il2CppList<ItemForMessage*>**)((uintptr_t)this + 0xE8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(MessageWithItemsWindow*))(Il2CppBase() + 0x12CF77C))(this);
	}
	template <typename R = void> R ShowSlider(int32_t minValue, int32_t maxValue, int32_t currentValue) {
		return ((R (*)(MessageWithItemsWindow*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x12CFF38))(this, minValue, maxValue, currentValue);
	}
	template <typename R = void> R OnSliderValueChanged(float value) {
		return ((R (*)(MessageWithItemsWindow*, float))(Il2CppBase() + 0x12D00D8))(this, value);
	}
	template <typename R = void> R OnYesClick() {
		return ((R (*)(MessageWithItemsWindow*))(Il2CppBase() + 0x12D0210))(this);
	}
	template <typename R = void> R InitItem(ItemMessageData messageData, uintptr_t holder) {
		return ((R (*)(MessageWithItemsWindow*, ItemMessageData, uintptr_t))(Il2CppBase() + 0x12CFB70))(this, messageData, holder);
	}
	template <typename R = void> R InitDescription(ItemMessageData messageData, DescriptionType dType) {
		return ((R (*)(MessageWithItemsWindow*, ItemMessageData, DescriptionType))(Il2CppBase() + 0x12CFE10))(this, messageData, dType);
	}
	template <typename R = void> R OnHold(Il2CppString* blueprint, Nullable1<int64_t>* showGhostyEndTime) {
		return ((R (*)(MessageWithItemsWindow*, Il2CppString*, Nullable1<int64_t>*))(Il2CppBase() + 0x12D0328))(this, blueprint, showGhostyEndTime);
	}
	template <typename R = void> R OnRelease() {
		return ((R (*)(MessageWithItemsWindow*))(Il2CppBase() + 0x12D073C))(this);
	}

};

