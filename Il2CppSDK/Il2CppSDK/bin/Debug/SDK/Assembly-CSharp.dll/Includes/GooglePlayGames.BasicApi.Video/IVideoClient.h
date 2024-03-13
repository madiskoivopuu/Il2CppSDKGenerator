#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiVideo {

class IVideoClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiVideo", "IVideoClient"));
	}


	template <typename T = void> T GetCaptureCapabilities(Action2ResponseStatus*, VideoCapabilities*>* callback) {
		return ((T (*)(IVideoClient*, Action2ResponseStatus*, VideoCapabilities*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T ShowCaptureOverlay() {
		return ((T (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetCaptureState(Action2ResponseStatus*, VideoCaptureState*>* callback) {
		return ((T (*)(IVideoClient*, Action2ResponseStatus*, VideoCaptureState*>*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T IsCaptureAvailable(VideoCaptureMode* captureMode, Action2ResponseStatus*, bool>* callback) {
		return ((T (*)(IVideoClient*, VideoCaptureMode*, Action2ResponseStatus*, bool>*))(Il2CppBase() + 0x0))(this, captureMode, callback);
	}
	template <typename T = bool> T IsCaptureSupported() {
		return ((T (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RegisterCaptureOverlayStateChangedListener(CaptureOverlayStateListener* listener) {
		return ((T (*)(IVideoClient*, CaptureOverlayStateListener*))(Il2CppBase() + 0x0))(this, listener);
	}
	template <typename T = void> T UnregisterCaptureOverlayStateChangedListener() {
		return ((T (*)(IVideoClient*))(Il2CppBase() + 0x0))(this);
	}

};

}
