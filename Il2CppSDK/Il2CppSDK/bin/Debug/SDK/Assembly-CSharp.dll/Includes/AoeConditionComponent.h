#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AoeConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AoeConditionComponent"));
	}

	template <typename R = TargetsSelector*> R& Selector() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1int32_t>*& MinCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x18);
	}
	 Nullable1int32_t>*& MaxCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AoeConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x188EC74))(this, target);
	}

};

