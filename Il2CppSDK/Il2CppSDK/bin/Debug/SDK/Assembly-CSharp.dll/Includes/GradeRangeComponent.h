#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeRangeComponent"));
	}

	template <typename T = Nullable1int32_t>*> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1int32_t>*> T& Max() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(GradeRangeComponent*, Il2CppObject*))(Il2CppBase() + 0x12E20FC))(this, target);
	}

};

