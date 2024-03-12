#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass2_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& overlayState() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T onCaptureOverlayStateChangedb__0() {
		return ((T (*)(cDisplayClass20*))(Il2CppBase() + 0x22A89B8))(this);
	}

};

}
