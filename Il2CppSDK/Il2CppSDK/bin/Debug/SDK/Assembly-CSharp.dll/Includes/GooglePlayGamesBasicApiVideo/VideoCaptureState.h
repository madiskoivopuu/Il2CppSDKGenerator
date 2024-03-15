#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiVideo {

class VideoCaptureState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiVideo", "VideoCaptureState"));
	}

	template <typename R = bool> R& mIsCapturing() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGamesBasicApi::VideoCaptureMode> R& mCaptureMode() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = GooglePlayGamesBasicApi::VideoQualityLevel> R& mQualityLevel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& mIsOverlayVisible() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& mIsPaused() {
		return *(R*)((uintptr_t)this + 0x1D);
	}

	template <typename R = bool> R get_IsCapturing() {
		return ((R (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F08))(this);
	}
	template <typename R = GooglePlayGamesBasicApi::VideoCaptureMode> R get_CaptureMode() {
		return ((R (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F10))(this);
	}
	template <typename R = GooglePlayGamesBasicApi::VideoQualityLevel> R get_QualityLevel() {
		return ((R (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F18))(this);
	}
	template <typename R = bool> R get_IsOverlayVisible() {
		return ((R (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F20))(this);
	}
	template <typename R = bool> R get_IsPaused() {
		return ((R (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F28))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(VideoCaptureState*))(Il2CppBase() + 0x15C6F30))(this);
	}

};

}
