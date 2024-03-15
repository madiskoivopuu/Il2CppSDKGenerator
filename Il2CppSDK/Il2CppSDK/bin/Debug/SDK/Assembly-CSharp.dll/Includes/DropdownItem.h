#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DropdownItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DropdownItem"));
	}

	template <typename R = uintptr_t> R& m_Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& m_Image() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& m_RectTransform() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& m_Toggle() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = uintptr_t> R get_text() {
		return ((R (*)(DropdownItem*))(Il2CppBase() + 0xE9DB94))(this);
	}
	template <typename R = void> R set_text(uintptr_t value) {
		return ((R (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DB9C))(this, value);
	}
	template <typename R = uintptr_t> R get_image() {
		return ((R (*)(DropdownItem*))(Il2CppBase() + 0xE9DBA4))(this);
	}
	template <typename R = void> R set_image(uintptr_t value) {
		return ((R (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DBAC))(this, value);
	}
	template <typename R = uintptr_t> R get_rectTransform() {
		return ((R (*)(DropdownItem*))(Il2CppBase() + 0xE9DBB4))(this);
	}
	template <typename R = void> R set_rectTransform(uintptr_t value) {
		return ((R (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DBBC))(this, value);
	}
	template <typename R = uintptr_t> R get_toggle() {
		return ((R (*)(DropdownItem*))(Il2CppBase() + 0xE9DBC4))(this);
	}
	template <typename R = void> R set_toggle(uintptr_t value) {
		return ((R (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DBCC))(this, value);
	}
	template <typename R = void> R OnPointerEnter(uintptr_t eventData) {
		return ((R (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DBD4))(this, eventData);
	}
	template <typename R = void> R OnCancel(uintptr_t eventData) {
		return ((R (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DC5C))(this, eventData);
	}

};

