#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCaptureOverlayStateListenerProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCaptureOverlayStateListenerProxy"));
	}

	template <typename T = uintptr_t> T& mListener() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T onCaptureOverlayStateChanged(int32_t overlayState) {
		return ((T (*)(OnCaptureOverlayStateListenerProxy*, int32_t))(Il2CppBase() + 0x1148150))(this, overlayState);
	}
	template <typename T = uintptr_t> static T FromVideoCaptureOverlayState(int32_t overlayState) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1148248))(0, overlayState);
	}

};

}
