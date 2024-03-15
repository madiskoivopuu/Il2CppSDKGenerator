#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass40
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass4_0"));
	}

	 Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiVideo::VideoCapabilities*>*& callback() {
		return *(Action2GooglePlayGamesBasicApi::ResponseStatus*, GooglePlayGamesBasicApiVideo::VideoCapabilities*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R GetCaptureCapabilitiesb__0(uintptr_t videoCapabilities) {
		return ((R (*)(cDisplayClass40*, uintptr_t))(Il2CppBase() + 0x1147E3C))(this, videoCapabilities);
	}
	template <typename R = void> R GetCaptureCapabilitiesb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass40*, uintptr_t))(Il2CppBase() + 0x1147EB4))(this, exception);
	}

};

