#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeUpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpComponent"));
	}

	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Conditions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& ToItemName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SilverPrice() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Chance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GradeUpComponent*, uintptr_t))(Il2CppBase() + 0x12E21A8))(this, target);
	}
	template <typename T = void*> T CheckConditions(uintptr_t world, uintptr_t player) {
		return ((T (*)(GradeUpComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12E2298))(this, world, player);
	}
	template <typename T = bool> T CheckResources(uintptr_t world, uintptr_t player) {
		return ((T (*)(GradeUpComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12E23BC))(this, world, player);
	}
	template <typename T = bool> T CheckResourcesAndConditions(uintptr_t world, uintptr_t player) {
		return ((T (*)(GradeUpComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12E2404))(this, world, player);
	}

};

}
