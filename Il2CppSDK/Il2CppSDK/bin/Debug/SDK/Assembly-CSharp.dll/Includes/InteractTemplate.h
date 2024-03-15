#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractTemplate"));
	}

	template <typename R = ActionType> R& Action() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<NameChance>*> R& RequiredItem() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& RequiredCondition() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = InteractActionCondition> R& Condition() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& MinGrade() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& NoToolWarning() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& CanUseFromInventory() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(InteractTemplate*, Il2CppObject*))(Il2CppBase() + 0x146A880))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(InteractTemplate*, uintptr_t))(Il2CppBase() + 0x146A97C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(InteractTemplate*, uintptr_t))(Il2CppBase() + 0x146ACC8))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* targetObject) {
		return ((R (*)(InteractTemplate*, Il2CppObject*))(Il2CppBase() + 0x146AE0C))(this, targetObject);
	}

};

