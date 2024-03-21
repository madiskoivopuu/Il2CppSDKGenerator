#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/ScriptableObject.h"


class IronSourceMediationSettings : public ScriptableObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceMediationSettings"));
	}

	static Il2CppString*& IRONSOURCE_SETTINGS_ASSET_PATH() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	Il2CppString*& AndroidAppKey() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& IOSAppKey() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	bool& EnableIronsourceSDKInitAPI() {
		return *(bool*)((uintptr_t)this + 0x28);
	}

	bool& AddIronsourceSkadnetworkID() {
		return *(bool*)((uintptr_t)this + 0x29);
	}

	bool& DeclareAD_IDPermission() {
		return *(bool*)((uintptr_t)this + 0x2A);
	}

	bool& EnableAdapterDebug() {
		return *(bool*)((uintptr_t)this + 0x2B);
	}

	bool& EnableIntegrationHelper() {
		return *(bool*)((uintptr_t)this + 0x2C);
	}

};};
