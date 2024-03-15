#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass2_0"));
	}

	template <typename R = OnCaptureOverlayStateListenerProxy*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& overlayState() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R onCaptureOverlayStateChangedb__0() {
		return ((R (*)(cDisplayClass20*))(Il2CppBase() + 0x22A89B8))(this);
	}

};

