#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerBuildComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerBuildComponent"));
	}

	template <typename T = bool> T& Upgrade() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerBuildComponent*, uintptr_t))(Il2CppBase() + 0x15254FC))(this, target);
	}

};

}
