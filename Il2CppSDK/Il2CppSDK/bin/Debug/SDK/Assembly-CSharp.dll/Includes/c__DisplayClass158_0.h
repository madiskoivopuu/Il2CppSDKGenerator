#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1580
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass158_0"));
	}

	template <typename T = Il2CppString*> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerRewardedVideoDemandOnlyEventsb__7() {
		return ((T (*)(cDisplayClass1580*))(Il2CppBase() + 0x1153638))(this);
	}

};

}
