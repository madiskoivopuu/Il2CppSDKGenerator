#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmuneConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImmuneConditionComponent"));
	}

	 Nullable1bool>*& Unstopable() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x10);
	}
	 Nullable1bool>*& DebuffImmune() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x12);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ImmuneConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3DC14))(this, target);
	}

};

