#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddChanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddChanceComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AddChanceComponent*, Il2CppObject*))(Il2CppBase() + 0x18AF404))(this, target);
	}
	template <typename R = ModifierGroup> R GetGroup() {
		return ((R (*)(AddChanceComponent*))(Il2CppBase() + 0x18AF4A8))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(AddChanceComponent*))(Il2CppBase() + 0x18AF4B0))(this);
	}

};

