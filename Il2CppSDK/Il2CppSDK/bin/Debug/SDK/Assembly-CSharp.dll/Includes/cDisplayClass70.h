#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass70
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass7_0"));
	}

	template <typename T = Action2ResponseStatus*, bool>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T IsCaptureAvailableb__0(bool isCaptureAvailable) {
		return ((T (*)(cDisplayClass70*, bool))(Il2CppBase() + 0x1147FF4))(this, isCaptureAvailable);
	}
	template <typename T = void> T IsCaptureAvailableb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass70*, uintptr_t))(Il2CppBase() + 0x114805C))(this, exception);
	}

};

