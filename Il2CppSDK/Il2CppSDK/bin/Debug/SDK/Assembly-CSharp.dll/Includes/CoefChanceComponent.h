#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoefChanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoefChanceComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CoefChanceComponent*, Il2CppObject*))(Il2CppBase() + 0xE236AC))(this, target);
	}
	template <typename R = ModifierGroup*> R GetGroup() {
		return ((R (*)(CoefChanceComponent*))(Il2CppBase() + 0xE23750))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(CoefChanceComponent*))(Il2CppBase() + 0xE23758))(this);
	}

};

