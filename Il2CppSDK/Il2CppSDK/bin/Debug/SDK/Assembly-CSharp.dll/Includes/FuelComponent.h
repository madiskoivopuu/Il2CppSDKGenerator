#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelComponent"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(FuelComponent*, Il2CppObject*))(Il2CppBase() + 0x15FE644))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FuelComponent*, uintptr_t))(Il2CppBase() + 0x15FE6E8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FuelComponent*, uintptr_t))(Il2CppBase() + 0x15FE784))(this, writer);
	}

};

