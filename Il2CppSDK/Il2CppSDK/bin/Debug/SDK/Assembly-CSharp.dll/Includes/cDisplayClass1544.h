#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1544
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass154_4"));
	}

	template <typename R = Il2CppString*> R& instanceId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IronSourceError*> R& ironSourceError() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R registerInterstitialDemandOnlyEventsb__10() {
		return ((R (*)(cDisplayClass1544*))(Il2CppBase() + 0x1153258))(this);
	}

};

