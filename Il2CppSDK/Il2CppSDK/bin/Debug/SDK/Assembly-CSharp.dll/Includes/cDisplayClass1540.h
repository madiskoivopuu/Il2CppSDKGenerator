#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1540
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass154_0"));
	}

	template <typename T = Il2CppString*> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerInterstitialDemandOnlyEventsb__6() {
		return ((T (*)(cDisplayClass1540*))(Il2CppBase() + 0x1153068))(this);
	}

};

