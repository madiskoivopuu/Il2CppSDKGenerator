#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TDataEntity>
class BaseDataComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseDataComponent`1"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 TDataEntity& DataEntity() {
		return *(TDataEntity*)((uintptr_t)this + 0x0);
	}


};

