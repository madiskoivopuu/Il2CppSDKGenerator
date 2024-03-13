#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStoreSalesContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStoreSalesContexts"));
	}


	template <typename T = StoreSalesContext*> T get_storeSales() {
		return ((T (*)(IStoreSalesContexts*))(Il2CppBase() + 0x0))(this);
	}

};

