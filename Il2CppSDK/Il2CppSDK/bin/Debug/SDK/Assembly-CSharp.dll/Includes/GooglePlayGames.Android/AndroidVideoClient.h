#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesAndroid {

class AndroidVideoClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesAndroid", "AndroidVideoClient"));
	}

	template <typename T = uintptr_t> T& mVideosClient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsCaptureSupported() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = OnCaptureOverlayStateListenerProxy*> T& mOnCaptureOverlayStateListenerProxy() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T GetCaptureCapabilities(Action2ResponseStatus*, VideoCapabilities*>* callback) {
		return ((T (*)(AndroidVideoClient*, Action2ResponseStatus*, VideoCapabilities*>*))(Il2CppBase() + 0x1889E0C))(this, callback);
	}
	template <typename T = void> T ShowCaptureOverlay() {
		return ((T (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A144))(this);
	}
	template <typename T = void> T GetCaptureState(Action2ResponseStatus*, VideoCaptureState*>* callback) {
		return ((T (*)(AndroidVideoClient*, Action2ResponseStatus*, VideoCaptureState*>*))(Il2CppBase() + 0x188A14C))(this, callback);
	}
	template <typename T = void> T IsCaptureAvailable(VideoCaptureMode* captureMode, Action2ResponseStatus*, bool>* callback) {
		return ((T (*)(AndroidVideoClient*, VideoCaptureMode*, Action2ResponseStatus*, bool>*))(Il2CppBase() + 0x188A484))(this, captureMode, callback);
	}
	template <typename T = bool> T IsCaptureSupported() {
		return ((T (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A814))(this);
	}
	template <typename T = void> T RegisterCaptureOverlayStateChangedListener(CaptureOverlayStateListener* listener) {
		return ((T (*)(AndroidVideoClient*, CaptureOverlayStateListener*))(Il2CppBase() + 0x188A81C))(this, listener);
	}
	template <typename T = void> T UnregisterCaptureOverlayStateChangedListener() {
		return ((T (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A9F0))(this);
	}
	template <typename T = Action2uintptr_t, uintptr_t>*> static T ToOnGameThread(Action2uintptr_t, uintptr_t>* toConvert) {
		return ((T (*)(void *, Action2uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename T = VideoQualityLevel*> static T FromVideoQualityLevel(int32_t captureQualityJava) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x188AB8C))(0, captureQualityJava);
	}
	template <typename T = VideoCaptureMode*> static T FromVideoCaptureMode(int32_t captureMode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x188AB98))(0, captureMode);
	}
	template <typename T = int32_t> static T ToVideoCaptureMode(VideoCaptureMode* captureMode) {
		return ((T (*)(void *, VideoCaptureMode*))(Il2CppBase() + 0x188A804))(0, captureMode);
	}
	template <typename T = VideoCaptureState*> static T CreateVideoCaptureState(uintptr_t videoCaptureState) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x188ABA8))(0, videoCaptureState);
	}
	template <typename T = VideoCapabilities*> static T CreateVideoCapabilities(uintptr_t videoCapabilities) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x188AFE4))(0, videoCapabilities);
	}

};

}
