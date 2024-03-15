#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCaptureOverlayStateListenerProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCaptureOverlayStateListenerProxy"));
	}

	template <typename R = GooglePlayGamesBasicApiVideo::CaptureOverlayStateListener*> R& mListener() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R onCaptureOverlayStateChanged(int32_t overlayState) {
		return ((R (*)(OnCaptureOverlayStateListenerProxy*, int32_t))(Il2CppBase() + 0x1148150))(this, overlayState);
	}
	template <typename R = GooglePlayGamesBasicApi::VideoCaptureOverlayState*> static R FromVideoCaptureOverlayState(int32_t overlayState) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1148248))(0, overlayState);
	}

};

