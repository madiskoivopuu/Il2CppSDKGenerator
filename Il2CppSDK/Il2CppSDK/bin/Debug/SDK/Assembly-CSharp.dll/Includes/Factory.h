#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "FactoryBase" 

class Factory: FactoryBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Factory"));
	}

	template <typename T = Il2CppDictionary<int32_t, void*>*> T& prefabs() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> T CreateInstance(uintptr_t data, uintptr_t parent) {
		return ((T (*)(Factory*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1164E10))(this, data, parent);
	}

};

}
