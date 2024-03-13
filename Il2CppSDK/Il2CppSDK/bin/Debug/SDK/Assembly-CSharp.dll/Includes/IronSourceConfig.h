#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceConfig"));
	}

	template <typename T = Il2CppString*> static T& unsupportedPlatformStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IronSourceConfig*> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _androidBridge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& AndroidBridge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = IronSourceConfig*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1250424))(0);
	}
	template <typename T = void> T setLanguage(Il2CppString* language) {
		return ((T (*)(IronSourceConfig*, Il2CppString*))(Il2CppBase() + 0x1250780))(this, language);
	}
	template <typename T = void> T setClientSideCallbacks(bool status) {
		return ((T (*)(IronSourceConfig*, bool))(Il2CppBase() + 0x125088C))(this, status);
	}
	template <typename T = void> T setRewardedVideoCustomParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* rewardedVideoCustomParams) {
		return ((T (*)(IronSourceConfig*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x12509C4))(this, rewardedVideoCustomParams);
	}
	template <typename T = void> T setOfferwallCustomParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* offerwallCustomParams) {
		return ((T (*)(IronSourceConfig*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1250AE4))(this, offerwallCustomParams);
	}

};

