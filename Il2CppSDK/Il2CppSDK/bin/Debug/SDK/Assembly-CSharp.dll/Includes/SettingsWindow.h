#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SettingsWindow : public UIWindow1<SettingsWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsWindow"));
	}

	template <typename R = float> static R& SHOW_TEXT_TIME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& SHIFT_TEXT_Y() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& LanguageDropdown() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& QualityDropdown() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& MSAADropdown() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ResolutionDropdown() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& VolumeMusic() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& DisabledMusicIcon() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& VolumeSound() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& DisabledSoundIcon() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& CameraZoom() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& CurrentSelectedServerText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& ChangeServerButton() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = StandartButton*> R& ConnectToKefirButton() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& RulesButton() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& PrivacyButton() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& NotificationsButton() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& FacebookButton() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& DiscordButton() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& TwitterButton() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& VkButton() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& GooglePlayConnectButton() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& SupportButton() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& ShareButton() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& GooglePlayConnectButtonText() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& GooglePlayConnectButtonImage() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& UserIdText() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& NotificationButtonText() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& UserIdButton() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& TooltipTransform() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& FPSToggle() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& ReportButton() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = CameraHelper*> R& _cachedCameraHelper() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& _coroutine() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = int32_t> R& _detectedQualityLevel() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = int32_t> R& _qualityLevelToChange() {
		return *(R*)((uintptr_t)this + 0x184);
	}
	template <typename R = bool> R& _isOnShowChanges() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = bool> R& _isOnLanguegeChanges() {
		return *(R*)((uintptr_t)this + 0x189);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x190);
	}

	template <typename R = CameraHelper*> R get_CameraHelper() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x1626600))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x16267D0))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x1628868))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(SettingsWindow*, float))(Il2CppBase() + 0x1628944))(this, deltaTime);
	}
	template <typename R = void> R OnLanguageChanged() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x1628A8C))(this);
	}
	template <typename R = void> R OnShareClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x1628E94))(this);
	}
	template <typename R = void> R OnLanguageSelected(int32_t value) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1628F30))(this, value);
	}
	template <typename R = void> R OnMSAASelected(int32_t value) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1629984))(this, value);
	}
	template <typename R = void> R OnResolutionSelected(int32_t value) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x162998C))(this, value);
	}
	template <typename R = void> R CheckDeviceForQualityLevel(int32_t value) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1629AFC))(this, value);
	}
	template <typename R = void> R OnChoiseMade(int32_t value) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1629F68))(this, value);
	}
	template <typename R = void> R OnQualitySelected(int32_t value) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1628334))(this, value);
	}
	template <typename R = void> R OnVolumeMusicChanged(float value) {
		return ((R (*)(SettingsWindow*, float))(Il2CppBase() + 0x1629FA4))(this, value);
	}
	template <typename R = void> R OnVolumeSoundChanged(float value) {
		return ((R (*)(SettingsWindow*, float))(Il2CppBase() + 0x162A094))(this, value);
	}
	template <typename R = void> R OnCameraZoomChanged(float value) {
		return ((R (*)(SettingsWindow*, float))(Il2CppBase() + 0x162A184))(this, value);
	}
	template <typename R = void> R OnConnectToKefirButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162A2C0))(this);
	}
	template <typename R = void> R OnRulesButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162A9B8))(this);
	}
	template <typename R = void> R OnChangeServerButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162AB28))(this);
	}
	template <typename R = void> R OnPrivacyButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162ACE0))(this);
	}
	template <typename R = void> R OpenUrl(Il2CppString* url) {
		return ((R (*)(SettingsWindow*, Il2CppString*))(Il2CppBase() + 0x162ADC0))(this, url);
	}
	template <typename R = void> R OnFailure(Il2CppString* error) {
		return ((R (*)(SettingsWindow*, Il2CppString*))(Il2CppBase() + 0x162ADCC))(this, error);
	}
	template <typename R = void> R OnNotificationsButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162AE50))(this);
	}
	template <typename R = void> R OnFacebookButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162AEBC))(this);
	}
	template <typename R = void> R OnDiscordButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162AF34))(this);
	}
	template <typename R = void> R OnTwitterButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162AFC8))(this);
	}
	template <typename R = void> R OnVkButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162B040))(this);
	}
	template <typename R = void> R OnGooglePlayConnectButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162B0B8))(this);
	}
	template <typename R = void> R SignInGooglePlay() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162B850))(this);
	}
	template <typename R = void> R SignOutGooglePlay() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162B36C))(this);
	}
	template <typename R = void> R OnSupportButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162BA8C))(this);
	}
	template <typename R = Il2CppString*> R GetQualityLevelName(int32_t index) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x162C358))(this, index);
	}
	template <typename R = void> R UpdateDisableIcons() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162868C))(this);
	}
	template <typename R = void> R SetNotificationButtonText() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x1628748))(this);
	}
	template <typename R = void> R SetKefirButtonText() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x1627E34))(this);
	}
	template <typename R = Il2CppString*> R GetNotificationButtonText(bool pushEnabled) {
		return ((R (*)(SettingsWindow*, bool))(Il2CppBase() + 0x162C4C8))(this, pushEnabled);
	}
	template <typename R = void> R OnUserIdButtonClick() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162C694))(this);
	}
	template <typename R = void> R UpdateResolutionDropdown() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x16280E4))(this);
	}
	template <typename R = Il2CppString*> R OnShowb__43_0(Il2CppString* n, int32_t index) {
		return ((R (*)(SettingsWindow*, Il2CppString*, int32_t))(Il2CppBase() + 0x162C9F4))(this, n, index);
	}
	template <typename R = void> R OnShowb__43_1(bool value) {
		return ((R (*)(SettingsWindow*, bool))(Il2CppBase() + 0x162C9FC))(this, value);
	}
	template <typename R = void> R OnShowb__43_3(int32_t btnIndex) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x162CE14))(this, btnIndex);
	}
	template <typename R = void> R OnShowb__43_2() {
		return ((R (*)(SettingsWindow*))(Il2CppBase() + 0x162CE54))(this);
	}
	template <typename R = Il2CppString*> R OnLanguageSelectedb__48_0(Il2CppString* n, int32_t index) {
		return ((R (*)(SettingsWindow*, Il2CppString*, int32_t))(Il2CppBase() + 0x162CE70))(this, n, index);
	}
	template <typename R = void> R SignInGooglePlayb__69_0(bool success) {
		return ((R (*)(SettingsWindow*, bool))(Il2CppBase() + 0x162CE78))(this, success);
	}
	template <typename R = void> R SignOutGooglePlayb__70_0(int32_t i) {
		return ((R (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x162D318))(this, i);
	}

};

