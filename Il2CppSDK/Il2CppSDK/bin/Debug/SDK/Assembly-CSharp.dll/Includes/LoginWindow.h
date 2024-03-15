#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LoginWindow : public UIWindow1<LoginWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginWindow"));
	}

	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& DeviceIdInput() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& GoogleIdInput() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& GamecenterIdInput() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ReferralIdInput() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& LoginButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& LastDeviceIdDropdown() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& ServerDropdown() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& RegionDropdown() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& UseRouterToggle() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& UsePersonalIPToggle() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& PersonalIPInput() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& UseLastIdByDefaultToggle() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& CreateBotToggle() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& SetPhoneCreds() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = Config*> R& _config() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = RegionInfo*> R& _region() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = Il2CppString*> R& _googleId() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = Il2CppString*> R& _gamecenterId() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	 Action2<PlatformAuthData, LoginClientInfo>*& OnPlatformAuthenticated() {
		return *(Action2<PlatformAuthData, LoginClientInfo>**)((uintptr_t)this + 0x110);
	}

	template <typename R = ICommonLogger*> R get__logger() {
		return ((R (*)(LoginWindow*))(Il2CppBase() + 0x1730280))(this);
	}
	template <typename R = void> R add_OnPlatformAuthenticated(Action2<PlatformAuthData, LoginClientInfo>* value) {
		return ((R (*)(LoginWindow*, Action2<PlatformAuthData, LoginClientInfo>*))(Il2CppBase() + 0x17302CC))(this, value);
	}
	template <typename R = void> R remove_OnPlatformAuthenticated(Action2<PlatformAuthData, LoginClientInfo>* value) {
		return ((R (*)(LoginWindow*, Action2<PlatformAuthData, LoginClientInfo>*))(Il2CppBase() + 0x1730370))(this, value);
	}
	template <typename R = LoginClientInfo> static R get__clientInfo() {
		return ((R (*)(void *))(Il2CppBase() + 0x1730414))(0);
	}
	template <typename R = bool> R IsEmulatedLogin() {
		return ((R (*)(LoginWindow*))(Il2CppBase() + 0x17305AC))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(LoginWindow*))(Il2CppBase() + 0x173090C))(this);
	}
	template <typename R = uintptr_t> R LoginAndroidCoroutine() {
		return ((R (*)(LoginWindow*))(Il2CppBase() + 0x173096C))(this);
	}
	template <typename R = void> R LoginAndroid() {
		return ((R (*)(LoginWindow*))(Il2CppBase() + 0x17309E4))(this);
	}
	template <typename R = void> R LoginUser(Il2CppString* loginId, Il2CppString* googleId, Il2CppString* referallID) {
		return ((R (*)(LoginWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x173071C))(this, loginId, googleId, referallID);
	}
	template <typename R = void> R LoginAndroidb__30_0(bool success, Il2CppString* data) {
		return ((R (*)(LoginWindow*, bool, Il2CppString*))(Il2CppBase() + 0x17311C0))(this, success, data);
	}
	template <typename R = void> R LoginAndroidb__30_1(Task1<uintptr_t>* task) {
		return ((R (*)(LoginWindow*, Task1<uintptr_t>*))(Il2CppBase() + 0x17317BC))(this, task);
	}

};

