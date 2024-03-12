#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddChanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddChanceComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AddChanceComponent*, uintptr_t))(Il2CppBase() + 0x18AF404))(this, target);
	}
	template <typename T = uintptr_t> T GetGroup() {
		return ((T (*)(AddChanceComponent*))(Il2CppBase() + 0x18AF4A8))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(AddChanceComponent*))(Il2CppBase() + 0x18AF4B0))(this);
	}

};

}
