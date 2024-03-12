#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DropdownItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DropdownItem"));
	}

	template <typename T = uintptr_t> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Image() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_RectTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_Toggle() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_text() {
		return ((T (*)(DropdownItem*))(Il2CppBase() + 0xE9DB94))(this);
	}
	template <typename T = void> T set_text(uintptr_t value) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DB9C))(this, value);
	}
	template <typename T = uintptr_t> T get_image() {
		return ((T (*)(DropdownItem*))(Il2CppBase() + 0xE9DBA4))(this);
	}
	template <typename T = void> T set_image(uintptr_t value) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DBAC))(this, value);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(DropdownItem*))(Il2CppBase() + 0xE9DBB4))(this);
	}
	template <typename T = void> T set_rectTransform(uintptr_t value) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DBBC))(this, value);
	}
	template <typename T = uintptr_t> T get_toggle() {
		return ((T (*)(DropdownItem*))(Il2CppBase() + 0xE9DBC4))(this);
	}
	template <typename T = void> T set_toggle(uintptr_t value) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DBCC))(this, value);
	}
	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DBD4))(this, eventData);
	}
	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(DropdownItem*, uintptr_t))(Il2CppBase() + 0xE9DC5C))(this, eventData);
	}

};

}
