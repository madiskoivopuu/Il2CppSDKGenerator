#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1582
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass158_2"));
	}

	template <typename R = Il2CppString*> R& instanceId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerRewardedVideoDemandOnlyEventsb__9() {
		return ((R (*)(cDisplayClass1582*))(Il2CppBase() + 0x1153730))(this);
	}

};

