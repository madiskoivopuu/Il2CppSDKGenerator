#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplodeTargetsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeTargetsComponent"));
	}

	 HashSet1<int32_t>*& Values() {
		return *(HashSet1<int32_t>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Clear() {
		return ((R (*)(ExplodeTargetsComponent*))(Il2CppBase() + 0x1685850))(this);
	}

};

