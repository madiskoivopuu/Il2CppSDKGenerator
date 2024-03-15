#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DevToDevAnalytics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DevToDevAnalytics"));
	}

	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> static R& AndroidAppId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& AndroidAppSecret() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& HuaweiAppId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& HuaweiAppSecret() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& IosAppId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& IosAppSecret() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SamsungAppId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SamsungAppSecret() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Init() {
		return ((R (*)(DevToDevAnalytics*))(Il2CppBase() + 0xEC159C))(this);
	}
	template <typename R = void> R SetUserId(Il2CppString* id) {
		return ((R (*)(DevToDevAnalytics*, Il2CppString*))(Il2CppBase() + 0xEC1634))(this, id);
	}
	template <typename R = Il2CppString*> R GetDeviceId() {
		return ((R (*)(DevToDevAnalytics*))(Il2CppBase() + 0xEC1698))(this);
	}
	template <typename R = void> R LogEvent(Il2CppString* eventName, Il2CppString* action, Il2CppString* label, Il2CppString* sublabel, int32_t playerLevel, int64_t value, int64_t valueTwo, bool addDeviceInfo) {
		return ((R (*)(DevToDevAnalytics*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, int64_t, int64_t, bool))(Il2CppBase() + 0xEC16F4))(this, eventName, action, label, sublabel, playerLevel, value, valueTwo, addDeviceInfo);
	}
	template <typename R = void> R AddDeviceParams(uintptr_t eventParams) {
		return ((R (*)(DevToDevAnalytics*, uintptr_t))(Il2CppBase() + 0xEC196C))(this, eventParams);
	}
	template <typename R = void> R LogRealPayment(Il2CppString* transactionId, float price, Il2CppString* name, Il2CppString* currencyCode) {
		return ((R (*)(DevToDevAnalytics*, Il2CppString*, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEC1BD4))(this, transactionId, price, name, currencyCode);
	}
	template <typename R = void> R LogLevelUp(int32_t newLevel) {
		return ((R (*)(DevToDevAnalytics*, int32_t))(Il2CppBase() + 0xEC1C60))(this, newLevel);
	}

};

