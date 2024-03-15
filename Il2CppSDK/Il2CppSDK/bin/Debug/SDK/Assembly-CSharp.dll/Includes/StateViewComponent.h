#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateViewComponent"));
	}

	template <typename R = Il2CppArray<Item*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Item*>*> R& FirstOfValues() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StateViewComponent*, Il2CppObject*))(Il2CppBase() + 0x148F540))(this, target);
	}

};

