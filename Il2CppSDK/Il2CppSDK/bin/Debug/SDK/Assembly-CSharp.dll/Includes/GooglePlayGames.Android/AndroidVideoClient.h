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
	template <typename T = uintptr_t> T& mOnCaptureOverlayStateListenerProxy() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T GetCaptureCapabilities(void* callback) {
		return ((T (*)(AndroidVideoClient*, void*))(Il2CppBase() + 0x1889E0C))(this, callback);
	}
	template <typename T = void> T ShowCaptureOverlay() {
		return ((T (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A144))(this);
	}
	template <typename T = void> T GetCaptureState(void* callback) {
		return ((T (*)(AndroidVideoClient*, void*))(Il2CppBase() + 0x188A14C))(this, callback);
	}
	template <typename T = void> T IsCaptureAvailable(uintptr_t captureMode, void* callback) {
		return ((T (*)(AndroidVideoClient*, uintptr_t, void*))(Il2CppBase() + 0x188A484))(this, captureMode, callback);
	}
	template <typename T = bool> T IsCaptureSupported() {
		return ((T (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A814))(this);
	}
	template <typename T = void> T RegisterCaptureOverlayStateChangedListener(uintptr_t listener) {
		return ((T (*)(AndroidVideoClient*, uintptr_t))(Il2CppBase() + 0x188A81C))(this, listener);
	}
	template <typename T = void> T UnregisterCaptureOverlayStateChangedListener() {
		return ((T (*)(AndroidVideoClient*))(Il2CppBase() + 0x188A9F0))(this);
	}
	template <typename T = void*> static T ToOnGameThread(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename T = uintptr_t> static T FromVideoQualityLevel(int32_t captureQualityJava) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x188AB8C))(0, captureQualityJava);
	}
	template <typename T = uintptr_t> static T FromVideoCaptureMode(int32_t captureMode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x188AB98))(0, captureMode);
	}
	template <typename T = int32_t> static T ToVideoCaptureMode(uintptr_t captureMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x188A804))(0, captureMode);
	}
	template <typename T = uintptr_t> static T CreateVideoCaptureState(uintptr_t videoCaptureState) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x188ABA8))(0, videoCaptureState);
	}
	template <typename T = uintptr_t> static T CreateVideoCapabilities(uintptr_t videoCapabilities) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x188AFE4))(0, videoCapabilities);
	}

};

}
