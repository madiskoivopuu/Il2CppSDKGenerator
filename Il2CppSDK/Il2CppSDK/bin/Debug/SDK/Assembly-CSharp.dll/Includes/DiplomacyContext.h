#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class DiplomacyContext : public BaseReplicatedContext1<DiplomacyEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FromClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ToClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Clans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(DiplomacyContext*))(Il2CppBase() + 0x12FC948))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(DiplomacyContext*))(Il2CppBase() + 0x12FC950))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(DiplomacyContext*))(Il2CppBase() + 0x12FC958))(this);
	}
	template <typename T = DiplomacyEntity*> T get_Item(int64_t id) {
		return ((T (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FD890))(this, id);
	}
	template <typename T = DiplomacyEntity*> T GetEntityWithId(int64_t Value) {
		return ((T (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FD894))(this, Value);
	}
	template <typename T = HashSet1DiplomacyEntity*>*> T GetEntitiesWithFromClanId(int64_t Value) {
		return ((T (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FD970))(this, Value);
	}
	template <typename T = HashSet1DiplomacyEntity*>*> T GetEntitiesWithToClanId(int64_t Value) {
		return ((T (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FDA30))(this, Value);
	}
	template <typename T = DiplomacyEntity*> T GetEntityWithClansId(int64_t Value1, int64_t Value2) {
		return ((T (*)(DiplomacyContext*, int64_t, int64_t))(Il2CppBase() + 0x12FDAF0))(this, Value1, Value2);
	}
	template <typename T = HashSet1DiplomacyEntity*>*> T GetEntitiesWithPvPId(int64_t Value) {
		return ((T (*)(DiplomacyContext*, int64_t))(Il2CppBase() + 0x12FDC00))(this, Value);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(DiplomacyContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12FDCC0))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(DiplomacyContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x12FDDC8))(this, reader, entity);
	}

};

