#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildSettingsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildSettingsPanel"));
	}

	template <typename T = uintptr_t> T& NameField() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NameFieldCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TagField() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TagFieldCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& DescriptionField() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& DescriptionFieldCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LanguageDropdown() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& PrivateTypeToggle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& PublicTypeToggle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ByApplicationTypeToggle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& Server() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& UpdateGuildPrice() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& SaveGuildButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& DisbandGuildButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ClearColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ErrorColor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& _existedName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& _existedTag() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(GuildSettingsPanel*, uintptr_t))(Il2CppBase() + 0x1941904))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildSettingsPanel*))(Il2CppBase() + 0x1941E2C))(this);
	}
	template <typename T = void> T OnTagValueChanged(Il2CppString* text) {
		return ((T (*)(GuildSettingsPanel*, Il2CppString*))(Il2CppBase() + 0x1941FB4))(this, text);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildSettingsPanel*))(Il2CppBase() + 0x1941FF4))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildSettingsPanel*, float))(Il2CppBase() + 0x1942060))(this, deltaTime);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(GuildSettingsPanel*))(Il2CppBase() + 0x19419CC))(this);
	}
	template <typename T = bool> T CheckFieldValue(uintptr_t inputField, Il2CppString* defaultValue, void* checkFunk) {
		return ((T (*)(GuildSettingsPanel*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x1942724))(this, inputField, defaultValue, checkFunk);
	}
	template <typename T = void> T OnDisbandGuildButtonPressed() {
		return ((T (*)(GuildSettingsPanel*))(Il2CppBase() + 0x1942878))(this);
	}
	template <typename T = void> T OnSaveGuildButtonPressed() {
		return ((T (*)(GuildSettingsPanel*))(Il2CppBase() + 0x1942D44))(this);
	}
	template <typename T = void> T OnUpdateGuildResponse(uintptr_t errorCode) {
		return ((T (*)(GuildSettingsPanel*, uintptr_t))(Il2CppBase() + 0x19432A4))(this, errorCode);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildSettingsPanel*))(Il2CppBase() + 0x19437BC))(this);
	}

};

}
