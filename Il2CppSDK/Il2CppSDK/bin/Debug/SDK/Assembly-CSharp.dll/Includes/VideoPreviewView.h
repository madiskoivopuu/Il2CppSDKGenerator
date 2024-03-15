#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VideoPreviewView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VideoPreviewView"));
	}

	template <typename R = uintptr_t> R& CanvasRectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _rectTransform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _videoPlayer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _desiredOffset() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Show(uintptr_t screenPos, Il2CppString* videoPath) {
		return ((R (*)(VideoPreviewView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x15C71D4))(this, screenPos, videoPath);
	}
	template <typename R = void> R Show_1(Il2CppString* videoPath) {
		return ((R (*)(VideoPreviewView*, Il2CppString*))(Il2CppBase() + 0x15C7238))(this, videoPath);
	}
	template <typename R = uintptr_t> R GetAdjustedPosition(uintptr_t screenPos) {
		return ((R (*)(VideoPreviewView*, uintptr_t))(Il2CppBase() + 0x15C7410))(this, screenPos);
	}

};

