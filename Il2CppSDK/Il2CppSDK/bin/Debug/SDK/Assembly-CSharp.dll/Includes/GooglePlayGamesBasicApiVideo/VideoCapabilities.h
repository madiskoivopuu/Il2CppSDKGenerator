#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiVideo {

class VideoCapabilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiVideo", "VideoCapabilities"));
	}

	template <typename R = bool> R& mIsCameraSupported() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& mIsMicSupported() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = bool> R& mIsWriteStorageSupported() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	template <typename R = Il2CppArray<bool>*> R& mCaptureModesSupported() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<bool>*> R& mQualityLevelsSupported() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = bool> R get_IsCameraSupported() {
		return ((R (*)(VideoCapabilities*))(Il2CppBase() + 0x15C68CC))(this);
	}
	template <typename R = bool> R get_IsMicSupported() {
		return ((R (*)(VideoCapabilities*))(Il2CppBase() + 0x15C68D4))(this);
	}
	template <typename R = bool> R get_IsWriteStorageSupported() {
		return ((R (*)(VideoCapabilities*))(Il2CppBase() + 0x15C68DC))(this);
	}
	template <typename R = bool> R SupportsCaptureMode(GooglePlayGamesBasicApi::VideoCaptureMode captureMode) {
		return ((R (*)(VideoCapabilities*, GooglePlayGamesBasicApi::VideoCaptureMode))(Il2CppBase() + 0x15C68E4))(this, captureMode);
	}
	template <typename R = bool> R SupportsQualityLevel(GooglePlayGamesBasicApi::VideoQualityLevel qualityLevel) {
		return ((R (*)(VideoCapabilities*, GooglePlayGamesBasicApi::VideoQualityLevel))(Il2CppBase() + 0x15C69B0))(this, qualityLevel);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(VideoCapabilities*))(Il2CppBase() + 0x15C6A7C))(this);
	}

};

}
