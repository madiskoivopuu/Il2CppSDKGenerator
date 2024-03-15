#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1560
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass156_0"));
	}

	template <typename R = Il2CppString*> R& segmentName() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerSegmentEventsb__1() {
		return ((R (*)(cDisplayClass1560*))(Il2CppBase() + 0x1153540))(this);
	}

};

