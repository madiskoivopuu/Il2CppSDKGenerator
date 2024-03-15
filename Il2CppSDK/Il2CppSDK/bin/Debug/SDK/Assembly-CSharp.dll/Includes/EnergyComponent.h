#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnergyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnergyComponent"));
	}

	template <typename R = int64_t> R& Tick() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(EnergyComponent*, Il2CppObject*))(Il2CppBase() + 0x1371314))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(EnergyComponent*, uintptr_t))(Il2CppBase() + 0x13713A8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(EnergyComponent*, uintptr_t))(Il2CppBase() + 0x13713CC))(this, reader);
	}

};

