#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnergyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnergyComponent"));
	}

	template <typename T = int64_t> T& Tick() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(EnergyComponent*, Il2CppObject*))(Il2CppBase() + 0x1371314))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(EnergyComponent*, uintptr_t))(Il2CppBase() + 0x13713A8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(EnergyComponent*, uintptr_t))(Il2CppBase() + 0x13713CC))(this, reader);
	}

};

