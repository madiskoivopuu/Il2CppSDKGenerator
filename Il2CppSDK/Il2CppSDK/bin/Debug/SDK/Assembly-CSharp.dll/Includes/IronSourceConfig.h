#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceConfig"));
	}

	template <typename R = Il2CppString*> static R& unsupportedPlatformStr() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = IronSourceConfig*> static R& _instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& _androidBridge() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppString*> static R& AndroidBridge() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = IronSourceConfig*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x1250424))(0);
	}
	template <typename R = void> R setLanguage(Il2CppString* language) {
		return ((R (*)(IronSourceConfig*, Il2CppString*))(Il2CppBase() + 0x1250780))(this, language);
	}
	template <typename R = void> R setClientSideCallbacks(bool status) {
		return ((R (*)(IronSourceConfig*, bool))(Il2CppBase() + 0x125088C))(this, status);
	}
	template <typename R = void> R setRewardedVideoCustomParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* rewardedVideoCustomParams) {
		return ((R (*)(IronSourceConfig*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x12509C4))(this, rewardedVideoCustomParams);
	}
	template <typename R = void> R setOfferwallCustomParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* offerwallCustomParams) {
		return ((R (*)(IronSourceConfig*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1250AE4))(this, offerwallCustomParams);
	}

};

