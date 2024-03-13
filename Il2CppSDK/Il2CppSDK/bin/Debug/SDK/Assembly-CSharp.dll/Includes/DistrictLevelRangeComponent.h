#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistrictLevelRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistrictLevelRangeComponent"));
	}

	template <typename T = Nullable1int32_t>*> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1int32_t>*> T& Max() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1bool>*> T& Completed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1bool>*> T& ReadyToBuild() {
		return *(T*)((uintptr_t)this + 0x22);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DistrictLevelRangeComponent*, Il2CppObject*))(Il2CppBase() + 0x1302928))(this, target);
	}

};

