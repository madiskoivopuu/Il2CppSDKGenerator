#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1541
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass154_1"));
	}

	template <typename T = Il2CppString*> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerInterstitialDemandOnlyEventsb__7() {
		return ((T (*)(cDisplayClass1541*))(Il2CppBase() + 0x11530E4))(this);
	}

};

}
