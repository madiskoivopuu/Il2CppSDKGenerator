#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoFarmEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoFarmEntity"));
	}


	template <typename R = AutoFarmComponent*> R get_autoFarm() {
		return ((R (*)(IAutoFarmEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAutoFarm() {
		return ((R (*)(IAutoFarmEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAutoFarm(Il2CppArray<PriceItem>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((R (*)(IAutoFarmEntity*, Il2CppArray<PriceItem>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename R = void> R ReplaceAutoFarm(Il2CppArray<PriceItem>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((R (*)(IAutoFarmEntity*, Il2CppArray<PriceItem>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename R = void> R RemoveAutoFarm() {
		return ((R (*)(IAutoFarmEntity*))(Il2CppBase() + 0x0))(this);
	}

};

