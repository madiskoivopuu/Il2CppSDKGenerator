#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoryHelper"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> static R& _cache() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> static R ToCachedString(StoreCategory category) {
		return ((R (*)(void *, StoreCategory))(Il2CppBase() + 0x1416B6C))(0, category);
	}

};

