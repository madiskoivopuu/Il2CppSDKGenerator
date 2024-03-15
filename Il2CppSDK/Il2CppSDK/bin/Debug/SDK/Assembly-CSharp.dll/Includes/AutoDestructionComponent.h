#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoDestructionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoDestructionComponent"));
	}

	template <typename R = Il2CppString*> R& Effect() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Time() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AutoDestructionComponent*, Il2CppObject*))(Il2CppBase() + 0x1A6240C))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AutoDestructionComponent*, uintptr_t))(Il2CppBase() + 0x1A624C8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AutoDestructionComponent*, uintptr_t))(Il2CppBase() + 0x1A62530))(this, reader);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(AutoDestructionComponent*, Il2CppObject*))(Il2CppBase() + 0x1A62624))(this, blueprintComponent);
	}

};

