#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpeedConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpeedConditionComponent"));
	}

	template <typename R = bool> R& Has() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1<bool>*& BaseNotZero() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x11);
	}
	 Nullable1<float>*& Min() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x14);
	}
	 Nullable1<float>*& Max() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SpeedConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x14883FC))(this, target);
	}

};

