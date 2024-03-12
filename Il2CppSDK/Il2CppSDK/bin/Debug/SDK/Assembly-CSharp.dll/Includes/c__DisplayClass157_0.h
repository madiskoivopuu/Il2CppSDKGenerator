#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1570
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass157_0"));
	}

	template <typename T = uintptr_t> T& impressionData() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerImpressionDataEventsb__2() {
		return ((T (*)(cDisplayClass1570*))(Il2CppBase() + 0x11535BC))(this);
	}

};

}
