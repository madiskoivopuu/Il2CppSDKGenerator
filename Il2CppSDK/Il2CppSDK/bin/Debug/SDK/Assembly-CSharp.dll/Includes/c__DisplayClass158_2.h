#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1582
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass158_2"));
	}

	template <typename T = Il2CppString*> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerRewardedVideoDemandOnlyEventsb__9() {
		return ((T (*)(cDisplayClass1582*))(Il2CppBase() + 0x1153730))(this);
	}

};

}
