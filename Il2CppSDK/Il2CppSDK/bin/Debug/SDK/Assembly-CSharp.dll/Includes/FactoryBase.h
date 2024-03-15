#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TData>
class FactoryBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FactoryBase"));
	}


	 Content1<TData>* CreateInstance(TData data, uintptr_t parent) {
		return ((Content1<TData>* (*)(FactoryBase*, TData, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}

};

