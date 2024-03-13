#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDataEntity1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDataEntity`1"));
	}


	template <typename T = Il2CppString*> T get_DataName() {
		return ((T (*)(IDataEntity1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(IDataEntity1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddData(Il2CppString* name, uintptr_t data) {
		return ((T (*)(IDataEntity1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, name, data);
	}

};

