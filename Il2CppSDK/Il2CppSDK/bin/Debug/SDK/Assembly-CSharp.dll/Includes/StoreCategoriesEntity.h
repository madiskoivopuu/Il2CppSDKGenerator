#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoriesEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoriesEntity"));
	}


	template <typename T = CategoryEventsComponent*> T get_categoryEvents() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141BF88))(this);
	}
	template <typename T = bool> T get_hasCategoryEvents() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C010))(this);
	}
	template <typename T = void> T AddCategoryEvents(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(StoreCategoriesEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x141C01C))(this, newList);
	}
	template <typename T = void> T ReplaceCategoryEvents(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(StoreCategoriesEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x141C130))(this, newList);
	}
	template <typename T = void> T RemoveCategoryEvents() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C244))(this);
	}
	template <typename T = CategoryIdComponent*> T get_categoryId() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C250))(this);
	}
	template <typename T = bool> T get_hasCategoryId() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C2D8))(this);
	}
	template <typename T = void> T AddCategoryId(int64_t newId) {
		return ((T (*)(StoreCategoriesEntity*, int64_t))(Il2CppBase() + 0x141BDCC))(this, newId);
	}
	template <typename T = void> T ReplaceCategoryId(int64_t newId) {
		return ((T (*)(StoreCategoriesEntity*, int64_t))(Il2CppBase() + 0x141C2E4))(this, newId);
	}
	template <typename T = void> T RemoveCategoryId() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C3E8))(this);
	}
	template <typename T = CategoryTypeComponent*> T get_categoryType() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C3F4))(this);
	}
	template <typename T = bool> T get_hasCategoryType() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C47C))(this);
	}
	template <typename T = void> T AddCategoryType(StoreCategory* newType) {
		return ((T (*)(StoreCategoriesEntity*, StoreCategory*))(Il2CppBase() + 0x141C488))(this, newType);
	}
	template <typename T = void> T ReplaceCategoryType(StoreCategory* newType) {
		return ((T (*)(StoreCategoriesEntity*, StoreCategory*))(Il2CppBase() + 0x141C58C))(this, newType);
	}
	template <typename T = void> T RemoveCategoryType() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C690))(this);
	}
	template <typename T = PlayerIdComponent*> T get_playerId() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C69C))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C724))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(StoreCategoriesEntity*, int64_t))(Il2CppBase() + 0x141C730))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(StoreCategoriesEntity*, int64_t))(Il2CppBase() + 0x141C834))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C938))(this);
	}
	template <typename T = TagsComponent*> T get_tags() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C944))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141C9CC))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(StoreCategoriesEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x141C9D8))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(StoreCategoriesEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x141CAEC))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(StoreCategoriesEntity*))(Il2CppBase() + 0x141CC00))(this);
	}

};

