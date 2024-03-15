#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeasonConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonConditionComponent"));
	}

	template <typename R = int32_t> R& Order() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Active() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	 Nullable1int32_t>*& MinDayIndex() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x18);
	}
	 Nullable1int32_t>*& MaxDayIndex() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SeasonConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x135D5E0))(this, target);
	}

};

