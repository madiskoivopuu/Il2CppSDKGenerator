#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICategoryTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICategoryTypeEntity"));
	}


	template <typename T = uintptr_t> T get_categoryType() {
		return ((T (*)(ICategoryTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCategoryType() {
		return ((T (*)(ICategoryTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCategoryType(uintptr_t newType) {
		return ((T (*)(ICategoryTypeEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceCategoryType(uintptr_t newType) {
		return ((T (*)(ICategoryTypeEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveCategoryType() {
		return ((T (*)(ICategoryTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
