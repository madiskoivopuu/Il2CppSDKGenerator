#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoFarmEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoFarmEntity"));
	}


	template <typename T = AutoFarmComponent*> T get_autoFarm() {
		return ((T (*)(IAutoFarmEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAutoFarm() {
		return ((T (*)(IAutoFarmEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAutoFarm(Il2CppArray<uintptr_t>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((T (*)(IAutoFarmEntity*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename T = void> T ReplaceAutoFarm(Il2CppArray<uintptr_t>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((T (*)(IAutoFarmEntity*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename T = void> T RemoveAutoFarm() {
		return ((T (*)(IAutoFarmEntity*))(Il2CppBase() + 0x0))(this);
	}

};

