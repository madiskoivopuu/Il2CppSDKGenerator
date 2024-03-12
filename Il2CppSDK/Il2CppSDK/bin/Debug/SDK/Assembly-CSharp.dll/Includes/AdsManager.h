#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdsManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& _androidAppKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _logger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LocalAdState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsAdLoaded() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _onRewardedShowComplete() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _onRewardedShowFailed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _isInitialized() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _adsActor() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _musicVolume() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _soundVolume() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x12980AC))(0);
	}
	template <typename T = uintptr_t> T get_LocalAdState() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12981A4))(this);
	}
	template <typename T = void> T set_LocalAdState(uintptr_t value) {
		return ((T (*)(AdsManager*, uintptr_t))(Il2CppBase() + 0x12981AC))(this, value);
	}
	template <typename T = bool> T get_IsAdLoaded() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12981B4))(this);
	}
	template <typename T = void> T set_IsAdLoaded(bool value) {
		return ((T (*)(AdsManager*, bool))(Il2CppBase() + 0x12981BC))(this, value);
	}
	template <typename T = bool> T get_IsInitialized() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12981C8))(this);
	}
	template <typename T = Il2CppString*> T get__appKey() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x1298234))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x129823C))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12983B8))(this);
	}
	template <typename T = void> T InitializationComplete() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x1298598))(this);
	}
	template <typename T = void> T ShowAd(uintptr_t adsActor, uintptr_t onComplete, uintptr_t onFailed) {
		return ((T (*)(AdsManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1298A38))(this, adsActor, onComplete, onFailed);
	}
	template <typename T = void> T ShowLoadedAd() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x1298CE0))(this);
	}
	template <typename T = void> T OnShowCanceled() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12990A0))(this);
	}
	template <typename T = void> T OnTimeOut() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12990A8))(this);
	}
	template <typename T = void> T LoadAd() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x1298F28))(this);
	}
	template <typename T = void> T WaitAndLoadAd() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x1299208))(this);
	}
	template <typename T = void> T AdLoaded() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12992AC))(this);
	}
	template <typename T = void> T AdFailedLoad(uintptr_t obj) {
		return ((T (*)(AdsManager*, uintptr_t))(Il2CppBase() + 0x129932C))(this, obj);
	}
	template <typename T = void> T UserRewarded(uintptr_t obj) {
		return ((T (*)(AdsManager*, uintptr_t))(Il2CppBase() + 0x1299710))(this, obj);
	}
	template <typename T = void> T AdShown() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12998F8))(this);
	}
	template <typename T = void> T AdClosed() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x129995C))(this);
	}
	template <typename T = void> T AdFailedShow(uintptr_t obj) {
		return ((T (*)(AdsManager*, uintptr_t))(Il2CppBase() + 0x1299A20))(this, obj);
	}
	template <typename T = uintptr_t> T WaitAndLoadAdCoroutine() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x1299234))(this);
	}
	template <typename T = void> T MuteSound() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x1298FE8))(this);
	}
	template <typename T = void> T UnmuteSound() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x12999CC))(this);
	}
	template <typename T = void> T OnApplicationPause(bool isPaused) {
		return ((T (*)(AdsManager*, bool))(Il2CppBase() + 0x1299BE4))(this, isPaused);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AdsManager*))(Il2CppBase() + 0x1299C58))(this);
	}

};

}
