#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationGeneratorConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationGeneratorConditionComponent"));
	}

	 Nullable1int32_t>*& MinLevel() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x10);
	}
	 Nullable1int32_t>*& MaxLevel() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x18);
	}
	 Nullable1bool>*& LooseStreak() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LocationGeneratorConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x17B20C4))(this, target);
	}

};

