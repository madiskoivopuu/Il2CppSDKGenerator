#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIPocketsStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIPocketsStateComponent"));
	}

	template <typename R = PocketState*> R& Pocket1() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = PocketState*> R& Pocket2() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = PocketState*> R& Pocket3() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = PocketState*> R& Skill1() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = PocketState*> R& Skill2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = PocketState*> R& Skill3() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = PocketState*> R& Skill4() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = PocketState*> R& Skill5() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = PocketState*> R get_Item(int32_t inventoryIndex) {
		return ((R (*)(AIPocketsStateComponent*, int32_t))(Il2CppBase() + 0x1D96430))(this, inventoryIndex);
	}
	template <typename R = void> R set_Item(int32_t inventoryIndex, PocketState* value) {
		return ((R (*)(AIPocketsStateComponent*, int32_t, PocketState*))(Il2CppBase() + 0x1D9649C))(this, inventoryIndex, value);
	}
	template <typename R = void> R IncAttackCount() {
		return ((R (*)(AIPocketsStateComponent*))(Il2CppBase() + 0x1D96520))(this);
	}

};

