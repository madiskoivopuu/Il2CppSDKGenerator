#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorComponent"));
	}

	template <typename R = Il2CppString*> R& BoolName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& IntName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& IntValue() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& IntRange() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = Il2CppString*> R& TriggerName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = float> R& Trigger() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& HideWeapon() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = bool> R& HideTool() {
		return *(R*)((uintptr_t)this + 0x3D);
	}
	template <typename R = bool> R& RestoreWeapon() {
		return *(R*)((uintptr_t)this + 0x3E);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AnimatorComponent*, Il2CppObject*))(Il2CppBase() + 0x188C750))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(AnimatorComponent*, Il2CppObject*))(Il2CppBase() + 0x188C84C))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AnimatorComponent*, uintptr_t))(Il2CppBase() + 0x188C9C8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AnimatorComponent*, uintptr_t))(Il2CppBase() + 0x188CBC4))(this, writer);
	}

};

