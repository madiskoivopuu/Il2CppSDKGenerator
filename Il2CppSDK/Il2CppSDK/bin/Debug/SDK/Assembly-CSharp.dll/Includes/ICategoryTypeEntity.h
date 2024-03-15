#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICategoryTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICategoryTypeEntity"));
	}


	template <typename R = CategoryTypeComponent*> R get_categoryType() {
		return ((R (*)(ICategoryTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCategoryType() {
		return ((R (*)(ICategoryTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCategoryType(StoreCategory* newType) {
		return ((R (*)(ICategoryTypeEntity*, StoreCategory*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceCategoryType(StoreCategory* newType) {
		return ((R (*)(ICategoryTypeEntity*, StoreCategory*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveCategoryType() {
		return ((R (*)(ICategoryTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

