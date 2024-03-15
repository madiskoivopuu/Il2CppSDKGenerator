#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiVideo {

class IVideoClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiVideo", "IVideoClient"));
	}


	template <typename R = void> R GetCaptureCapabilities(Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiVideo::VideoCapabilities*>* callback) {
		return ((R (*)(IVideoClient*, Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiVideo::VideoCapabilities*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename R = void> R ShowCaptureOverlay() {
		return ((R (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R GetCaptureState(Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiVideo::VideoCaptureState*>* callback) {
		return ((R (*)(IVideoClient*, Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiVideo::VideoCaptureState*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename R = void> R IsCaptureAvailable(GooglePlayGamesBasicApi::VideoCaptureMode* captureMode, Action2GooglePlayGamesBasicApi::ResponseStatus*, bool>* callback) {
		return ((R (*)(IVideoClient*, GooglePlayGamesBasicApi::VideoCaptureMode*, Action2GooglePlayGamesBasicApi::ResponseStatus*, bool>*))(Il2CppBase() + 0x0))(this, captureMode, callback);
	}
	template <typename R = bool> R IsCaptureSupported() {
		return ((R (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R RegisterCaptureOverlayStateChangedListener(GooglePlayGamesBasicApiVideo::CaptureOverlayStateListener* listener) {
		return ((R (*)(IVideoClient*, GooglePlayGamesBasicApiVideo::CaptureOverlayStateListener*))(Il2CppBase() + 0x0))(this, listener);
	}
	template <typename R = void> R UnregisterCaptureOverlayStateChangedListener() {
		return ((R (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}

};

}
