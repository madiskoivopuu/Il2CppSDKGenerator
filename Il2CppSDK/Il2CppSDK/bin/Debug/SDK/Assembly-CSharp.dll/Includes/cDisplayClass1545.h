#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1545
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass154_5"));
	}

	template <typename R = Il2CppString*> R& instanceId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IronSourceError*> R& ironSourceError() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R registerInterstitialDemandOnlyEventsb__11() {
		return ((R (*)(cDisplayClass1545*))(Il2CppBase() + 0x11532D4))(this);
	}

};

