#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1586
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass158_6"));
	}

	template <typename T = Il2CppString*> T& instanceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& error() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T registerRewardedVideoDemandOnlyEventsb__13() {
		return ((T (*)(cDisplayClass1586*))(Il2CppBase() + 0x1153920))(this);
	}

};

}
