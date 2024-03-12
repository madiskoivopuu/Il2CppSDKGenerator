#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class LoginWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginWindow"));
	}

	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& DeviceIdInput() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GoogleIdInput() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& GamecenterIdInput() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ReferralIdInput() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LoginButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LastDeviceIdDropdown() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ServerDropdown() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& RegionDropdown() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& UseRouterToggle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& UsePersonalIPToggle() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& PersonalIPInput() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& UseLastIdByDefaultToggle() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CreateBotToggle() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& SetPhoneCreds() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _config() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _region() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& _googleId() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& _gamecenterId() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = void*> T& OnPlatformAuthenticated() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = uintptr_t> T get__logger() {
		return ((T (*)(LoginWindow*))(Il2CppBase() + 0x1730280))(this);
	}
	template <typename T = void> T add_OnPlatformAuthenticated(void* value) {
		return ((T (*)(LoginWindow*, void*))(Il2CppBase() + 0x17302CC))(this, value);
	}
	template <typename T = void> T remove_OnPlatformAuthenticated(void* value) {
		return ((T (*)(LoginWindow*, void*))(Il2CppBase() + 0x1730370))(this, value);
	}
	template <typename T = uintptr_t> static T get__clientInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x1730414))(0);
	}
	template <typename T = bool> T IsEmulatedLogin() {
		return ((T (*)(LoginWindow*))(Il2CppBase() + 0x17305AC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(LoginWindow*))(Il2CppBase() + 0x173090C))(this);
	}
	template <typename T = uintptr_t> T LoginAndroidCoroutine() {
		return ((T (*)(LoginWindow*))(Il2CppBase() + 0x173096C))(this);
	}
	template <typename T = void> T LoginAndroid() {
		return ((T (*)(LoginWindow*))(Il2CppBase() + 0x17309E4))(this);
	}
	template <typename T = void> T LoginUser(Il2CppString* loginId, Il2CppString* googleId, Il2CppString* referallID) {
		return ((T (*)(LoginWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x173071C))(this, loginId, googleId, referallID);
	}
	template <typename T = void> T LoginAndroidb__30_0(bool success, Il2CppString* data) {
		return ((T (*)(LoginWindow*, bool, Il2CppString*))(Il2CppBase() + 0x17311C0))(this, success, data);
	}
	template <typename T = void> T LoginAndroidb__30_1(void* task) {
		return ((T (*)(LoginWindow*, void*))(Il2CppBase() + 0x17317BC))(this, task);
	}

};

}
