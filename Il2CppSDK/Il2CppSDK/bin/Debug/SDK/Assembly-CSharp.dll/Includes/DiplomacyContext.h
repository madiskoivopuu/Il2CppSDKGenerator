#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "DiplomacyEntity.h" 

class DiplomacyContext : public BaseReplicatedContext1<DiplomacyEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FromClan() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ToClan() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Clans() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PvP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(DiplomacyContext*))(Il2CppBase() + 0x12FC948))(this);
	}
	template <typename R = Commands> R get_EntityCommand() {
		return ((R (*)(DiplomacyContext*))(Il2CppBase() + 0x12FC950))(this);
	}
	template <typename R = Commands> R get_ComponentCommand() {
		return ((R (*)(DiplomacyContext*))(Il2CppBase() + 0x12FC958))(this);
	}
	template <typename R = DiplomacyEntity*> R get_Item(int64_t id) {
		return ((R (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FD890))(this, id);
	}
	template <typename R = DiplomacyEntity*> R GetEntityWithId(int64_t Value) {
		return ((R (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FD894))(this, Value);
	}
	 HashSet1<DiplomacyEntity*>* GetEntitiesWithFromClanId(int64_t Value) {
		return ((HashSet1<DiplomacyEntity*>* (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FD970))(this, Value);
	}
	 HashSet1<DiplomacyEntity*>* GetEntitiesWithToClanId(int64_t Value) {
		return ((HashSet1<DiplomacyEntity*>* (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FDA30))(this, Value);
	}
	template <typename R = DiplomacyEntity*> R GetEntityWithClansId(int64_t Value1, int64_t Value2) {
		return ((R (*)(DiplomacyContext*, int64_t, int64_t))(Il2CppBase() + 0x12FDAF0))(this, Value1, Value2);
	}
	 HashSet1<DiplomacyEntity*>* GetEntitiesWithPvPId(int64_t Value) {
		return ((HashSet1<DiplomacyEntity*>* (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FDC00))(this, Value);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(DiplomacyContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12FDCC0))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(DiplomacyContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12FDDC8))(this, reader, entity);
	}

};

