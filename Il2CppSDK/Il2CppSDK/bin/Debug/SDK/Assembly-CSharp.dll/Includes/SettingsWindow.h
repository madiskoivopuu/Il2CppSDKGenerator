#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SettingsWindow : public UIWindow1<SettingsWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsWindow"));
	}

	template <typename T = float> static T& SHOW_TEXT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SHIFT_TEXT_Y() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& LanguageDropdown() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& QualityDropdown() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& MSAADropdown() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ResolutionDropdown() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& VolumeMusic() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& DisabledMusicIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& VolumeSound() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& DisabledSoundIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CameraZoom() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CurrentSelectedServerText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ChangeServerButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = StandartButton*> T& ConnectToKefirButton() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& RulesButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& PrivacyButton() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& NotificationsButton() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& FacebookButton() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& DiscordButton() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& TwitterButton() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& VkButton() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& GooglePlayConnectButton() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& SupportButton() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& ShareButton() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& GooglePlayConnectButtonText() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& GooglePlayConnectButtonImage() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& UserIdText() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& NotificationButtonText() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& UserIdButton() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& TooltipTransform() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& FPSToggle() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ReportButton() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = CameraHelper*> T& _cachedCameraHelper() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _coroutine() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& _detectedQualityLevel() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& _qualityLevelToChange() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& _isOnShowChanges() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& _isOnLanguegeChanges() {
		return *(T*)((uintptr_t)this + 0x189);
	}
	template <typename T = ICommonLogger*> T& _logger() {
		return *(T*)((uintptr_t)this + 0x190);
	}

	template <typename T = CameraHelper*> T get_CameraHelper() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x1626600))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x16267D0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x1628868))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(SettingsWindow*, float))(Il2CppBase() + 0x1628944))(this, deltaTime);
	}
	template <typename T = void> T OnLanguageChanged() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x1628A8C))(this);
	}
	template <typename T = void> T OnShareClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x1628E94))(this);
	}
	template <typename T = void> T OnLanguageSelected(int32_t value) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1628F30))(this, value);
	}
	template <typename T = void> T OnMSAASelected(int32_t value) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1629984))(this, value);
	}
	template <typename T = void> T OnResolutionSelected(int32_t value) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x162998C))(this, value);
	}
	template <typename T = void> T CheckDeviceForQualityLevel(int32_t value) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1629AFC))(this, value);
	}
	template <typename T = void> T OnChoiseMade(int32_t value) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1629F68))(this, value);
	}
	template <typename T = void> T OnQualitySelected(int32_t value) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x1628334))(this, value);
	}
	template <typename T = void> T OnVolumeMusicChanged(float value) {
		return ((T (*)(SettingsWindow*, float))(Il2CppBase() + 0x1629FA4))(this, value);
	}
	template <typename T = void> T OnVolumeSoundChanged(float value) {
		return ((T (*)(SettingsWindow*, float))(Il2CppBase() + 0x162A094))(this, value);
	}
	template <typename T = void> T OnCameraZoomChanged(float value) {
		return ((T (*)(SettingsWindow*, float))(Il2CppBase() + 0x162A184))(this, value);
	}
	template <typename T = void> T OnConnectToKefirButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162A2C0))(this);
	}
	template <typename T = void> T OnRulesButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162A9B8))(this);
	}
	template <typename T = void> T OnChangeServerButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162AB28))(this);
	}
	template <typename T = void> T OnPrivacyButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162ACE0))(this);
	}
	template <typename T = void> T OpenUrl(Il2CppString* url) {
		return ((T (*)(SettingsWindow*, Il2CppString*))(Il2CppBase() + 0x162ADC0))(this, url);
	}
	template <typename T = void> T OnFailure(Il2CppString* error) {
		return ((T (*)(SettingsWindow*, Il2CppString*))(Il2CppBase() + 0x162ADCC))(this, error);
	}
	template <typename T = void> T OnNotificationsButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162AE50))(this);
	}
	template <typename T = void> T OnFacebookButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162AEBC))(this);
	}
	template <typename T = void> T OnDiscordButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162AF34))(this);
	}
	template <typename T = void> T OnTwitterButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162AFC8))(this);
	}
	template <typename T = void> T OnVkButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162B040))(this);
	}
	template <typename T = void> T OnGooglePlayConnectButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162B0B8))(this);
	}
	template <typename T = void> T SignInGooglePlay() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162B850))(this);
	}
	template <typename T = void> T SignOutGooglePlay() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162B36C))(this);
	}
	template <typename T = void> T OnSupportButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162BA8C))(this);
	}
	template <typename T = Il2CppString*> T GetQualityLevelName(int32_t index) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x162C358))(this, index);
	}
	template <typename T = void> T UpdateDisableIcons() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162868C))(this);
	}
	template <typename T = void> T SetNotificationButtonText() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x1628748))(this);
	}
	template <typename T = void> T SetKefirButtonText() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x1627E34))(this);
	}
	template <typename T = Il2CppString*> T GetNotificationButtonText(bool pushEnabled) {
		return ((T (*)(SettingsWindow*, bool))(Il2CppBase() + 0x162C4C8))(this, pushEnabled);
	}
	template <typename T = void> T OnUserIdButtonClick() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162C694))(this);
	}
	template <typename T = void> T UpdateResolutionDropdown() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x16280E4))(this);
	}
	template <typename T = Il2CppString*> T OnShowb__43_0(Il2CppString* n, int32_t index) {
		return ((T (*)(SettingsWindow*, Il2CppString*, int32_t))(Il2CppBase() + 0x162C9F4))(this, n, index);
	}
	template <typename T = void> T OnShowb__43_1(bool value) {
		return ((T (*)(SettingsWindow*, bool))(Il2CppBase() + 0x162C9FC))(this, value);
	}
	template <typename T = void> T OnShowb__43_3(int32_t btnIndex) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x162CE14))(this, btnIndex);
	}
	template <typename T = void> T OnShowb__43_2() {
		return ((T (*)(SettingsWindow*))(Il2CppBase() + 0x162CE54))(this);
	}
	template <typename T = Il2CppString*> T OnLanguageSelectedb__48_0(Il2CppString* n, int32_t index) {
		return ((T (*)(SettingsWindow*, Il2CppString*, int32_t))(Il2CppBase() + 0x162CE70))(this, n, index);
	}
	template <typename T = void> T SignInGooglePlayb__69_0(bool success) {
		return ((T (*)(SettingsWindow*, bool))(Il2CppBase() + 0x162CE78))(this, success);
	}
	template <typename T = void> T SignOutGooglePlayb__70_0(int32_t i) {
		return ((T (*)(SettingsWindow*, int32_t))(Il2CppBase() + 0x162D318))(this, i);
	}

};

