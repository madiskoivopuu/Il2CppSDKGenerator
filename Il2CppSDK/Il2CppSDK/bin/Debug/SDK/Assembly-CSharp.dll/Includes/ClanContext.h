#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class ClanContext : public BaseReplicatedContext1<ClanEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanContext"));
	}

	template <typename T = PrimaryEntityIndex2ClanEntity*, int64_t>*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = PrimaryEntityIndex2ClanEntity*, int64_t>*> T& _leaderIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = EntityIndex2ClanEntity*, int64_t>*> T& _pvpIndex() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = EntityBlueprint*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(ClanContext*))(Il2CppBase() + 0x157EE60))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(ClanContext*))(Il2CppBase() + 0x157EE68))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(ClanContext*))(Il2CppBase() + 0x157EE70))(this);
	}
	template <typename T = ClanEntity*> T GetEntityWithId(int64_t id) {
		return ((T (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157F8F4))(this, id);
	}
	template <typename T = ClanEntity*> T GetEntityWithLeaderId(int64_t id) {
		return ((T (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157F958))(this, id);
	}
	template <typename T = HashSet1ClanEntity*>*> T GetEntitiesWithPvPId(int64_t pvpId) {
		return ((T (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157F9BC))(this, pvpId);
	}
	template <typename T = ClanEntity*> T get_Item(int64_t id) {
		return ((T (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157FA20))(this, id);
	}
	template <typename T = ClanEntity*> T CreateEntityWithId(int64_t id) {
		return ((T (*)(ClanContext*, int64_t))(Il2CppBase() + 0x157FA5C))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(ClanContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x157FBD4))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(ClanContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x157FCDC))(this, reader, entity);
	}
	template <typename T = ClanEntity*> T get_avatarEntity() {
		return ((T (*)(ClanContext*))(Il2CppBase() + 0x157FDC8))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(ClanContext*))(Il2CppBase() + 0x1580020))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(ClanContext*, bool))(Il2CppBase() + 0x158003C))(this, value);
	}

};

