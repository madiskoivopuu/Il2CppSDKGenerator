#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CreateGuildDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateGuildDialog"));
	}

	template <typename T = uintptr_t> T& NameField() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& NameFieldLimit() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TagField() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TagFieldLimit() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DescriptionField() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& DescriptionFieldLimit() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LanguageDropdown() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& PrivateTypeToggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& PublicTypeToggle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ByApplicationTypeToggle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = StandartButton*> T& CreateButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ClearColor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& ErrorColor() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& _selectedLanguageIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(CreateGuildDialog*))(Il2CppBase() + 0x134D9AC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CreateGuildDialog*))(Il2CppBase() + 0x134DE4C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CreateGuildDialog*))(Il2CppBase() + 0x134DEA8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CreateGuildDialog*))(Il2CppBase() + 0x134E0A0))(this);
	}
	template <typename T = void> T OnNameFieldValueChanged(Il2CppString* text) {
		return ((T (*)(CreateGuildDialog*, Il2CppString*))(Il2CppBase() + 0x134E11C))(this, text);
	}
	template <typename T = void> T OnTagFieldValueChanged(Il2CppString* text) {
		return ((T (*)(CreateGuildDialog*, Il2CppString*))(Il2CppBase() + 0x134E204))(this, text);
	}
	template <typename T = void> T OnDescriptionFieldValueChanged(Il2CppString* text) {
		return ((T (*)(CreateGuildDialog*, Il2CppString*))(Il2CppBase() + 0x134E318))(this, text);
	}
	template <typename T = void> T OnGuildLanguageValueChanged(int32_t index) {
		return ((T (*)(CreateGuildDialog*, int32_t))(Il2CppBase() + 0x134E400))(this, index);
	}
	template <typename T = void> T OnCreateButtonPressed() {
		return ((T (*)(CreateGuildDialog*))(Il2CppBase() + 0x134E600))(this);
	}
	template <typename T = void> T OnCreateGuildResponse(ErrorCodes* errorCode) {
		return ((T (*)(CreateGuildDialog*, ErrorCodes*))(Il2CppBase() + 0x134EE7C))(this, errorCode);
	}

};

