#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRavenNestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRavenNestEntity"));
	}


	template <typename T = RavenNestComponent*> T get_ravenNest() {
		return ((T (*)(IRavenNestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRavenNest() {
		return ((T (*)(IRavenNestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRavenNest(Il2CppArray<uintptr_t>* newFuel) {
		return ((T (*)(IRavenNestEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newFuel);
	}
	template <typename T = void> T ReplaceRavenNest(Il2CppArray<uintptr_t>* newFuel) {
		return ((T (*)(IRavenNestEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newFuel);
	}
	template <typename T = void> T RemoveRavenNest() {
		return ((T (*)(IRavenNestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

