#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceInterstitialEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialEvents"));
	}

	template <typename T = void*> static T& onAdReadyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& onAdLoadFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& onAdOpenedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& onAdClosedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& onAdShowSucceededEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& onAdShowFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& onAdClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> T& LevelPlayInterstitialAndroid() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> static T add_onAdReadyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D977C))(0, value);
	}
	template <typename T = void> static T remove_onAdReadyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9838))(0, value);
	}
	template <typename T = void> static T add_onAdLoadFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D98F4))(0, value);
	}
	template <typename T = void> static T remove_onAdLoadFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D99B4))(0, value);
	}
	template <typename T = void> static T add_onAdOpenedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9A74))(0, value);
	}
	template <typename T = void> static T remove_onAdOpenedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9B34))(0, value);
	}
	template <typename T = void> static T add_onAdClosedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9BF4))(0, value);
	}
	template <typename T = void> static T remove_onAdClosedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9CB4))(0, value);
	}
	template <typename T = void> static T add_onAdShowSucceededEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9D74))(0, value);
	}
	template <typename T = void> static T remove_onAdShowSucceededEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9E34))(0, value);
	}
	template <typename T = void> static T add_onAdShowFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9EF4))(0, value);
	}
	template <typename T = void> static T remove_onAdShowFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10D9FB4))(0, value);
	}
	template <typename T = void> static T add_onAdClickedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10DA074))(0, value);
	}
	template <typename T = void> static T remove_onAdClickedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x10DA134))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IronSourceInterstitialEvents*))(Il2CppBase() + 0x10DA1F4))(this);
	}
	template <typename T = void> T registerInterstitialEvents() {
		return ((T (*)(IronSourceInterstitialEvents*))(Il2CppBase() + 0x10DAC28))(this);
	}
	template <typename T = uintptr_t> T getErrorFromErrorObject(uintptr_t descriptionObject) {
		return ((T (*)(IronSourceInterstitialEvents*, uintptr_t))(Il2CppBase() + 0x10DB428))(this, descriptionObject);
	}
	template <typename T = uintptr_t> T getPlacementFromObject(uintptr_t placementObject) {
		return ((T (*)(IronSourceInterstitialEvents*, uintptr_t))(Il2CppBase() + 0x10DB6C4))(this, placementObject);
	}

};

}
