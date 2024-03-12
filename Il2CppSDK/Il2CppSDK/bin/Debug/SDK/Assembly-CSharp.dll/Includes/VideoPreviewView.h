#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VideoPreviewView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VideoPreviewView"));
	}

	template <typename T = uintptr_t> T& CanvasRectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _rectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _videoPlayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& _desiredOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Show(Il2CppVector3 screenPos, Il2CppString* videoPath) {
		return ((T (*)(VideoPreviewView*, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x15C71D4))(this, screenPos, videoPath);
	}
	template <typename T = void> T Show_1(Il2CppString* videoPath) {
		return ((T (*)(VideoPreviewView*, Il2CppString*))(Il2CppBase() + 0x15C7238))(this, videoPath);
	}
	template <typename T = Il2CppVector2> T GetAdjustedPosition(Il2CppVector3 screenPos) {
		return ((T (*)(VideoPreviewView*, Il2CppVector3))(Il2CppBase() + 0x15C7410))(this, screenPos);
	}

};

}
