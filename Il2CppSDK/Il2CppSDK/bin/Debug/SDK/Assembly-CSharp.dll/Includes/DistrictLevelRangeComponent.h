#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistrictLevelRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistrictLevelRangeComponent"));
	}

	 Nullable1<int32_t>*& Min() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x10);
	}
	 Nullable1<int32_t>*& Max() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x18);
	}
	 Nullable1<bool>*& Completed() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x20);
	}
	 Nullable1<bool>*& ReadyToBuild() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x22);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DistrictLevelRangeComponent*, Il2CppObject*))(Il2CppBase() + 0x1302928))(this, target);
	}

};

