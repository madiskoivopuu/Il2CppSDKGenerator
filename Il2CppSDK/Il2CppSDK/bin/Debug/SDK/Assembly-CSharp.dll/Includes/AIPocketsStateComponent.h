#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIPocketsStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIPocketsStateComponent"));
	}

	template <typename T = uintptr_t> T& Pocket1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Pocket2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Pocket3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Skill1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Skill2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Skill3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Skill4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Skill5() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_Item(int32_t inventoryIndex) {
		return ((T (*)(AIPocketsStateComponent*, int32_t))(Il2CppBase() + 0x1D96430))(this, inventoryIndex);
	}
	template <typename T = void> T set_Item(int32_t inventoryIndex, uintptr_t value) {
		return ((T (*)(AIPocketsStateComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x1D9649C))(this, inventoryIndex, value);
	}
	template <typename T = void> T IncAttackCount() {
		return ((T (*)(AIPocketsStateComponent*))(Il2CppBase() + 0x1D96520))(this);
	}

};

}
