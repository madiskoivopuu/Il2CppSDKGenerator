#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1585
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass158_5"));
	}

	template <typename R = Il2CppString*> R& instanceId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IronSourceError*> R& error() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R registerRewardedVideoDemandOnlyEventsb__12() {
		return ((R (*)(cDisplayClass1585*))(Il2CppBase() + 0x11538A4))(this);
	}

};

