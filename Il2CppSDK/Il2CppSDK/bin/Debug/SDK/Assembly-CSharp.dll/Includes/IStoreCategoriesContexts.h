#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStoreCategoriesContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStoreCategoriesContexts"));
	}


	template <typename T = StoreCategoriesContext*> T get_storeCategories() {
		return ((T (*)(IStoreCategoriesContexts*))(Il2CppBase() + 0x0))(this);
	}

};

