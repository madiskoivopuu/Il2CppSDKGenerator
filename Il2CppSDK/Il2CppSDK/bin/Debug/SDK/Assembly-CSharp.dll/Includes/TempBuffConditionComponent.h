#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffConditionComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1int32_t>*> T& MinDayIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Nullable1int32_t>*> T& MaxDayIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TempBuffConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x16AF588))(this, target);
	}

};

