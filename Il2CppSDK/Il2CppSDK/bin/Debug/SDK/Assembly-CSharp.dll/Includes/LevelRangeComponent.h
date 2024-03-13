#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelRangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelRangeComponent"));
	}

	template <typename T = Nullable1int32_t>*> T& Min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1int32_t>*> T& Max() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(LevelRangeComponent*, Il2CppObject*))(Il2CppBase() + 0x142BC50))(this, target);
	}

};

