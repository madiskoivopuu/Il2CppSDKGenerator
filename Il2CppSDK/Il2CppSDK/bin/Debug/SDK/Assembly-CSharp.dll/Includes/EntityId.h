#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityId
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityId"));
	}

	template <typename R = int32_t> R& _id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = EntityTypes*> R& _type() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = int32_t> R get_Id() {
		return ((R (*)(EntityId*))(Il2CppBase() + 0x1373F08))(this);
	}
	template <typename R = EntityTypes*> R get_Type() {
		return ((R (*)(EntityId*))(Il2CppBase() + 0x1373F10))(this);
	}
	template <typename R = IIdEntity*> R ToEntity(ICommonContexts* world) {
		return ((R (*)(EntityId*, ICommonContexts*))(Il2CppBase() + 0x1373FA0))(this, world);
	}
	template <typename R = MagicEntity*> R ToMagicEntity(ICommonContexts* world) {
		return ((R (*)(EntityId*, ICommonContexts*))(Il2CppBase() + 0x13741AC))(this, world);
	}
	template <typename R = GameEntity*> R ToGameEntity(ICommonContexts* world) {
		return ((R (*)(EntityId*, ICommonContexts*))(Il2CppBase() + 0x1374298))(this, world);
	}
	template <typename R = bool> R Equals(EntityId* other) {
		return ((R (*)(EntityId*, EntityId*))(Il2CppBase() + 0x1374384))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(EntityId*, Il2CppObject*))(Il2CppBase() + 0x13743AC))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(EntityId*))(Il2CppBase() + 0x1374440))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x1374478))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x1374520))(this, writer);
	}

};

