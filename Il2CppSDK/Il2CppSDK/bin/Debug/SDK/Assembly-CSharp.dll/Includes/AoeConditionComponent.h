#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AoeConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AoeConditionComponent"));
	}

	template <typename T = TargetsSelector*> T& Selector() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1int32_t>*> T& MinCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1int32_t>*> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AoeConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x188EC74))(this, target);
	}

};

