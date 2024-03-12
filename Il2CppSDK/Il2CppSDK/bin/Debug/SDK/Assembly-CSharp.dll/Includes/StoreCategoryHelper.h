#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoryHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T ToCachedString(uintptr_t category) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1416B6C))(0, category);
	}

};

}
