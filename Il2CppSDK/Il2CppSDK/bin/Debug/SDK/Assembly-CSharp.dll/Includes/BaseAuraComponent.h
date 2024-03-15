#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseAuraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseAuraComponent"));
	}

	template <typename R = Il2CppString*> R& ActiveCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Item>*> R& List() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TargetsSelector*> R& Selector() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = bool> R ContainsMagic(Il2CppString* magicName) {
		return ((R (*)(BaseAuraComponent*, Il2CppString*))(Il2CppBase() + 0xFBC408))(this, magicName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseAuraComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC4B8))(this, targetObject);
	}
	template <typename R = Il2CppString*> R GetMagicName(GameEntity* source, GameEntity* target, ICommonContexts* world) {
		return ((R (*)(BaseAuraComponent*, GameEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0xFBC580))(this, source, target, world);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseAuraComponent*, uintptr_t))(Il2CppBase() + 0xFBC630))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseAuraComponent*, uintptr_t))(Il2CppBase() + 0xFBC750))(this, writer);
	}

};

