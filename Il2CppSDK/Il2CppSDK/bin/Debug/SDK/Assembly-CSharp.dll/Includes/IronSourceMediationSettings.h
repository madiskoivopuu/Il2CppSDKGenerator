#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceMediationSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceMediationSettings"));
	}

	template <typename R = Il2CppString*> static R& IRONSOURCE_SETTINGS_ASSET_PATH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& AndroidAppKey() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& IOSAppKey() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& EnableIronsourceSDKInitAPI() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& AddIronsourceSkadnetworkID() {
		return *(R*)((uintptr_t)this + 0x29);
	}
	template <typename R = bool> R& DeclareAD_IDPermission() {
		return *(R*)((uintptr_t)this + 0x2A);
	}
	template <typename R = bool> R& EnableAdapterDebug() {
		return *(R*)((uintptr_t)this + 0x2B);
	}
	template <typename R = bool> R& EnableIntegrationHelper() {
		return *(R*)((uintptr_t)this + 0x2C);
	}


};

