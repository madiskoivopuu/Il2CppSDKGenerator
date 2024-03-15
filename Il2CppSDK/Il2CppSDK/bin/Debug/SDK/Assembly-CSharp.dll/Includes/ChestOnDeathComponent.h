#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestOnDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestOnDeathComponent"));
	}

	template <typename R = float> R& Chance() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Corpse() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& PersonalCorpse() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& FromInventory() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& Drop() {
		return *(R*)((uintptr_t)this + 0x31);
	}
	template <typename R = PersonalDrop*> R& AdditionalPersonalDrop() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ChestOnDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x17404D8))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(ChestOnDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x17405B8))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChestOnDeathComponent*, uintptr_t))(Il2CppBase() + 0x17406F0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChestOnDeathComponent*, uintptr_t))(Il2CppBase() + 0x174087C))(this, writer);
	}

};

