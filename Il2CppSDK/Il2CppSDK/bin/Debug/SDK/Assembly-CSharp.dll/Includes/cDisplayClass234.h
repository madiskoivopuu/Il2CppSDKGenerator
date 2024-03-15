#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass234
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_4"));
	}

	template <typename R = IronSourceError*> R& ironsourceError() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerInterstitialEventsb__11() {
		return ((R (*)(cDisplayClass234*))(Il2CppBase() + 0x11547EC))(this);
	}

};

