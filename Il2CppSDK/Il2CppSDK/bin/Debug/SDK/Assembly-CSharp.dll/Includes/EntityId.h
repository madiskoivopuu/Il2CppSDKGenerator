#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityId
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityId"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(EntityId*))(Il2CppBase() + 0x1373F08))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(EntityId*))(Il2CppBase() + 0x1373F10))(this);
	}
	template <typename T = uintptr_t> T ToEntity(uintptr_t world) {
		return ((T (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x1373FA0))(this, world);
	}
	template <typename T = uintptr_t> T ToMagicEntity(uintptr_t world) {
		return ((T (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x13741AC))(this, world);
	}
	template <typename T = uintptr_t> T ToGameEntity(uintptr_t world) {
		return ((T (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x1374298))(this, world);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x1374384))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x13743AC))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EntityId*))(Il2CppBase() + 0x1374440))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x1374478))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(EntityId*, uintptr_t))(Il2CppBase() + 0x1374520))(this, writer);
	}

};

}
