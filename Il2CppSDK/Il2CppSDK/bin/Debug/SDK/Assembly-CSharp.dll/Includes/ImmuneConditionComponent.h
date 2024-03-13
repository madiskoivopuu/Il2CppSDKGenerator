#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmuneConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImmuneConditionComponent"));
	}

	template <typename T = Nullable1bool>*> T& Unstopable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1bool>*> T& DebuffImmune() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ImmuneConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3DC14))(this, target);
	}

};

