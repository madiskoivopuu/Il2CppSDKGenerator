#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiVideo {

class CaptureOverlayStateListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiVideo", "CaptureOverlayStateListener"));
	}


	template <typename T = void> T OnCaptureOverlayStateChanged(VideoCaptureOverlayState* overlayState) {
		return ((T (*)(CaptureOverlayStateListener*, VideoCaptureOverlayState*))(Il2CppBase() + 0x0))(this, overlayState);
	}

};

}
