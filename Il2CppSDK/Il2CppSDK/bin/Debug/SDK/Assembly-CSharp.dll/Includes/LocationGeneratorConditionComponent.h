#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationGeneratorConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationGeneratorConditionComponent"));
	}

	template <typename T = Nullable1int32_t>*> T& MinLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1int32_t>*> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1bool>*> T& LooseStreak() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(LocationGeneratorConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x17B20C4))(this, target);
	}

};

