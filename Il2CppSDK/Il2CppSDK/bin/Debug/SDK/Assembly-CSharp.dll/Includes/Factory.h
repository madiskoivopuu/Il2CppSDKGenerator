#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Factory : public FactoryBase<Data*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Factory"));
	}

	 Il2CppDictionary<int32_t, Content1<Data*>*>*& prefabs() {
		return *(Il2CppDictionary<int32_t, Content1<Data*>*>**)((uintptr_t)this + 0x10);
	}

	 Content1<Data*>* CreateInstance(Data* data, uintptr_t parent) {
		return ((Content1<Data*>* (*)(Factory*, Data*, uintptr_t))(Il2CppBase() + 0x1164E10))(this, data, parent);
	}

};

