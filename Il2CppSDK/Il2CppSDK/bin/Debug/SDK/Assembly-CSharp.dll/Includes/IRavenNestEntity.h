#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRavenNestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRavenNestEntity"));
	}


	template <typename R = RavenNestComponent*> R get_ravenNest() {
		return ((R (*)(IRavenNestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRavenNest() {
		return ((R (*)(IRavenNestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRavenNest(Il2CppArray<FuelItem>* newFuel) {
		return ((R (*)(IRavenNestEntity*, Il2CppArray<FuelItem>*))(Il2CppBase() + 0x0))(this, newFuel);
	}
	template <typename R = void> R ReplaceRavenNest(Il2CppArray<FuelItem>* newFuel) {
		return ((R (*)(IRavenNestEntity*, Il2CppArray<FuelItem>*))(Il2CppBase() + 0x0))(this, newFuel);
	}
	template <typename R = void> R RemoveRavenNest() {
		return ((R (*)(IRavenNestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

