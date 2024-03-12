#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerDistrictLevelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerDistrictLevelComponent"));
	}

	template <typename T = bool> T& CanBuild() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerDistrictLevelComponent*, uintptr_t))(Il2CppBase() + 0x1525760))(this, target);
	}

};

}
