#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Active() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1<int32_t>*& MinDayIndex() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x1C);
	}
	 Nullable1<int32_t>*& MaxDayIndex() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x24);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TempBuffConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x16AF588))(this, target);
	}

};

