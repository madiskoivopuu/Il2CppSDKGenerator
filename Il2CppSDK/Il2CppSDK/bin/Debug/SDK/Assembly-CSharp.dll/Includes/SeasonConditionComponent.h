#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeasonConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonConditionComponent"));
	}

	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Nullable1int32_t>*> T& MinDayIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1int32_t>*> T& MaxDayIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(SeasonConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x135D5E0))(this, target);
	}

};

