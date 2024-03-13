#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "FactoryBase.h" 

class Factory : public FactoryBase<Data*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Factory"));
	}

	template <typename T = Il2CppDictionary<int32_t, Content1Data*>*>*> T& prefabs() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Content1Data*>*> T CreateInstance(Data* data, uintptr_t parent) {
		return ((T (*)(Factory*, Data*, uintptr_t))(Il2CppBase() + 0x1164E10))(this, data, parent);
	}

};

