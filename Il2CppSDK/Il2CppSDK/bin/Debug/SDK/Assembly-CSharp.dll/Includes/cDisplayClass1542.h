#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1542
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass154_2"));
	}

	template <typename T = Il2CppString*> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerInterstitialDemandOnlyEventsb__8() {
		return ((T (*)(cDisplayClass1542*))(Il2CppBase() + 0x1153160))(this);
	}

};

