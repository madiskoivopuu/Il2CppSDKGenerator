#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1570
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass157_0"));
	}

	template <typename R = IronSourceImpressionData*> R& impressionData() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerImpressionDataEventsb__2() {
		return ((R (*)(cDisplayClass1570*))(Il2CppBase() + 0x11535BC))(this);
	}

};

