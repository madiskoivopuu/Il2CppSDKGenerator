#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoriesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoriesEntity"));
	}


	template <typename R = CategoryEventsComponent*> R get_categoryEvents() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141BF88))(this);
	}
	template <typename R = bool> R get_hasCategoryEvents() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C010))(this);
	}
	template <typename R = void> R AddCategoryEvents(Il2CppArray<CategoryEvent*>* newList) {
		return ((R (*)(StoreCategoriesEntity*, Il2CppArray<CategoryEvent*>*))(Il2CppBase() + 0x141C01C))(this, newList);
	}
	template <typename R = void> R ReplaceCategoryEvents(Il2CppArray<CategoryEvent*>* newList) {
		return ((R (*)(StoreCategoriesEntity*, Il2CppArray<CategoryEvent*>*))(Il2CppBase() + 0x141C130))(this, newList);
	}
	template <typename R = void> R RemoveCategoryEvents() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C244))(this);
	}
	template <typename R = CategoryIdComponent*> R get_categoryId() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C250))(this);
	}
	template <typename R = bool> R get_hasCategoryId() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C2D8))(this);
	}
	template <typename R = void> R AddCategoryId(int64_t newId) {
		return ((R (*)(StoreCategoriesEntity*, int64_t))(Il2CppBase() + 0x141BDCC))(this, newId);
	}
	template <typename R = void> R ReplaceCategoryId(int64_t newId) {
		return ((R (*)(StoreCategoriesEntity*, int64_t))(Il2CppBase() + 0x141C2E4))(this, newId);
	}
	template <typename R = void> R RemoveCategoryId() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C3E8))(this);
	}
	template <typename R = CategoryTypeComponent*> R get_categoryType() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C3F4))(this);
	}
	template <typename R = bool> R get_hasCategoryType() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C47C))(this);
	}
	template <typename R = void> R AddCategoryType(StoreCategory* newType) {
		return ((R (*)(StoreCategoriesEntity*, StoreCategory*))(Il2CppBase() + 0x141C488))(this, newType);
	}
	template <typename R = void> R ReplaceCategoryType(StoreCategory* newType) {
		return ((R (*)(StoreCategoriesEntity*, StoreCategory*))(Il2CppBase() + 0x141C58C))(this, newType);
	}
	template <typename R = void> R RemoveCategoryType() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C690))(this);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C69C))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C724))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(StoreCategoriesEntity*, int64_t))(Il2CppBase() + 0x141C730))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(StoreCategoriesEntity*, int64_t))(Il2CppBase() + 0x141C834))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C938))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C944))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C9CC))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(StoreCategoriesEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x141C9D8))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(StoreCategoriesEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x141CAEC))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141CC00))(this);
	}

};

