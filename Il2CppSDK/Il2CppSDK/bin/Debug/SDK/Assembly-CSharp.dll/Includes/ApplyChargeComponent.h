#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyChargeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyChargeComponent"));
	}

	template <typename R = float> R& Speed() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& InteractRadius() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	 Nullable1float>*& MaxDuration() {
		return *(Nullable1float>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyChargeComponent*, Il2CppObject*))(Il2CppBase() + 0x1893440))(this, targetObject);
	}

};

