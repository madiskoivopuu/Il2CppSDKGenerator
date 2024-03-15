#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass202
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_2"));
	}

	template <typename R = IronSourceError*> R& ironSourceError() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerBannerEventsb__8() {
		return ((R (*)(cDisplayClass202*))(Il2CppBase() + 0x114EE34))(this);
	}

};

