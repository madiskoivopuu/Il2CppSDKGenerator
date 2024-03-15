#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationGeneratorConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationGeneratorConditionComponent"));
	}

	 Nullable1<int32_t>*& MinLevel() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x10);
	}
	 Nullable1<int32_t>*& MaxLevel() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x18);
	}
	 Nullable1<bool>*& LooseStreak() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LocationGeneratorConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x17B20C4))(this, target);
	}

};

