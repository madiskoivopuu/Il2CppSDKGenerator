#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TDataEntity>
class IDataEntity1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDataEntity`1"));
	}


	template <typename R = Il2CppString*> R get_DataName() {
		return ((R (*)(IDataEntity1*))(Il2CppBase() + 0x0))(this);
	}
	 TDataEntity get_Data() {
		return ((TDataEntity (*)(IDataEntity1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddData(Il2CppString* name, TDataEntity data) {
		return ((R (*)(IDataEntity1*, Il2CppString*, TDataEntity))(Il2CppBase() + 0x0))(this, name, data);
	}

};

