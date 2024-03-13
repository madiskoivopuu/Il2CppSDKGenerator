#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpeedConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpeedConditionComponent"));
	}

	template <typename T = bool> T& Has() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1bool>*> T& BaseNotZero() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Nullable1float>*> T& Min() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Nullable1float>*> T& Max() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(SpeedConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x14883FC))(this, target);
	}

};

