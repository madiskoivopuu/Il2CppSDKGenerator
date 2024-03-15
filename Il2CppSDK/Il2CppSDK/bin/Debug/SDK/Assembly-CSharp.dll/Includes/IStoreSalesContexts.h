#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStoreSalesContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStoreSalesContexts"));
	}


	template <typename R = StoreSalesContext*> R get_storeSales() {
		return ((R (*)(IStoreSalesContexts*))(Il2CppBase() + 0x0))(this);
	}

};

