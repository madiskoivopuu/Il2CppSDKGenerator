#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineUI {

class ExtendedDropdown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngineUI", "ExtendedDropdown"));
	}

	template <typename R = uintptr_t> R& m_Template() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& m_CaptionText() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& m_CaptionImage() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& m_ItemText() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& m_ItemImage() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = int32_t> R& m_Value() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = float> R& m_AlphaFadeSpeed() {
		return *(R*)((uintptr_t)this + 0x124);
	}
	template <typename R = OptionDataList*> R& m_Options() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = DropdownEvent*> R& m_OnValueChanged() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& m_Dropdown() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& m_Blocker() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	 Il2CppList<DropdownItem*>*& m_Items() {
		return *(Il2CppList<DropdownItem*>**)((uintptr_t)this + 0x148);
	}
	 TweenRunner1<Stabs::FloatTween>*& m_AlphaTweenRunner() {
		return *(TweenRunner1<Stabs::FloatTween>**)((uintptr_t)this + 0x150);
	}
	template <typename R = bool> R& validTemplate() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = OptionData*> static R& s_NoOptionData() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = uintptr_t> R get_template() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x16879B0))(this);
	}
	template <typename R = void> R set_template(uintptr_t value) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x16879B8))(this, value);
	}
	template <typename R = uintptr_t> R get_captionText() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687BEC))(this);
	}
	template <typename R = void> R set_captionText(uintptr_t value) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1687BF4))(this, value);
	}
	template <typename R = uintptr_t> R get_captionImage() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687C20))(this);
	}
	template <typename R = void> R set_captionImage(uintptr_t value) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1687C28))(this, value);
	}
	template <typename R = uintptr_t> R get_itemText() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687C54))(this);
	}
	template <typename R = void> R set_itemText(uintptr_t value) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1687C5C))(this, value);
	}
	template <typename R = uintptr_t> R get_itemImage() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687C88))(this);
	}
	template <typename R = void> R set_itemImage(uintptr_t value) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1687C90))(this, value);
	}
	 Il2CppList<OptionData*>* get_options() {
		return ((Il2CppList<OptionData*>* (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687CBC))(this);
	}
	template <typename R = void> R set_options(Il2CppList<OptionData*>* value) {
		return ((R (*)(ExtendedDropdown*, Il2CppList<OptionData*>*))(Il2CppBase() + 0x1687CD8))(this, value);
	}
	template <typename R = DropdownEvent*> R get_onValueChanged() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687D0C))(this);
	}
	template <typename R = void> R set_onValueChanged(DropdownEvent* value) {
		return ((R (*)(ExtendedDropdown*, DropdownEvent*))(Il2CppBase() + 0x1687D14))(this, value);
	}
	template <typename R = float> R get_alphaFadeSpeed() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687D24))(this);
	}
	template <typename R = void> R set_alphaFadeSpeed(float value) {
		return ((R (*)(ExtendedDropdown*, float))(Il2CppBase() + 0x1687D2C))(this, value);
	}
	template <typename R = int32_t> R get_value() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687D34))(this);
	}
	template <typename R = void> R set_value(int32_t value) {
		return ((R (*)(ExtendedDropdown*, int32_t))(Il2CppBase() + 0x1687D3C))(this, value);
	}
	template <typename R = void> R SetValueWithoutNotify(int32_t input) {
		return ((R (*)(ExtendedDropdown*, int32_t))(Il2CppBase() + 0x1687E58))(this, input);
	}
	template <typename R = void> R Set(int32_t value, bool sendCallback) {
		return ((R (*)(ExtendedDropdown*, int32_t, bool))(Il2CppBase() + 0x1687D44))(this, value, sendCallback);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687F8C))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1688110))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1688138))(this);
	}
	template <typename R = void> R RefreshShownValue() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x16879E0))(this);
	}
	template <typename R = void> R AddOptions(Il2CppList<OptionData*>* options) {
		return ((R (*)(ExtendedDropdown*, Il2CppList<OptionData*>*))(Il2CppBase() + 0x1688380))(this, options);
	}
	template <typename R = void> R AddOptions_1(Il2CppList<Il2CppString*>* options) {
		return ((R (*)(ExtendedDropdown*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x16883F4))(this, options);
	}
	template <typename R = void> R AddOptions_2(Il2CppList<uintptr_t>* options) {
		return ((R (*)(ExtendedDropdown*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1688500))(this, options);
	}
	template <typename R = void> R ClearOptions() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x168860C))(this);
	}
	template <typename R = void> R SetupTemplate() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1688674))(this);
	}
	 static uintptr_t GetOrAddComponent(uintptr_t go) {
		return ((uintptr_t (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, go);
	}
	template <typename R = void> R OnPointerClick(uintptr_t eventData) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1688DB8))(this, eventData);
	}
	template <typename R = void> R OnSubmit(uintptr_t eventData) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1689ACC))(this, eventData);
	}
	template <typename R = void> R OnCancel(uintptr_t eventData) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1689AD0))(this, eventData);
	}
	template <typename R = void> R Show() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1688DBC))(this);
	}
	template <typename R = uintptr_t> R CreateBlocker(uintptr_t rootCanvas) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A00C))(this, rootCanvas);
	}
	template <typename R = void> R DestroyBlocker(uintptr_t blocker) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A484))(this, blocker);
	}
	template <typename R = uintptr_t> R CreateDropdownList(uintptr_t template) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A4E8))(this, template);
	}
	template <typename R = void> R DestroyDropdownList(uintptr_t dropdownList) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A560))(this, dropdownList);
	}
	template <typename R = DropdownItem*> R CreateItem(DropdownItem* itemTemplate) {
		return ((R (*)(ExtendedDropdown*, DropdownItem*))(Il2CppBase() + 0x168A5C4))(this, itemTemplate);
	}
	template <typename R = void> R DestroyItem(DropdownItem* item) {
		return ((R (*)(ExtendedDropdown*, DropdownItem*))(Il2CppBase() + 0x168A63C))(this, item);
	}
	template <typename R = DropdownItem*> R AddItem(OptionData* data, bool selected, DropdownItem* itemTemplate, Il2CppList<DropdownItem*>* items) {
		return ((R (*)(ExtendedDropdown*, OptionData*, bool, DropdownItem*, Il2CppList<DropdownItem*>*))(Il2CppBase() + 0x1689BFC))(this, data, selected, itemTemplate, items);
	}
	template <typename R = void> R AlphaFadeList(float duration, float alpha) {
		return ((R (*)(ExtendedDropdown*, float, float))(Il2CppBase() + 0x168A640))(this, duration, alpha);
	}
	template <typename R = void> R AlphaFadeList_1(float duration, float start, float end) {
		return ((R (*)(ExtendedDropdown*, float, float, float))(Il2CppBase() + 0x1689ED0))(this, duration, start, end);
	}
	template <typename R = void> R SetAlpha(float alpha) {
		return ((R (*)(ExtendedDropdown*, float))(Il2CppBase() + 0x168A6C4))(this, alpha);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x1689AD4))(this);
	}
	template <typename R = uintptr_t> R DelayedDestroyDropdownList(float delay) {
		return ((R (*)(ExtendedDropdown*, float))(Il2CppBase() + 0x168A784))(this, delay);
	}
	template <typename R = void> R ImmediateDestroyDropdownList() {
		return ((R (*)(ExtendedDropdown*))(Il2CppBase() + 0x16881F0))(this);
	}
	template <typename R = void> R OnSelectItem(uintptr_t toggle) {
		return ((R (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A80C))(this, toggle);
	}

};

}
