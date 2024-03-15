#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdsManager"));
	}

	template <typename R = AdsManager*> static R& _instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& _androidAppKey() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = LocalAdState> R& LocalAdState() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IsAdLoaded() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = uintptr_t> R& _onRewardedShowComplete() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _onRewardedShowFailed() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _isInitialized() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = AdsActor> R& _adsActor() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& _musicVolume() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _soundVolume() {
		return *(R*)((uintptr_t)this + 0x4C);
	}

	template <typename R = AdsManager*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x12980AC))(0);
	}
	template <typename R = LocalAdState> R get_LocalAdState() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12981A4))(this);
	}
	template <typename R = void> R set_LocalAdState(LocalAdState value) {
		return ((R (*)(AdsManager*, LocalAdState))(Il2CppBase() + 0x12981AC))(this, value);
	}
	template <typename R = bool> R get_IsAdLoaded() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12981B4))(this);
	}
	template <typename R = void> R set_IsAdLoaded(bool value) {
		return ((R (*)(AdsManager*, bool))(Il2CppBase() + 0x12981BC))(this, value);
	}
	template <typename R = bool> R get_IsInitialized() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12981C8))(this);
	}
	template <typename R = Il2CppString*> R get__appKey() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x1298234))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x129823C))(this);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12983B8))(this);
	}
	template <typename R = void> R InitializationComplete() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x1298598))(this);
	}
	template <typename R = void> R ShowAd(AdsActor adsActor, uintptr_t onComplete, uintptr_t onFailed) {
		return ((R (*)(AdsManager*, AdsActor, uintptr_t, uintptr_t))(Il2CppBase() + 0x1298A38))(this, adsActor, onComplete, onFailed);
	}
	template <typename R = void> R ShowLoadedAd() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x1298CE0))(this);
	}
	template <typename R = void> R OnShowCanceled() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12990A0))(this);
	}
	template <typename R = void> R OnTimeOut() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12990A8))(this);
	}
	template <typename R = void> R LoadAd() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x1298F28))(this);
	}
	template <typename R = void> R WaitAndLoadAd() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x1299208))(this);
	}
	template <typename R = void> R AdLoaded() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12992AC))(this);
	}
	template <typename R = void> R AdFailedLoad(IronSourceError* obj) {
		return ((R (*)(AdsManager*, IronSourceError*))(Il2CppBase() + 0x129932C))(this, obj);
	}
	template <typename R = void> R UserRewarded(IronSourcePlacement* obj) {
		return ((R (*)(AdsManager*, IronSourcePlacement*))(Il2CppBase() + 0x1299710))(this, obj);
	}
	template <typename R = void> R AdShown() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12998F8))(this);
	}
	template <typename R = void> R AdClosed() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x129995C))(this);
	}
	template <typename R = void> R AdFailedShow(IronSourceError* obj) {
		return ((R (*)(AdsManager*, IronSourceError*))(Il2CppBase() + 0x1299A20))(this, obj);
	}
	template <typename R = uintptr_t> R WaitAndLoadAdCoroutine() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x1299234))(this);
	}
	template <typename R = void> R MuteSound() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x1298FE8))(this);
	}
	template <typename R = void> R UnmuteSound() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x12999CC))(this);
	}
	template <typename R = void> R OnApplicationPause(bool isPaused) {
		return ((R (*)(AdsManager*, bool))(Il2CppBase() + 0x1299BE4))(this, isPaused);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(AdsManager*))(Il2CppBase() + 0x1299C58))(this);
	}

};

