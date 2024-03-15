#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationModeButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationModeButton"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _background() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _text() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _normalBgColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _selectedBgColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _normalTextColor() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _selectedTextColor() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _normalIconColor() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _selectedIconColor() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = LocationMode*> R& Mode() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppString*> R& PointName() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = bool> R& _selected() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	 Action1LocationModeButton*>*& ClickEvent() {
		return *(Action1LocationModeButton*>**)((uintptr_t)this + 0xB0);
	}

	template <typename R = LocationMode*> R get_Mode() {
		return ((R (*)(LocationModeButton*))(Il2CppBase() + 0x17BA38C))(this);
	}
	template <typename R = void> R set_Mode(LocationMode* value) {
		return ((R (*)(LocationModeButton*, LocationMode*))(Il2CppBase() + 0x17BA394))(this, value);
	}
	template <typename R = Il2CppString*> R get_PointName() {
		return ((R (*)(LocationModeButton*))(Il2CppBase() + 0x17BA39C))(this);
	}
	template <typename R = void> R set_PointName(Il2CppString* value) {
		return ((R (*)(LocationModeButton*, Il2CppString*))(Il2CppBase() + 0x17BA3A4))(this, value);
	}
	template <typename R = LocationEntity*> R GetLocation() {
		return ((R (*)(LocationModeButton*))(Il2CppBase() + 0x17A4F48))(this);
	}
	template <typename R = bool> R get_IsSelected() {
		return ((R (*)(LocationModeButton*))(Il2CppBase() + 0x17BA3AC))(this);
	}
	template <typename R = void> R set_IsSelected(bool value) {
		return ((R (*)(LocationModeButton*, bool))(Il2CppBase() + 0x17A5044))(this, value);
	}
	template <typename R = void> R SetSelected(bool value) {
		return ((R (*)(LocationModeButton*, bool))(Il2CppBase() + 0x17BA3B4))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1LocationModeButton*>* value) {
		return ((R (*)(LocationModeButton*, Action1LocationModeButton*>*))(Il2CppBase() + 0x17A105C))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1LocationModeButton*>* value) {
		return ((R (*)(LocationModeButton*, Action1LocationModeButton*>*))(Il2CppBase() + 0x17BA4D8))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(LocationModeButton*))(Il2CppBase() + 0x17BA578))(this);
	}
	template <typename R = void> R Init(LocationEntity* locationEntity) {
		return ((R (*)(LocationModeButton*, LocationEntity*))(Il2CppBase() + 0x17A18F0))(this, locationEntity);
	}
	template <typename R = void> R Awakeb__27_0() {
		return ((R (*)(LocationModeButton*))(Il2CppBase() + 0x17BA698))(this);
	}

};

