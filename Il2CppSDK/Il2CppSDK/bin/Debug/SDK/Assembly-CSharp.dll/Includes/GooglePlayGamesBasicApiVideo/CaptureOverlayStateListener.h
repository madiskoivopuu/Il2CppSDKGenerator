#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiVideo {

class CaptureOverlayStateListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiVideo", "CaptureOverlayStateListener"));
	}


	template <typename R = void> R OnCaptureOverlayStateChanged(GooglePlayGamesBasicApi::VideoCaptureOverlayState* overlayState) {
		return ((R (*)(CaptureOverlayStateListener*, GooglePlayGamesBasicApi::VideoCaptureOverlayState*))(Il2CppBase() + 0x0))(this, overlayState);
	}

};

}
