#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceMediationSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceMediationSettings"));
	}

	template <typename T = Il2CppString*> static T& IRONSOURCE_SETTINGS_ASSET_PATH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& AndroidAppKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& IOSAppKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& EnableIronsourceSDKInitAPI() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& AddIronsourceSkadnetworkID() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& DeclareAD_IDPermission() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& EnableAdapterDebug() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = bool> T& EnableIntegrationHelper() {
		return *(T*)((uintptr_t)this + 0x2C);
	}


};

