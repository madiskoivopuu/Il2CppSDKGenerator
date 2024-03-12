#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorComponent"));
	}

	template <typename T = Il2CppString*> T& BoolName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& IntName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& IntValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& IntRange() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& TriggerName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Trigger() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& HideWeapon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& HideTool() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& RestoreWeapon() {
		return *(T*)((uintptr_t)this + 0x3E);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AnimatorComponent*, uintptr_t))(Il2CppBase() + 0x188C750))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(AnimatorComponent*, uintptr_t))(Il2CppBase() + 0x188C84C))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AnimatorComponent*, uintptr_t))(Il2CppBase() + 0x188C9C8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AnimatorComponent*, uintptr_t))(Il2CppBase() + 0x188CBC4))(this, writer);
	}

};

}
