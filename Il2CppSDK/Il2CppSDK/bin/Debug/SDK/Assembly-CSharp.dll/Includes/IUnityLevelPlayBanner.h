#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnityLevelPlayBanner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnityLevelPlayBanner"));
	}


	template <typename T = void> T add_OnAdLoaded(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLoaded(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdLeftApplication(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLeftApplication(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdScreenDismissed(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdScreenDismissed(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdScreenPresented(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdScreenPresented(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdClicked(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdClicked(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAdLoadFailed(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdLoadFailed(void* value) {
		return ((T (*)(IUnityLevelPlayBanner*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
