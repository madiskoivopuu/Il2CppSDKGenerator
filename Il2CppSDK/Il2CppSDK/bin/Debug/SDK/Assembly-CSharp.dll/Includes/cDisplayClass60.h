#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass6_0"));
	}

	template <typename T = Action2ResponseStatus*, VideoCaptureState*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T GetCaptureStateb__0(uintptr_t captureState) {
		return ((T (*)(cDisplayClass60*, uintptr_t))(Il2CppBase() + 0x1147F18))(this, captureState);
	}
	template <typename T = void> T GetCaptureStateb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass60*, uintptr_t))(Il2CppBase() + 0x1147F90))(this, exception);
	}

};

