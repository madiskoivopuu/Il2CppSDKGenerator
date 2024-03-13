#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DevToDevAnalytics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DevToDevAnalytics"));
	}

	template <typename T = ICommonLogger*> T& _logger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> static T& AndroidAppId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AndroidAppSecret() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HuaweiAppId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HuaweiAppSecret() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IosAppId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IosAppSecret() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SamsungAppId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SamsungAppSecret() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DevToDevAnalytics*))(Il2CppBase() + 0xEC159C))(this);
	}
	template <typename T = void> T SetUserId(Il2CppString* id) {
		return ((T (*)(DevToDevAnalytics*, Il2CppString*))(Il2CppBase() + 0xEC1634))(this, id);
	}
	template <typename T = Il2CppString*> T GetDeviceId() {
		return ((T (*)(DevToDevAnalytics*))(Il2CppBase() + 0xEC1698))(this);
	}
	template <typename T = void> T LogEvent(Il2CppString* eventName, Il2CppString* action, Il2CppString* label, Il2CppString* sublabel, int32_t playerLevel, int64_t value, int64_t valueTwo, bool addDeviceInfo) {
		return ((T (*)(DevToDevAnalytics*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, int64_t, int64_t, bool))(Il2CppBase() + 0xEC16F4))(this, eventName, action, label, sublabel, playerLevel, value, valueTwo, addDeviceInfo);
	}
	template <typename T = void> T AddDeviceParams(uintptr_t eventParams) {
		return ((T (*)(DevToDevAnalytics*, uintptr_t))(Il2CppBase() + 0xEC196C))(this, eventParams);
	}
	template <typename T = void> T LogRealPayment(Il2CppString* transactionId, float price, Il2CppString* name, Il2CppString* currencyCode) {
		return ((T (*)(DevToDevAnalytics*, Il2CppString*, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC1BD4))(this, transactionId, price, name, currencyCode);
	}
	template <typename T = void> T LogLevelUp(int32_t newLevel) {
		return ((T (*)(DevToDevAnalytics*, int32_t))(Il2CppBase() + 0xEC1C60))(this, newLevel);
	}

};

