#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationModeButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationModeButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _background() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _text() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _normalBgColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _selectedBgColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _normalTextColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _selectedTextColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _normalIconColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _selectedIconColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = LocationMode*> T& Mode() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& PointName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _selected() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Action1LocationModeButton*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = LocationMode*> T get_Mode() {
		return ((T (*)(LocationModeButton*))(Il2CppBase() + 0x17BA38C))(this);
	}
	template <typename T = void> T set_Mode(LocationMode* value) {
		return ((T (*)(LocationModeButton*, LocationMode*))(Il2CppBase() + 0x17BA394))(this, value);
	}
	template <typename T = Il2CppString*> T get_PointName() {
		return ((T (*)(LocationModeButton*))(Il2CppBase() + 0x17BA39C))(this);
	}
	template <typename T = void> T set_PointName(Il2CppString* value) {
		return ((T (*)(LocationModeButton*, Il2CppString*))(Il2CppBase() + 0x17BA3A4))(this, value);
	}
	template <typename T = LocationEntity*> T GetLocation() {
		return ((T (*)(LocationModeButton*))(Il2CppBase() + 0x17A4F48))(this);
	}
	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(LocationModeButton*))(Il2CppBase() + 0x17BA3AC))(this);
	}
	template <typename T = void> T set_IsSelected(bool value) {
		return ((T (*)(LocationModeButton*, bool))(Il2CppBase() + 0x17A5044))(this, value);
	}
	template <typename T = void> T SetSelected(bool value) {
		return ((T (*)(LocationModeButton*, bool))(Il2CppBase() + 0x17BA3B4))(this, value);
	}
	template <typename T = void> T add_ClickEvent(Action1LocationModeButton*>* value) {
		return ((T (*)(LocationModeButton*, Action1LocationModeButton*>*))(Il2CppBase() + 0x17A105C))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1LocationModeButton*>* value) {
		return ((T (*)(LocationModeButton*, Action1LocationModeButton*>*))(Il2CppBase() + 0x17BA4D8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LocationModeButton*))(Il2CppBase() + 0x17BA578))(this);
	}
	template <typename T = void> T Init(LocationEntity* locationEntity) {
		return ((T (*)(LocationModeButton*, LocationEntity*))(Il2CppBase() + 0x17A18F0))(this, locationEntity);
	}
	template <typename T = void> T Awakeb__27_0() {
		return ((T (*)(LocationModeButton*))(Il2CppBase() + 0x17BA698))(this);
	}

};

