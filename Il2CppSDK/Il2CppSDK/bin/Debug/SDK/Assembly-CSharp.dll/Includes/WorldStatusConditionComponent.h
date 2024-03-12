#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldStatusConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldStatusConditionComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Any() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Not() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(WorldStatusConditionComponent*, uintptr_t))(Il2CppBase() + 0x1131314))(this, target);
	}

};

}
