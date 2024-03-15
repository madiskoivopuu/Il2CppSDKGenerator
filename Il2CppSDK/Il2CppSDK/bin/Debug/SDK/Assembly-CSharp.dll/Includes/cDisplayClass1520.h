#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1520
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass152_0"));
	}

	template <typename R = IronSourceError*> R& ironSourceError() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerBannerEventsb__8() {
		return ((R (*)(cDisplayClass1520*))(Il2CppBase() + 0x1152EF4))(this);
	}

};

