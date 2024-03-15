#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsComponent"));
	}

	 HashSet1int32_t>*& Ids() {
		return *(HashSet1int32_t>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Clear() {
		return ((R (*)(TargetsComponent*))(Il2CppBase() + 0x16A64D4))(this);
	}

};

