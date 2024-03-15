#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidVideoClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidVideoClient"));
	}

	template <typename R = uintptr_t> R& mVideosClient() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& mIsCaptureSupported() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = OnCaptureOverlayStateListenerProxy*> R& mOnCaptureOverlayStateListenerProxy() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R GetCaptureCapabilities(Action2<GooglePlayGamesBasicApi::ResponseStatus, GooglePlayGamesBasicApiVideo::VideoCapabilities*>* callback) {
		return ((R (*)(AndroidVideoClient*, Action2<GooglePlayGamesBasicApi::ResponseStatus, GooglePlayGamesBasicApiVideo::VideoCapabilities*>*))(Il2CppBase() + 0x1889E0C))(this, callback);
	}
	template <typename R = void> R ShowCaptureOverlay() {
		return ((R (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A144))(this);
	}
	template <typename R = void> R GetCaptureState(Action2<GooglePlayGamesBasicApi::ResponseStatus, GooglePlayGamesBasicApiVideo::VideoCaptureState*>* callback) {
		return ((R (*)(AndroidVideoClient*, Action2<GooglePlayGamesBasicApi::ResponseStatus, GooglePlayGamesBasicApiVideo::VideoCaptureState*>*))(Il2CppBase() + 0x188A14C))(this, callback);
	}
	template <typename R = void> R IsCaptureAvailable(GooglePlayGamesBasicApi::VideoCaptureMode captureMode, Action2<GooglePlayGamesBasicApi::ResponseStatus, bool>* callback) {
		return ((R (*)(AndroidVideoClient*, GooglePlayGamesBasicApi::VideoCaptureMode, Action2<GooglePlayGamesBasicApi::ResponseStatus, bool>*))(Il2CppBase() + 0x188A484))(this, captureMode, callback);
	}
	template <typename R = bool> R IsCaptureSupported() {
		return ((R (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A814))(this);
	}
	template <typename R = void> R RegisterCaptureOverlayStateChangedListener(GooglePlayGamesBasicApiVideo::CaptureOverlayStateListener* listener) {
		return ((R (*)(AndroidVideoClient*, GooglePlayGamesBasicApiVideo::CaptureOverlayStateListener*))(Il2CppBase() + 0x188A81C))(this, listener);
	}
	template <typename R = void> R UnregisterCaptureOverlayStateChangedListener() {
		return ((R (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A9F0))(this);
	}
	 static Action2<uintptr_t, uintptr_t>* ToOnGameThread(Action2<uintptr_t, uintptr_t>* toConvert) {
		return ((Action2<uintptr_t, uintptr_t>* (*)(void *, Action2<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename R = GooglePlayGamesBasicApi::VideoQualityLevel> static R FromVideoQualityLevel(int32_t captureQualityJava) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x188AB8C))(0, captureQualityJava);
	}
	template <typename R = GooglePlayGamesBasicApi::VideoCaptureMode> static R FromVideoCaptureMode(int32_t captureMode) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x188AB98))(0, captureMode);
	}
	template <typename R = int32_t> static R ToVideoCaptureMode(GooglePlayGamesBasicApi::VideoCaptureMode captureMode) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::VideoCaptureMode))(Il2CppBase() + 0x188A804))(0, captureMode);
	}
	template <typename R = GooglePlayGamesBasicApiVideo::VideoCaptureState*> static R CreateVideoCaptureState(uintptr_t videoCaptureState) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x188ABA8))(0, videoCaptureState);
	}
	template <typename R = GooglePlayGamesBasicApiVideo::VideoCapabilities*> static R CreateVideoCapabilities(uintptr_t videoCapabilities) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x188AFE4))(0, videoCapabilities);
	}

};

}
