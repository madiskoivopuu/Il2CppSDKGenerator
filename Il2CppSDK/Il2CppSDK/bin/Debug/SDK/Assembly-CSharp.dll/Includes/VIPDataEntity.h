#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPDataEntity"));
	}


	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE12C))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE1B4))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(VIPDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15BE1C0))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(VIPDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x15BE2E8))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE410))(this);
	}
	template <typename R = LinkToStoreProductComponent*> R get_linkToStoreProduct() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE41C))(this);
	}
	template <typename R = bool> R get_hasLinkToStoreProduct() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE4A4))(this);
	}
	template <typename R = void> R AddLinkToStoreProduct(Il2CppString* newName) {
		return ((R (*)(VIPDataEntity*, Il2CppString*))(Il2CppBase() + 0x15BE4B0))(this, newName);
	}
	template <typename R = void> R ReplaceLinkToStoreProduct(Il2CppString* newName) {
		return ((R (*)(VIPDataEntity*, Il2CppString*))(Il2CppBase() + 0x15BE5C4))(this, newName);
	}
	template <typename R = void> R RemoveLinkToStoreProduct() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE6D8))(this);
	}
	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE6E4))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE76C))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(VIPDataEntity*, int32_t))(Il2CppBase() + 0x15BE778))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(VIPDataEntity*, int32_t))(Il2CppBase() + 0x15BE87C))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE980))(this);
	}
	template <typename R = VipBonusesComponent*> R get_vipBonuses() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE98C))(this);
	}
	template <typename R = bool> R get_hasVipBonuses() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BE9F8))(this);
	}
	template <typename R = void> R AddVipBonuses(Il2CppArray<VipBonus>* newList) {
		return ((R (*)(VIPDataEntity*, Il2CppArray<VipBonus>*))(Il2CppBase() + 0x15BEA04))(this, newList);
	}
	template <typename R = void> R ReplaceVipBonuses(Il2CppArray<VipBonus>* newList) {
		return ((R (*)(VIPDataEntity*, Il2CppArray<VipBonus>*))(Il2CppBase() + 0x15BEAFC))(this, newList);
	}
	template <typename R = void> R RemoveVipBonuses() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEBF4))(this);
	}
	template <typename R = VipDataIdComponent*> R get_vipDataId() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEC00))(this);
	}
	template <typename R = bool> R get_hasVipDataId() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEC88))(this);
	}
	template <typename R = void> R AddVipDataId(int64_t newId) {
		return ((R (*)(VIPDataEntity*, int64_t))(Il2CppBase() + 0x15BDE2C))(this, newId);
	}
	template <typename R = void> R ReplaceVipDataId(int64_t newId) {
		return ((R (*)(VIPDataEntity*, int64_t))(Il2CppBase() + 0x15BEC94))(this, newId);
	}
	template <typename R = void> R RemoveVipDataId() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BED98))(this);
	}
	template <typename R = VipLevelComponent*> R get_vipLevel() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEDA4))(this);
	}
	template <typename R = bool> R get_hasVipLevel() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BEE2C))(this);
	}
	template <typename R = void> R AddVipLevel(int32_t newValue) {
		return ((R (*)(VIPDataEntity*, int32_t))(Il2CppBase() + 0x15BEE38))(this, newValue);
	}
	template <typename R = void> R ReplaceVipLevel(int32_t newValue) {
		return ((R (*)(VIPDataEntity*, int32_t))(Il2CppBase() + 0x15BEF3C))(this, newValue);
	}
	template <typename R = void> R RemoveVipLevel() {
		return ((R (*)(VIPDataEntity*))(Il2CppBase() + 0x15BF040))(this);
	}

};

