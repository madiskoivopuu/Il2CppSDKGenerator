#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPickupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPickupComponent"));
	}

	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Destroy() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyPickupComponent*, Il2CppObject*))(Il2CppBase() + 0x1894F94))(this, target);
	}

};

