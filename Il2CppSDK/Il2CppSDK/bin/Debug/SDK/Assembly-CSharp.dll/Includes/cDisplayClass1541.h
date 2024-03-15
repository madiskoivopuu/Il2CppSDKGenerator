#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1541
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass154_1"));
	}

	template <typename R = Il2CppString*> R& instanceId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerInterstitialDemandOnlyEventsb__7() {
		return ((R (*)(cDisplayClass1541*))(Il2CppBase() + 0x11530E4))(this);
	}

};

