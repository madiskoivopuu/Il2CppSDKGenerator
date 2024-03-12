#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPDataEntity"));
	}


	template <typename T = uintptr_t> T get_description() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE12C))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE1B4))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(VIPDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15BE1C0))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(VIPDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15BE2E8))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE410))(this);
	}
	template <typename T = uintptr_t> T get_linkToStoreProduct() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE41C))(this);
	}
	template <typename T = bool> T get_hasLinkToStoreProduct() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE4A4))(this);
	}
	template <typename T = void> T AddLinkToStoreProduct(Il2CppString* newName) {
		return ((T (*)(VIPDataEntity*, Il2CppString*))(Il2CppBase() + 0x15BE4B0))(this, newName);
	}
	template <typename T = void> T ReplaceLinkToStoreProduct(Il2CppString* newName) {
		return ((T (*)(VIPDataEntity*, Il2CppString*))(Il2CppBase() + 0x15BE5C4))(this, newName);
	}
	template <typename T = void> T RemoveLinkToStoreProduct() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE6D8))(this);
	}
	template <typename T = uintptr_t> T get_vIPPoints() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE6E4))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE76C))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(VIPDataEntity*, int32_t))(Il2CppBase() + 0x15BE778))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(VIPDataEntity*, int32_t))(Il2CppBase() + 0x15BE87C))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE980))(this);
	}
	template <typename T = uintptr_t> T get_vipBonuses() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE98C))(this);
	}
	template <typename T = bool> T get_hasVipBonuses() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE9F8))(this);
	}
	template <typename T = void> T AddVipBonuses(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(VIPDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15BEA04))(this, newList);
	}
	template <typename T = void> T ReplaceVipBonuses(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(VIPDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15BEAFC))(this, newList);
	}
	template <typename T = void> T RemoveVipBonuses() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEBF4))(this);
	}
	template <typename T = uintptr_t> T get_vipDataId() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEC00))(this);
	}
	template <typename T = bool> T get_hasVipDataId() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEC88))(this);
	}
	template <typename T = void> T AddVipDataId(int64_t newId) {
		return ((T (*)(VIPDataEntity*, int64_t))(Il2CppBase() + 0x15BDE2C))(this, newId);
	}
	template <typename T = void> T ReplaceVipDataId(int64_t newId) {
		return ((T (*)(VIPDataEntity*, int64_t))(Il2CppBase() + 0x15BEC94))(this, newId);
	}
	template <typename T = void> T RemoveVipDataId() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BED98))(this);
	}
	template <typename T = uintptr_t> T get_vipLevel() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEDA4))(this);
	}
	template <typename T = bool> T get_hasVipLevel() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEE2C))(this);
	}
	template <typename T = void> T AddVipLevel(int32_t newValue) {
		return ((T (*)(VIPDataEntity*, int32_t))(Il2CppBase() + 0x15BEE38))(this, newValue);
	}
	template <typename T = void> T ReplaceVipLevel(int32_t newValue) {
		return ((T (*)(VIPDataEntity*, int32_t))(Il2CppBase() + 0x15BEF3C))(this, newValue);
	}
	template <typename T = void> T RemoveVipLevel() {
		return ((T (*)(VIPDataEntity*))(Il2CppBase() + 0x15BF040))(this);
	}

};

}
