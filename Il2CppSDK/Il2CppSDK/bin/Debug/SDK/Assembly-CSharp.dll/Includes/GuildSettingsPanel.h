#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildSettingsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildSettingsPanel"));
	}

	template <typename R = uintptr_t> R& NameField() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& NameFieldCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& TagField() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& TagFieldCount() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& DescriptionField() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& DescriptionFieldCount() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& LanguageDropdown() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& PrivateTypeToggle() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& PublicTypeToggle() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& ByApplicationTypeToggle() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& Server() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& UpdateGuildPrice() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = StandartButton*> R& SaveGuildButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& DisbandGuildButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ClearColor() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& ErrorColor() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppString*> R& _existedName() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppString*> R& _existedTag() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R Bind(UIWindow* window) {
		return ((R (*)(GuildSettingsPanel*, UIWindow*))(Il2CppBase() + 0x1941904))(this, window);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildSettingsPanel*))(Il2CppBase() + 0x1941E2C))(this);
	}
	template <typename R = void> R OnTagValueChanged(Il2CppString* text) {
		return ((R (*)(GuildSettingsPanel*, Il2CppString*))(Il2CppBase() + 0x1941FB4))(this, text);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildSettingsPanel*))(Il2CppBase() + 0x1941FF4))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(GuildSettingsPanel*, float))(Il2CppBase() + 0x1942060))(this, deltaTime);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(GuildSettingsPanel*))(Il2CppBase() + 0x19419CC))(this);
	}
	template <typename R = bool> R CheckFieldValue(uintptr_t inputField, Il2CppString* defaultValue, Func2<Il2CppString*, ValueTuple2<Il2CppString*, NameError>*>* checkFunk) {
		return ((R (*)(GuildSettingsPanel*, uintptr_t, Il2CppString*, Func2<Il2CppString*, ValueTuple2<Il2CppString*, NameError>*>*))(Il2CppBase() + 0x1942724))(this, inputField, defaultValue, checkFunk);
	}
	template <typename R = void> R OnDisbandGuildButtonPressed() {
		return ((R (*)(GuildSettingsPanel*))(Il2CppBase() + 0x1942878))(this);
	}
	template <typename R = void> R OnSaveGuildButtonPressed() {
		return ((R (*)(GuildSettingsPanel*))(Il2CppBase() + 0x1942D44))(this);
	}
	template <typename R = void> R OnUpdateGuildResponse(ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(GuildSettingsPanel*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x19432A4))(this, errorCode);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildSettingsPanel*))(Il2CppBase() + 0x19437BC))(this);
	}

};

