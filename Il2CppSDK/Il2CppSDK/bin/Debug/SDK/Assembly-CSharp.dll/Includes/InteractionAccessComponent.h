#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionAccessComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractionAccessComponent"));
	}

	template <typename T = Il2CppString*> T& ActorCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(InteractionAccessComponent*, uintptr_t))(Il2CppBase() + 0x146AF70))(this, target);
	}

};

}
