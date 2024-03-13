#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEnergyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEnergyEntity"));
	}


	template <typename T = EnergyComponent*> T get_energy() {
		return ((T (*)(IEnergyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEnergy() {
		return ((T (*)(IEnergyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEnergy(int64_t newTick) {
		return ((T (*)(IEnergyEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTick);
	}
	template <typename T = void> T ReplaceEnergy(int64_t newTick) {
		return ((T (*)(IEnergyEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTick);
	}
	template <typename T = void> T RemoveEnergy() {
		return ((T (*)(IEnergyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

