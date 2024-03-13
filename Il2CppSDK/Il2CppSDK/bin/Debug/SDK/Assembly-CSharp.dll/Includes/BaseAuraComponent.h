#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseAuraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseAuraComponent"));
	}

	template <typename T = Il2CppString*> T& ActiveCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = TargetsSelector*> T& Selector() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T ContainsMagic(Il2CppString* magicName) {
		return ((T (*)(BaseAuraComponent*, Il2CppString*))(Il2CppBase() + 0xFBC408))(this, magicName);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BaseAuraComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC4B8))(this, targetObject);
	}
	template <typename T = Il2CppString*> T GetMagicName(GameEntity* source, GameEntity* target, ICommonContexts* world) {
		return ((T (*)(BaseAuraComponent*, GameEntity*, GameEntity*, ICommonContexts*))(Il2CppBase() + 0xFBC580))(this, source, target, world);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseAuraComponent*, uintptr_t))(Il2CppBase() + 0xFBC630))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseAuraComponent*, uintptr_t))(Il2CppBase() + 0xFBC750))(this, writer);
	}

};

