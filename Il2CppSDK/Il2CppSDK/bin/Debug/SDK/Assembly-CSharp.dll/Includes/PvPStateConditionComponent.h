#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvPStateConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPStateConditionComponent"));
	}

	template <typename R = Il2CppArray<PvPState>*> R& Any() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<PvPState>*> R& Not() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PvPStateConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x11BEA14))(this, target);
	}

};

