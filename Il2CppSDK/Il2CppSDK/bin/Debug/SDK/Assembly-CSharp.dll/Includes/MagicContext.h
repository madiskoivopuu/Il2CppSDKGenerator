#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext2.h" 

class MagicContext : public NewBlueprintContext2<MagicEntity*, MagicDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicContext"));
	}

	template <typename T = Il2CppString*> static T& MagicCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SneakMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KnockdownMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FallenMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& InPvPMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstEnterGhostMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EnterGhostMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ChattingMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PriorityTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CoverMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TeamUnhiddenMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UnhiddenDamageMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DisableMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SneakDamageImmune_Magic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DontSkillInitCDMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DontDismountCDMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PrimaryEntityIndex2MagicEntity*, int32_t>*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _actorIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = EntityIndex2MagicEntity*, int64_t>*> T& _ownerIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _parentIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _targetIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _aliveOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _aliveWithIconOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _aliveWithItemDescriptionIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = EntityIndex2MagicEntity*, IntString*>*> T& _blueprintOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = EntityIndex2MagicEntity*, IntInt*>*> T& _withInventoryIndexOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = EntityIndex2MagicEntity*, IntString*>*> T& _withBlueprintAndActorIndex() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = PrimaryEntityIndex2MagicEntity*, IntLong*>*> T& _withVipOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _sneakOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _removeOnMoveOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = EntityIndex2MagicEntity*, int32_t>*> T& _permanentOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = IIdManager*> T& _idManager() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = MagicDataContext*> T& Data() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = IGroup1MagicEntity*>*> T& _aliveWithMagicIcon() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = IGroup1MagicEntity*>*> T& _aliveWithLocationPlayerMagic() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = IGroup1MagicEntity*>*> T& _withRemoveCondition() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = IGroup1MagicEntity*>*> T& _aliveAuras() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = IGroup1MagicEntity*>*> T& _aliveWithItemDescription() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = MagicDataContext*> T get_Data() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F55A0))(this);
	}
	template <typename T = void> T set_Data(MagicDataContext* value) {
		return ((T (*)(MagicContext*, MagicDataContext*))(Il2CppBase() + 0x11F55A8))(this, value);
	}
	template <typename T = int32_t> static T GetTargetId(MagicEntity* e, uintptr_t c) {
		return ((T (*)(void *, MagicEntity*, uintptr_t))(Il2CppBase() + 0x11F55B8))(0, e, c);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F5834))(this);
	}
	template <typename T = MagicEntity*> T GetEntityWithId(int32_t id) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F5BCC))(this, id);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetWithParent(int32_t parentId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F5DDC))(this, parentId);
	}
	template <typename T = bool> T HasWithParentOnTarget(int32_t parentId, Il2CppString* name, int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x11F6144))(this, parentId, name, targetId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetWithActor(int32_t actorId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F631C))(this, actorId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetWithOwner(int64_t ownerId) {
		return ((T (*)(MagicContext*, int64_t))(Il2CppBase() + 0x11F6684))(this, ownerId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F69EC))(this, targetId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetAliveOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F6CD4))(this, targetId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetAliveWithMagicIconOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F6F28))(this, targetId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetAliveWithItemDescription(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F7304))(this, targetId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetWithBlueprintOnTarget(int32_t targetId, Il2CppString* name) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x11F76E0))(this, targetId, name);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetWithInventoryIndexOnTarget(int32_t targetId, int32_t index) {
		return ((T (*)(MagicContext*, int32_t, int32_t))(Il2CppBase() + 0x11F7AE0))(this, targetId, index);
	}
	template <typename T = MagicEntity*> T GetFirstOnTarget(int32_t targetId, Il2CppString* name, bool alive) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F7EB4))(this, targetId, name, alive);
	}
	template <typename T = int32_t> T GetAliveWithBlueprintOnTargetCount(int32_t targetId, Il2CppString* name, bool useStackCount) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F8048))(this, targetId, name, useStackCount);
	}
	template <typename T = int32_t> T GetAliveWithTagOnTargetCount(int32_t targetId, Il2CppString* tag, bool useStackCount) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F81E4))(this, targetId, tag, useStackCount);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetWithBlueprintAndActor(int32_t actorId, Il2CppString* name) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x11F837C))(this, actorId, name);
	}
	template <typename T = MagicEntity*> T GetWithVipOnTarget(int32_t id, VipBonusType* type) {
		return ((T (*)(MagicContext*, int32_t, VipBonusType*))(Il2CppBase() + 0x11F8750))(this, id, type);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetSneakOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F8B24))(this, targetId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetRemoveOnMoveOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F8E4C))(this, targetId);
	}
	template <typename T = HashSet1MagicEntity*>*> T GetPermanentOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F9174))(this, targetId);
	}
	template <typename T = IGroup1MagicEntity*>*> T GetAliveWithMagicIcon() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F7098))(this);
	}
	template <typename T = IGroup1MagicEntity*>*> T GetAliveWithLocationPlayerMagic() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F949C))(this);
	}
	template <typename T = IGroup1MagicEntity*>*> T GetWithRemoveCondition() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F9708))(this);
	}
	template <typename T = IGroup1MagicEntity*>*> T GetAliveAuras() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F9A04))(this);
	}
	template <typename T = IGroup1MagicEntity*>*> T GetAliveWithItemDescription_1() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F7474))(this);
	}
	template <typename T = MagicEntity*> T UpdateMagic(int64_t updateTime, UpdateMagicData* data) {
		return ((T (*)(MagicContext*, int64_t, UpdateMagicData*))(Il2CppBase() + 0x11F9C70))(this, updateTime, data);
	}
	template <typename T = ValueTuple2MagicEntity*, bool>*> T CreateMagicFromData(int64_t updateTime, CreateMagicData* data) {
		return ((T (*)(MagicContext*, int64_t, CreateMagicData*))(Il2CppBase() + 0x11F9E1C))(this, updateTime, data);
	}
	template <typename T = MagicEntity*> T CreateOrExtendMagic(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, GameEntity* actor) {
		return ((T (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FA510))(this, world, magicName, target, actor);
	}
	template <typename T = void> T CreateOrExtendMagic_1(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, Nullable1int64_t>* teamId, Nullable1float>* duration) {
		return ((T (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, Nullable1int64_t>*, Nullable1float>*))(Il2CppBase() + 0x11FB198))(this, world, magicName, target, teamId, duration);
	}
	template <typename T = MagicEntity*> T CreateMagic(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, GameEntity* actor) {
		return ((T (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FA944))(this, world, magicName, target, actor);
	}
	template <typename T = void> T SetupDamage(ICommonContexts* world, MagicEntity* magicEntity, MagicDataEntity* magicDataEntity, GameEntity* target, GameEntity* actor) {
		return ((T (*)(MagicContext*, ICommonContexts*, MagicEntity*, MagicDataEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FC01C))(this, world, magicEntity, magicDataEntity, target, actor);
	}
	template <typename T = MagicEntity*> T CreateMagicWithParent(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, MagicEntity* parentMagic, GameEntity* source) {
		return ((T (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, MagicEntity*, GameEntity*))(Il2CppBase() + 0x11FC648))(this, world, magicName, target, parentMagic, source);
	}
	template <typename T = MagicEntity*> T CreateMagicFromParent(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, MagicEntity* parentMagic, GameEntity* source) {
		return ((T (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, MagicEntity*, GameEntity*))(Il2CppBase() + 0x11FC69C))(this, world, magicName, target, parentMagic, source);
	}
	template <typename T = MagicEntity*> T DistributeMagic(ICommonContexts* world, MagicEntity* sourceMagic, GameEntity* target, GameEntity* source) {
		return ((T (*)(MagicContext*, ICommonContexts*, MagicEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FD2A8))(this, world, sourceMagic, target, source);
	}
	template <typename T = MagicEntity*> T CreateMagicWithParent_1(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, GameEntity* parent) {
		return ((T (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FD610))(this, world, magicName, target, parent);
	}
	template <typename T = GameEntity*> T CreateMagicCenterFromTarget(ICommonContexts* world, MagicEntity* magic, GameEntity* target) {
		return ((T (*)(MagicContext*, ICommonContexts*, MagicEntity*, GameEntity*))(Il2CppBase() + 0x11FBA1C))(this, world, magic, target);
	}
	template <typename T = void> T SetKnockdown(ICommonContexts* world, GameEntity* target, bool value) {
		return ((T (*)(MagicContext*, ICommonContexts*, GameEntity*, bool))(Il2CppBase() + 0x11FDBA4))(this, world, target, value);
	}
	template <typename T = void> T EnableGhost(ICommonContexts* world, GameEntity* target, bool firstEnter) {
		return ((T (*)(MagicContext*, ICommonContexts*, GameEntity*, bool))(Il2CppBase() + 0x11FE268))(this, world, target, firstEnter);
	}
	template <typename T = void> T SetDisabled(ICommonContexts* contexts, GameEntity* target, bool isDisabled) {
		return ((T (*)(MagicContext*, ICommonContexts*, GameEntity*, bool))(Il2CppBase() + 0x11FE348))(this, contexts, target, isDisabled);
	}
	template <typename T = void> T SetChatting(ICommonContexts* contexts, GameEntity* target, bool chatting) {
		return ((T (*)(MagicContext*, ICommonContexts*, GameEntity*, bool))(Il2CppBase() + 0x11FE428))(this, contexts, target, chatting);
	}
	template <typename T = bool> T IsPriorityTargetFor(int32_t actorId, GameEntity* target) {
		return ((T (*)(MagicContext*, int32_t, GameEntity*))(Il2CppBase() + 0x11FE514))(this, actorId, target);
	}
	template <typename T = int32_t> T GetPriorityTargetFor(int32_t actorId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11FE71C))(this, actorId);
	}
	template <typename T = MagicEntity*> T SetPriorityTarget(ICommonContexts* contexts, GameEntity* actor, GameEntity* target) {
		return ((T (*)(MagicContext*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FE908))(this, contexts, actor, target);
	}
	template <typename T = void> T RemovePriorityTarget(int32_t actorId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11FED5C))(this, actorId);
	}
	template <typename T = bool> T UnderCover(ICommonContexts* contexts, GameEntity* target) {
		return ((T (*)(MagicContext*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x11FEDC4))(this, contexts, target);
	}
	template <typename T = void> T Cover(ICommonContexts* contexts, GameEntity* target) {
		return ((T (*)(MagicContext*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x11FEE60))(this, contexts, target);
	}
	template <typename T = MagicEntity*> T ApplySneakDamageImmune(ICommonContexts* contexts, GameEntity* target) {
		return ((T (*)(MagicContext*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x11FEF18))(this, contexts, target);
	}
	template <typename T = void> T RemoveCover(GameEntity* target) {
		return ((T (*)(MagicContext*, GameEntity*))(Il2CppBase() + 0x11FEFE8))(this, target);
	}
	template <typename T = int32_t> T ConsumeMagics(int32_t targetId, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(MagicContext*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11FF338))(this, targetId, items);
	}
	template <typename T = int32_t> T GetMagicsCount(int32_t targetId, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(MagicContext*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11FF7D4))(this, targetId, items);
	}
	template <typename T = bool> T Remove(HashSet1MagicEntity*>* magics, Predicate1MagicEntity*>* predicate) {
		return ((T (*)(MagicContext*, HashSet1MagicEntity*>*, Predicate1MagicEntity*>*))(Il2CppBase() + 0x11FDDD8))(this, magics, predicate);
	}
	template <typename T = void> T RemoveAllMagicFromTarget(int32_t targetId, bool onlyRemovable) {
		return ((T (*)(MagicContext*, int32_t, bool))(Il2CppBase() + 0x11FF8E4))(this, targetId, onlyRemovable);
	}
	template <typename T = bool> T ChangeDurationByLostHp(int32_t targetId, ICommonContexts* world, EventEntity* damageEvent) {
		return ((T (*)(MagicContext*, int32_t, ICommonContexts*, EventEntity*))(Il2CppBase() + 0x11FFC64))(this, targetId, world, damageEvent);
	}
	template <typename T = void> T RemoveAllDebuffFromTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x12002F8))(this, targetId);
	}
	template <typename T = void> T ClearModifiers(uintptr_t target) {
		return ((T (*)(MagicContext*, uintptr_t))(Il2CppBase() + 0x1200690))(this, target);
	}

};

