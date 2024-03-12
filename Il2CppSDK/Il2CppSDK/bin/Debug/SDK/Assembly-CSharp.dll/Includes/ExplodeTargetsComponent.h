#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplodeTargetsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeTargetsComponent"));
	}

	template <typename T = void*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(ExplodeTargetsComponent*))(Il2CppBase() + 0x1685850))(this);
	}

};

}
