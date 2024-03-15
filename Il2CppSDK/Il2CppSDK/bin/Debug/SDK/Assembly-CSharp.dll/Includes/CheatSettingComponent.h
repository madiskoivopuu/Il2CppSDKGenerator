#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatSettingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatSettingComponent"));
	}

	template <typename R = Il2CppString*> R& Category() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CheatSettingComponent*, Il2CppObject*))(Il2CppBase() + 0x173CDF0))(this, target);
	}

};

