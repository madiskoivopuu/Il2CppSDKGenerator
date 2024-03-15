#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class ClanContext : public BaseReplicatedContext1<ClanEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanContext"));
	}

	 PrimaryEntityIndex2ClanEntity*, int64_t>*& _idIndex() {
		return *(PrimaryEntityIndex2ClanEntity*, int64_t>**)((uintptr_t)this + 0xF8);
	}
	 PrimaryEntityIndex2ClanEntity*, int64_t>*& _leaderIndex() {
		return *(PrimaryEntityIndex2ClanEntity*, int64_t>**)((uintptr_t)this + 0x100);
	}
	 EntityIndex2ClanEntity*, int64_t>*& _pvpIndex() {
		return *(EntityIndex2ClanEntity*, int64_t>**)((uintptr_t)this + 0x108);
	}
	template <typename R = EntityBlueprint*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x110);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(ClanContext*))(Il2CppBase() + 0x157EE60))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(ClanContext*))(Il2CppBase() + 0x157EE68))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(ClanContext*))(Il2CppBase() + 0x157EE70))(this);
	}
	template <typename R = ClanEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157F8F4))(this, id);
	}
	template <typename R = ClanEntity*> R GetEntityWithLeaderId(int64_t id) {
		return ((R (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157F958))(this, id);
	}
	 HashSet1ClanEntity*>* GetEntitiesWithPvPId(int64_t pvpId) {
		return ((HashSet1ClanEntity*>* (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157F9BC))(this, pvpId);
	}
	template <typename R = ClanEntity*> R get_Item(int64_t id) {
		return ((R (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157FA20))(this, id);
	}
	template <typename R = ClanEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157FA5C))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(ClanContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x157FBD4))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(ClanContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x157FCDC))(this, reader, entity);
	}
	template <typename R = ClanEntity*> R get_avatarEntity() {
		return ((R (*)(ClanContext*))(Il2CppBase() + 0x157FDC8))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(ClanContext*))(Il2CppBase() + 0x1580020))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(ClanContext*, bool))(Il2CppBase() + 0x158003C))(this, value);
	}

};

