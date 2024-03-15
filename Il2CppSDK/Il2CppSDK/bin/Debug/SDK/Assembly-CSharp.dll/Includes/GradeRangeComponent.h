#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeRangeComponent"));
	}

	 Nullable1<int32_t>*& Min() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x10);
	}
	 Nullable1<int32_t>*& Max() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GradeRangeComponent*, Il2CppObject*))(Il2CppBase() + 0x12E20FC))(this, target);
	}

};

