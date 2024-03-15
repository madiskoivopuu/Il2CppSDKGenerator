#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerSeasonEndComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerSeasonEndComponent"));
	}

	template <typename R = int32_t> R& SeasonOrder() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerSeasonEndComponent*, Il2CppObject*))(Il2CppBase() + 0x1525A3C))(this, target);
	}

};

