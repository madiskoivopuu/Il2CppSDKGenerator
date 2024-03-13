#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FactoryBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FactoryBase"));
	}


	template <typename T = Content1uintptr_t>*> T CreateInstance(uintptr_t data, uintptr_t parent) {
		return ((T (*)(FactoryBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}

};

