#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CreateGuildDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateGuildDialog"));
	}

	template <typename R = uintptr_t> R& NameField() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& NameFieldLimit() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& TagField() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& TagFieldLimit() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& DescriptionField() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& DescriptionFieldLimit() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& LanguageDropdown() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& PrivateTypeToggle() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& PublicTypeToggle() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& ByApplicationTypeToggle() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = StandartButton*> R& CreateButton() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& ClearColor() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& ErrorColor() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = int32_t> R& _selectedLanguageIndex() {
		return *(R*)((uintptr_t)this + 0x100);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(CreateGuildDialog*))(Il2CppBase() + 0x134D9AC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(CreateGuildDialog*))(Il2CppBase() + 0x134DE4C))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(CreateGuildDialog*))(Il2CppBase() + 0x134DEA8))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(CreateGuildDialog*))(Il2CppBase() + 0x134E0A0))(this);
	}
	template <typename R = void> R OnNameFieldValueChanged(Il2CppString* text) {
		return ((R (*)(CreateGuildDialog*, Il2CppString*))(Il2CppBase() + 0x134E11C))(this, text);
	}
	template <typename R = void> R OnTagFieldValueChanged(Il2CppString* text) {
		return ((R (*)(CreateGuildDialog*, Il2CppString*))(Il2CppBase() + 0x134E204))(this, text);
	}
	template <typename R = void> R OnDescriptionFieldValueChanged(Il2CppString* text) {
		return ((R (*)(CreateGuildDialog*, Il2CppString*))(Il2CppBase() + 0x134E318))(this, text);
	}
	template <typename R = void> R OnGuildLanguageValueChanged(int32_t index) {
		return ((R (*)(CreateGuildDialog*, int32_t))(Il2CppBase() + 0x134E400))(this, index);
	}
	template <typename R = void> R OnCreateButtonPressed() {
		return ((R (*)(CreateGuildDialog*))(Il2CppBase() + 0x134E600))(this);
	}
	template <typename R = void> R OnCreateGuildResponse(ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(CreateGuildDialog*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x134EE7C))(this, errorCode);
	}

};

