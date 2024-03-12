#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiVideo {

class VideoCaptureState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiVideo", "VideoCaptureState"));
	}

	template <typename T = bool> T& mIsCapturing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mCaptureMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mQualityLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsOverlayVisible() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mIsPaused() {
		return *(T*)((uintptr_t)this + 0x1D);
	}

	template <typename T = bool> T get_IsCapturing() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F08))(this);
	}
	template <typename T = uintptr_t> T get_CaptureMode() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F10))(this);
	}
	template <typename T = uintptr_t> T get_QualityLevel() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F18))(this);
	}
	template <typename T = bool> T get_IsOverlayVisible() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F20))(this);
	}
	template <typename T = bool> T get_IsPaused() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F28))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F30))(this);
	}

};

}
