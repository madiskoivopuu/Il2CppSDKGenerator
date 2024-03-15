#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PowerRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PowerRangeComponent"));
	}

	 Nullable1<float>*& Min() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x10);
	}
	 Nullable1<float>*& Max() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PowerRangeComponent*, Il2CppObject*))(Il2CppBase() + 0x16DCE54))(this, target);
	}

};

