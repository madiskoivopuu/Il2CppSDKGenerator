#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStoreCategoriesContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStoreCategoriesContexts"));
	}


	template <typename R = StoreCategoriesContext*> R get_storeCategories() {
		return ((R (*)(IStoreCategoriesContexts*))(Il2CppBase() + 0x0))(this);
	}

};

