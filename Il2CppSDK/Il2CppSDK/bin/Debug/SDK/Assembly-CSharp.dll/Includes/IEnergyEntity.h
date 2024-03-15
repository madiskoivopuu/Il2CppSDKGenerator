#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEnergyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEnergyEntity"));
	}


	template <typename R = EnergyComponent*> R get_energy() {
		return ((R (*)(IEnergyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEnergy() {
		return ((R (*)(IEnergyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEnergy(int64_t newTick) {
		return ((R (*)(IEnergyEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTick);
	}
	template <typename R = void> R ReplaceEnergy(int64_t newTick) {
		return ((R (*)(IEnergyEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTick);
	}
	template <typename R = void> R RemoveEnergy() {
		return ((R (*)(IEnergyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

