#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingPocketComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingPocketComponent"));
	}

	template <typename T = Il2CppString*> T& Name1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Name3() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T get_Item(int8_t index) {
		return ((T (*)(ArmingPocketComponent*, int8_t))(Il2CppBase() + 0x1A57438))(this, index);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ArmingPocketComponent*, Il2CppObject*))(Il2CppBase() + 0x1A57478))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(ArmingPocketComponent*, Il2CppObject*))(Il2CppBase() + 0x1A57530))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ArmingPocketComponent*, uintptr_t))(Il2CppBase() + 0x1A57604))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ArmingPocketComponent*, uintptr_t))(Il2CppBase() + 0x1A576CC))(this, writer);
	}

};

