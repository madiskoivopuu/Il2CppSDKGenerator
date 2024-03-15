#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingPocketComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingPocketComponent"));
	}

	template <typename R = Il2CppString*> R& Name1() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name2() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Name3() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = Il2CppString*> R get_Item(int8_t index) {
		return ((R (*)(ArmingPocketComponent*, int8_t))(Il2CppBase() + 0x1A57438))(this, index);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ArmingPocketComponent*, Il2CppObject*))(Il2CppBase() + 0x1A57478))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ArmingPocketComponent*, Il2CppObject*))(Il2CppBase() + 0x1A57530))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ArmingPocketComponent*, uintptr_t))(Il2CppBase() + 0x1A57604))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ArmingPocketComponent*, uintptr_t))(Il2CppBase() + 0x1A576CC))(this, writer);
	}

};

