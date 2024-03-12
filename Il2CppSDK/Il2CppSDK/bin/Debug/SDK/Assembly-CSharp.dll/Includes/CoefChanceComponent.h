#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoefChanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoefChanceComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CoefChanceComponent*, uintptr_t))(Il2CppBase() + 0xE236AC))(this, target);
	}
	template <typename T = uintptr_t> T GetGroup() {
		return ((T (*)(CoefChanceComponent*))(Il2CppBase() + 0xE23750))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(CoefChanceComponent*))(Il2CppBase() + 0xE23758))(this);
	}

};

}
