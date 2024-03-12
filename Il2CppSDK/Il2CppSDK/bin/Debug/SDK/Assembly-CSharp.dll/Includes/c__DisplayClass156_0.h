#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1560
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass156_0"));
	}

	template <typename T = Il2CppString*> T& segmentName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerSegmentEventsb__1() {
		return ((T (*)(cDisplayClass1560*))(Il2CppBase() + 0x1153540))(this);
	}

};

}
