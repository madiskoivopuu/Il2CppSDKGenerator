#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistrictLevelRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistrictLevelRangeComponent"));
	}

	template <typename T = void*> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Max() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Completed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& ReadyToBuild() {
		return *(T*)((uintptr_t)this + 0x22);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DistrictLevelRangeComponent*, uintptr_t))(Il2CppBase() + 0x1302928))(this, target);
	}

};

}
