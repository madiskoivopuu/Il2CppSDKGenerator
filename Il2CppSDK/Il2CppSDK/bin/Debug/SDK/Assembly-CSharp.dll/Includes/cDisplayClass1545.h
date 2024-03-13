#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1545
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass154_5"));
	}

	template <typename T = Il2CppString*> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IronSourceError*> T& ironSourceError() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T registerInterstitialDemandOnlyEventsb__11() {
		return ((T (*)(cDisplayClass1545*))(Il2CppBase() + 0x11532D4))(this);
	}

};

