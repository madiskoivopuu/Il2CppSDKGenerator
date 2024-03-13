#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineUI {

class ExtendedDropdown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngineUI", "ExtendedDropdown"));
	}

	template <typename T = uintptr_t> T& m_Template() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_CaptionText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_CaptionImage() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_ItemText() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& m_ItemImage() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& m_Value() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& m_AlphaFadeSpeed() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = OptionDataList*> T& m_Options() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = DropdownEvent*> T& m_OnValueChanged() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& m_Dropdown() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& m_Blocker() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppList<DropdownItem*>*> T& m_Items() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = TweenRunner1FloatTween*>*> T& m_AlphaTweenRunner() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& validTemplate() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = OptionData*> static T& s_NoOptionData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_template() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x16879B0))(this);
	}
	template <typename T = void> T set_template(uintptr_t value) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x16879B8))(this, value);
	}
	template <typename T = uintptr_t> T get_captionText() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687BEC))(this);
	}
	template <typename T = void> T set_captionText(uintptr_t value) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1687BF4))(this, value);
	}
	template <typename T = uintptr_t> T get_captionImage() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687C20))(this);
	}
	template <typename T = void> T set_captionImage(uintptr_t value) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1687C28))(this, value);
	}
	template <typename T = uintptr_t> T get_itemText() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687C54))(this);
	}
	template <typename T = void> T set_itemText(uintptr_t value) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1687C5C))(this, value);
	}
	template <typename T = uintptr_t> T get_itemImage() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687C88))(this);
	}
	template <typename T = void> T set_itemImage(uintptr_t value) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1687C90))(this, value);
	}
	template <typename T = Il2CppList<OptionData*>*> T get_options() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687CBC))(this);
	}
	template <typename T = void> T set_options(Il2CppList<OptionData*>* value) {
		return ((T (*)(ExtendedDropdown*, Il2CppList<OptionData*>*))(Il2CppBase() + 0x1687CD8))(this, value);
	}
	template <typename T = DropdownEvent*> T get_onValueChanged() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687D0C))(this);
	}
	template <typename T = void> T set_onValueChanged(DropdownEvent* value) {
		return ((T (*)(ExtendedDropdown*, DropdownEvent*))(Il2CppBase() + 0x1687D14))(this, value);
	}
	template <typename T = float> T get_alphaFadeSpeed() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687D24))(this);
	}
	template <typename T = void> T set_alphaFadeSpeed(float value) {
		return ((T (*)(ExtendedDropdown*, float))(Il2CppBase() + 0x1687D2C))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687D34))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(ExtendedDropdown*, int32_t))(Il2CppBase() + 0x1687D3C))(this, value);
	}
	template <typename T = void> T SetValueWithoutNotify(int32_t input) {
		return ((T (*)(ExtendedDropdown*, int32_t))(Il2CppBase() + 0x1687E58))(this, input);
	}
	template <typename T = void> T Set(int32_t value, bool sendCallback) {
		return ((T (*)(ExtendedDropdown*, int32_t, bool))(Il2CppBase() + 0x1687D44))(this, value, sendCallback);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1687F8C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1688110))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1688138))(this);
	}
	template <typename T = void> T RefreshShownValue() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x16879E0))(this);
	}
	template <typename T = void> T AddOptions(Il2CppList<OptionData*>* options) {
		return ((T (*)(ExtendedDropdown*, Il2CppList<OptionData*>*))(Il2CppBase() + 0x1688380))(this, options);
	}
	template <typename T = void> T AddOptions_1(Il2CppList<Il2CppString*>* options) {
		return ((T (*)(ExtendedDropdown*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x16883F4))(this, options);
	}
	template <typename T = void> T AddOptions_2(Il2CppList<uintptr_t>* options) {
		return ((T (*)(ExtendedDropdown*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1688500))(this, options);
	}
	template <typename T = void> T ClearOptions() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x168860C))(this);
	}
	template <typename T = void> T SetupTemplate() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1688674))(this);
	}
	template <typename T = uintptr_t> static T GetOrAddComponent(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, go);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1688DB8))(this, eventData);
	}
	template <typename T = void> T OnSubmit(uintptr_t eventData) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1689ACC))(this, eventData);
	}
	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x1689AD0))(this, eventData);
	}
	template <typename T = void> T Show() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1688DBC))(this);
	}
	template <typename T = uintptr_t> T CreateBlocker(uintptr_t rootCanvas) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A00C))(this, rootCanvas);
	}
	template <typename T = void> T DestroyBlocker(uintptr_t blocker) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A484))(this, blocker);
	}
	template <typename T = uintptr_t> T CreateDropdownList(uintptr_t template) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A4E8))(this, template);
	}
	template <typename T = void> T DestroyDropdownList(uintptr_t dropdownList) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A560))(this, dropdownList);
	}
	template <typename T = DropdownItem*> T CreateItem(DropdownItem* itemTemplate) {
		return ((T (*)(ExtendedDropdown*, DropdownItem*))(Il2CppBase() + 0x168A5C4))(this, itemTemplate);
	}
	template <typename T = void> T DestroyItem(DropdownItem* item) {
		return ((T (*)(ExtendedDropdown*, DropdownItem*))(Il2CppBase() + 0x168A63C))(this, item);
	}
	template <typename T = DropdownItem*> T AddItem(OptionData* data, bool selected, DropdownItem* itemTemplate, Il2CppList<DropdownItem*>* items) {
		return ((T (*)(ExtendedDropdown*, OptionData*, bool, DropdownItem*, Il2CppList<DropdownItem*>*))(Il2CppBase() + 0x1689BFC))(this, data, selected, itemTemplate, items);
	}
	template <typename T = void> T AlphaFadeList(float duration, float alpha) {
		return ((T (*)(ExtendedDropdown*, float, float))(Il2CppBase() + 0x168A640))(this, duration, alpha);
	}
	template <typename T = void> T AlphaFadeList_1(float duration, float start, float end) {
		return ((T (*)(ExtendedDropdown*, float, float, float))(Il2CppBase() + 0x1689ED0))(this, duration, start, end);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(ExtendedDropdown*, float))(Il2CppBase() + 0x168A6C4))(this, alpha);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x1689AD4))(this);
	}
	template <typename T = uintptr_t> T DelayedDestroyDropdownList(float delay) {
		return ((T (*)(ExtendedDropdown*, float))(Il2CppBase() + 0x168A784))(this, delay);
	}
	template <typename T = void> T ImmediateDestroyDropdownList() {
		return ((T (*)(ExtendedDropdown*))(Il2CppBase() + 0x16881F0))(this);
	}
	template <typename T = void> T OnSelectItem(uintptr_t toggle) {
		return ((T (*)(ExtendedDropdown*, uintptr_t))(Il2CppBase() + 0x168A80C))(this, toggle);
	}

};

}
