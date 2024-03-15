#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass70
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass7_0"));
	}

	 Action2<GooglePlayGamesBasicApi::ResponseStatus, bool>*& callback() {
		return *(Action2<GooglePlayGamesBasicApi::ResponseStatus, bool>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R IsCaptureAvailableb__0(bool isCaptureAvailable) {
		return ((R (*)(cDisplayClass70*, bool))(Il2CppBase() + 0x1147FF4))(this, isCaptureAvailable);
	}
	template <typename R = void> R IsCaptureAvailableb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass70*, uintptr_t))(Il2CppBase() + 0x114805C))(this, exception);
	}

};

