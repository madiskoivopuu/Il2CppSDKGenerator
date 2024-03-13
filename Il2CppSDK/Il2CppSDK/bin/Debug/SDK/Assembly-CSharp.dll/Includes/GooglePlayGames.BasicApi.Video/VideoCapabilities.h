#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiVideo {

class VideoCapabilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiVideo", "VideoCapabilities"));
	}

	template <typename T = bool> T& mIsCameraSupported() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsMicSupported() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& mIsWriteStorageSupported() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCaptureModesSupported() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mQualityLevelsSupported() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsCameraSupported() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x15C68CC))(this);
	}
	template <typename T = bool> T get_IsMicSupported() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x15C68D4))(this);
	}
	template <typename T = bool> T get_IsWriteStorageSupported() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x15C68DC))(this);
	}
	template <typename T = bool> T SupportsCaptureMode(VideoCaptureMode* captureMode) {
		return ((T (*)(VideoCapabilities*, VideoCaptureMode*))(Il2CppBase() + 0x15C68E4))(this, captureMode);
	}
	template <typename T = bool> T SupportsQualityLevel(VideoQualityLevel* qualityLevel) {
		return ((T (*)(VideoCapabilities*, VideoQualityLevel*))(Il2CppBase() + 0x15C69B0))(this, qualityLevel);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VideoCapabilities*))(Il2CppBase() + 0x15C6A7C))(this);
	}

};

}
