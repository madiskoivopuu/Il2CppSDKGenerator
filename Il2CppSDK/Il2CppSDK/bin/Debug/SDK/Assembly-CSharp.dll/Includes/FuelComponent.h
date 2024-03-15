#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelComponent"));
	}

	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Time() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(FuelComponent*, Il2CppObject*))(Il2CppBase() + 0x15FE644))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FuelComponent*, uintptr_t))(Il2CppBase() + 0x15FE6E8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FuelComponent*, uintptr_t))(Il2CppBase() + 0x15FE784))(this, writer);
	}

};

