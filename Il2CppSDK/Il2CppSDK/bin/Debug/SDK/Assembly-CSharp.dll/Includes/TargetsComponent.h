#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsComponent"));
	}

	template <typename T = HashSet1int32_t>*> T& Ids() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(TargetsComponent*))(Il2CppBase() + 0x16A64D4))(this);
	}

};

