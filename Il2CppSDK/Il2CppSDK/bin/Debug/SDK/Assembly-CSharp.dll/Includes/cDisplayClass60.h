#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass6_0"));
	}

	 Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiVideo::VideoCaptureState*>*& callback() {
		return *(Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiVideo::VideoCaptureState*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R GetCaptureStateb__0(uintptr_t captureState) {
		return ((R (*)(cDisplayClass60*, uintptr_t))(Il2CppBase() + 0x1147F18))(this, captureState);
	}
	template <typename R = void> R GetCaptureStateb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass60*, uintptr_t))(Il2CppBase() + 0x1147F90))(this, exception);
	}

};

