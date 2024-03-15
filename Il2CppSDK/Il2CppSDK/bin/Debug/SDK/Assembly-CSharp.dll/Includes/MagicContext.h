#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext2.h" 
#include "MagicEntity.h" 
#include "MagicDataEntity.h" 

class MagicContext : public NewBlueprintContext2<MagicEntity*, MagicDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicContext"));
	}

	template <typename R = Il2CppString*> static R& MagicCenter() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SneakMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& KnockdownMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FallenMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& InPvPMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FirstEnterGhostMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& EnterGhostMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ChattingMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PriorityTargetMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CoverMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& TeamUnhiddenMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& UnhiddenDamageMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DisableMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SneakDamageImmune_Magic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DontSkillInitCDMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DontDismountCDMagic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 PrimaryEntityIndex2<MagicEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x110);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _actorIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x118);
	}
	 EntityIndex2<MagicEntity*, int64_t>*& _ownerIndex() {
		return *(EntityIndex2<MagicEntity*, int64_t>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _parentIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _targetIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _aliveOnTargetIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _aliveWithIconOnTargetIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x140);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _aliveWithItemDescriptionIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x148);
	}
	 EntityIndex2<MagicEntity*, IntString>*& _blueprintOnTargetIndex() {
		return *(EntityIndex2<MagicEntity*, IntString>**)((uintptr_t)this + 0x150);
	}
	 EntityIndex2<MagicEntity*, IntInt>*& _withInventoryIndexOnTargetIndex() {
		return *(EntityIndex2<MagicEntity*, IntInt>**)((uintptr_t)this + 0x158);
	}
	 EntityIndex2<MagicEntity*, IntString>*& _withBlueprintAndActorIndex() {
		return *(EntityIndex2<MagicEntity*, IntString>**)((uintptr_t)this + 0x160);
	}
	 PrimaryEntityIndex2<MagicEntity*, IntLong>*& _withVipOnTargetIndex() {
		return *(PrimaryEntityIndex2<MagicEntity*, IntLong>**)((uintptr_t)this + 0x168);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _sneakOnTargetIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x170);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _removeOnMoveOnTargetIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x178);
	}
	 EntityIndex2<MagicEntity*, int32_t>*& _permanentOnTargetIndex() {
		return *(EntityIndex2<MagicEntity*, int32_t>**)((uintptr_t)this + 0x180);
	}
	template <typename R = IIdManager*> R& _idManager() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = MagicDataContext*> R& Data() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	 IGroup1<MagicEntity*>*& _aliveWithMagicIcon() {
		return *(IGroup1<MagicEntity*>**)((uintptr_t)this + 0x198);
	}
	 IGroup1<MagicEntity*>*& _aliveWithLocationPlayerMagic() {
		return *(IGroup1<MagicEntity*>**)((uintptr_t)this + 0x1A0);
	}
	 IGroup1<MagicEntity*>*& _withRemoveCondition() {
		return *(IGroup1<MagicEntity*>**)((uintptr_t)this + 0x1A8);
	}
	 IGroup1<MagicEntity*>*& _aliveAuras() {
		return *(IGroup1<MagicEntity*>**)((uintptr_t)this + 0x1B0);
	}
	 IGroup1<MagicEntity*>*& _aliveWithItemDescription() {
		return *(IGroup1<MagicEntity*>**)((uintptr_t)this + 0x1B8);
	}

	template <typename R = MagicDataContext*> R get_Data() {
		return ((R (*)(MagicContext*))(Il2CppBase() + 0x11F55A0))(this);
	}
	template <typename R = void> R set_Data(MagicDataContext* value) {
		return ((R (*)(MagicContext*, MagicDataContext*))(Il2CppBase() + 0x11F55A8))(this, value);
	}
	template <typename R = int32_t> static R GetTargetId(MagicEntity* e, uintptr_t c) {
		return ((R (*)(void *, MagicEntity*, uintptr_t))(Il2CppBase() + 0x11F55B8))(0, e, c);
	}
	template <typename R = void> R OnReset() {
		return ((R (*)(MagicContext*))(Il2CppBase() + 0x11F5834))(this);
	}
	template <typename R = MagicEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F5BCC))(this, id);
	}
	 HashSet1<MagicEntity*>* GetWithParent(int32_t parentId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F5DDC))(this, parentId);
	}
	template <typename R = bool> R HasWithParentOnTarget(int32_t parentId, Il2CppString* name, int32_t targetId) {
		return ((R (*)(MagicContext*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x11F6144))(this, parentId, name, targetId);
	}
	 HashSet1<MagicEntity*>* GetWithActor(int32_t actorId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F631C))(this, actorId);
	}
	 HashSet1<MagicEntity*>* GetWithOwner(int64_t ownerId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int64_t))(Il2CppBase() + 0x11F6684))(this, ownerId);
	}
	 HashSet1<MagicEntity*>* GetOnTarget(int32_t targetId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F69EC))(this, targetId);
	}
	 HashSet1<MagicEntity*>* GetAliveOnTarget(int32_t targetId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F6CD4))(this, targetId);
	}
	 HashSet1<MagicEntity*>* GetAliveWithMagicIconOnTarget(int32_t targetId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F6F28))(this, targetId);
	}
	 HashSet1<MagicEntity*>* GetAliveWithItemDescription(int32_t targetId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F7304))(this, targetId);
	}
	 HashSet1<MagicEntity*>* GetWithBlueprintOnTarget(int32_t targetId, Il2CppString* name) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x11F76E0))(this, targetId, name);
	}
	 HashSet1<MagicEntity*>* GetWithInventoryIndexOnTarget(int32_t targetId, int32_t index) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t, int32_t))(Il2CppBase() + 0x11F7AE0))(this, targetId, index);
	}
	template <typename R = MagicEntity*> R GetFirstOnTarget(int32_t targetId, Il2CppString* name, bool alive) {
		return ((R (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F7EB4))(this, targetId, name, alive);
	}
	template <typename R = int32_t> R GetAliveWithBlueprintOnTargetCount(int32_t targetId, Il2CppString* name, bool useStackCount) {
		return ((R (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F8048))(this, targetId, name, useStackCount);
	}
	template <typename R = int32_t> R GetAliveWithTagOnTargetCount(int32_t targetId, Il2CppString* tag, bool useStackCount) {
		return ((R (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F81E4))(this, targetId, tag, useStackCount);
	}
	 HashSet1<MagicEntity*>* GetWithBlueprintAndActor(int32_t actorId, Il2CppString* name) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x11F837C))(this, actorId, name);
	}
	template <typename R = MagicEntity*> R GetWithVipOnTarget(int32_t id, VipBonusType type) {
		return ((R (*)(MagicContext*, int32_t, VipBonusType))(Il2CppBase() + 0x11F8750))(this, id, type);
	}
	 HashSet1<MagicEntity*>* GetSneakOnTarget(int32_t targetId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F8B24))(this, targetId);
	}
	 HashSet1<MagicEntity*>* GetRemoveOnMoveOnTarget(int32_t targetId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F8E4C))(this, targetId);
	}
	 HashSet1<MagicEntity*>* GetPermanentOnTarget(int32_t targetId) {
		return ((HashSet1<MagicEntity*>* (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F9174))(this, targetId);
	}
	 IGroup1<MagicEntity*>* GetAliveWithMagicIcon() {
		return ((IGroup1<MagicEntity*>* (*)(MagicContext*))(Il2CppBase() + 0x11F7098))(this);
	}
	 IGroup1<MagicEntity*>* GetAliveWithLocationPlayerMagic() {
		return ((IGroup1<MagicEntity*>* (*)(MagicContext*))(Il2CppBase() + 0x11F949C))(this);
	}
	 IGroup1<MagicEntity*>* GetWithRemoveCondition() {
		return ((IGroup1<MagicEntity*>* (*)(MagicContext*))(Il2CppBase() + 0x11F9708))(this);
	}
	 IGroup1<MagicEntity*>* GetAliveAuras() {
		return ((IGroup1<MagicEntity*>* (*)(MagicContext*))(Il2CppBase() + 0x11F9A04))(this);
	}
	 IGroup1<MagicEntity*>* GetAliveWithItemDescription_1() {
		return ((IGroup1<MagicEntity*>* (*)(MagicContext*))(Il2CppBase() + 0x11F7474))(this);
	}
	template <typename R = MagicEntity*> R UpdateMagic(int64_t updateTime, UpdateMagicData data) {
		return ((R (*)(MagicContext*, int64_t, UpdateMagicData))(Il2CppBase() + 0x11F9C70))(this, updateTime, data);
	}
	 ValueTuple2<MagicEntity*, bool>* CreateMagicFromData(int64_t updateTime, CreateMagicData data) {
		return ((ValueTuple2<MagicEntity*, bool>* (*)(MagicContext*, int64_t, CreateMagicData))(Il2CppBase() + 0x11F9E1C))(this, updateTime, data);
	}
	template <typename R = MagicEntity*> R CreateOrExtendMagic(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, GameEntity* actor) {
		return ((R (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FA510))(this, world, magicName, target, actor);
	}
	template <typename R = void> R CreateOrExtendMagic_1(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, Nullable1<int64_t>* teamId, Nullable1<float>* duration) {
		return ((R (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, Nullable1<int64_t>*, Nullable1<float>*))(Il2CppBase() + 0x11FB198))(this, world, magicName, target, teamId, duration);
	}
	template <typename R = MagicEntity*> R CreateMagic(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, GameEntity* actor) {
		return ((R (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FA944))(this, world, magicName, target, actor);
	}
	template <typename R = void> R SetupDamage(ICommonContexts* world, MagicEntity* magicEntity, MagicDataEntity* magicDataEntity, GameEntity* target, GameEntity* actor) {
		return ((R (*)(MagicContext*, ICommonContexts*, MagicEntity*, MagicDataEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FC01C))(this, world, magicEntity, magicDataEntity, target, actor);
	}
	template <typename R = MagicEntity*> R CreateMagicWithParent(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, MagicEntity* parentMagic, GameEntity* source) {
		return ((R (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, MagicEntity*, GameEntity*))(Il2CppBase() + 0x11FC648))(this, world, magicName, target, parentMagic, source);
	}
	template <typename R = MagicEntity*> R CreateMagicFromParent(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, MagicEntity* parentMagic, GameEntity* source) {
		return ((R (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, MagicEntity*, GameEntity*))(Il2CppBase() + 0x11FC69C))(this, world, magicName, target, parentMagic, source);
	}
	template <typename R = MagicEntity*> R DistributeMagic(ICommonContexts* world, MagicEntity* sourceMagic, GameEntity* target, GameEntity* source) {
		return ((R (*)(MagicContext*, ICommonContexts*, MagicEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FD2A8))(this, world, sourceMagic, target, source);
	}
	template <typename R = MagicEntity*> R CreateMagicWithParent_1(ICommonContexts* world, Il2CppString* magicName, GameEntity* target, GameEntity* parent) {
		return ((R (*)(MagicContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FD610))(this, world, magicName, target, parent);
	}
	template <typename R = GameEntity*> R CreateMagicCenterFromTarget(ICommonContexts* world, MagicEntity* magic, GameEntity* target) {
		return ((R (*)(MagicContext*, ICommonContexts*, MagicEntity*, GameEntity*))(Il2CppBase() + 0x11FBA1C))(this, world, magic, target);
	}
	template <typename R = void> R SetKnockdown(ICommonContexts* world, GameEntity* target, bool value) {
		return ((R (*)(MagicContext*, ICommonContexts*, GameEntity*, bool))(Il2CppBase() + 0x11FDBA4))(this, world, target, value);
	}
	template <typename R = void> R EnableGhost(ICommonContexts* world, GameEntity* target, bool firstEnter) {
		return ((R (*)(MagicContext*, ICommonContexts*, GameEntity*, bool))(Il2CppBase() + 0x11FE268))(this, world, target, firstEnter);
	}
	template <typename R = void> R SetDisabled(ICommonContexts* contexts, GameEntity* target, bool isDisabled) {
		return ((R (*)(MagicContext*, ICommonContexts*, GameEntity*, bool))(Il2CppBase() + 0x11FE348))(this, contexts, target, isDisabled);
	}
	template <typename R = void> R SetChatting(ICommonContexts* contexts, GameEntity* target, bool chatting) {
		return ((R (*)(MagicContext*, ICommonContexts*, GameEntity*, bool))(Il2CppBase() + 0x11FE428))(this, contexts, target, chatting);
	}
	template <typename R = bool> R IsPriorityTargetFor(int32_t actorId, GameEntity* target) {
		return ((R (*)(MagicContext*, int32_t, GameEntity*))(Il2CppBase() + 0x11FE514))(this, actorId, target);
	}
	template <typename R = int32_t> R GetPriorityTargetFor(int32_t actorId) {
		return ((R (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11FE71C))(this, actorId);
	}
	template <typename R = MagicEntity*> R SetPriorityTarget(ICommonContexts* contexts, GameEntity* actor, GameEntity* target) {
		return ((R (*)(MagicContext*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x11FE908))(this, contexts, actor, target);
	}
	template <typename R = void> R RemovePriorityTarget(int32_t actorId) {
		return ((R (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11FED5C))(this, actorId);
	}
	template <typename R = bool> R UnderCover(ICommonContexts* contexts, GameEntity* target) {
		return ((R (*)(MagicContext*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x11FEDC4))(this, contexts, target);
	}
	template <typename R = void> R Cover(ICommonContexts* contexts, GameEntity* target) {
		return ((R (*)(MagicContext*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x11FEE60))(this, contexts, target);
	}
	template <typename R = MagicEntity*> R ApplySneakDamageImmune(ICommonContexts* contexts, GameEntity* target) {
		return ((R (*)(MagicContext*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x11FEF18))(this, contexts, target);
	}
	template <typename R = void> R RemoveCover(GameEntity* target) {
		return ((R (*)(MagicContext*, GameEntity*))(Il2CppBase() + 0x11FEFE8))(this, target);
	}
	template <typename R = int32_t> R ConsumeMagics(int32_t targetId, Il2CppArray<Item>* items) {
		return ((R (*)(MagicContext*, int32_t, Il2CppArray<Item>*))(Il2CppBase() + 0x11FF338))(this, targetId, items);
	}
	template <typename R = int32_t> R GetMagicsCount(int32_t targetId, Il2CppArray<Item>* items) {
		return ((R (*)(MagicContext*, int32_t, Il2CppArray<Item>*))(Il2CppBase() + 0x11FF7D4))(this, targetId, items);
	}
	template <typename R = bool> R Remove(HashSet1<MagicEntity*>* magics, Predicate1<MagicEntity*>* predicate) {
		return ((R (*)(MagicContext*, HashSet1<MagicEntity*>*, Predicate1<MagicEntity*>*))(Il2CppBase() + 0x11FDDD8))(this, magics, predicate);
	}
	template <typename R = void> R RemoveAllMagicFromTarget(int32_t targetId, bool onlyRemovable) {
		return ((R (*)(MagicContext*, int32_t, bool))(Il2CppBase() + 0x11FF8E4))(this, targetId, onlyRemovable);
	}
	template <typename R = bool> R ChangeDurationByLostHp(int32_t targetId, ICommonContexts* world, EventEntity* damageEvent) {
		return ((R (*)(MagicContext*, int32_t, ICommonContexts*, EventEntity*))(Il2CppBase() + 0x11FFC64))(this, targetId, world, damageEvent);
	}
	template <typename R = void> R RemoveAllDebuffFromTarget(int32_t targetId) {
		return ((R (*)(MagicContext*, int32_t))(Il2CppBase() + 0x12002F8))(this, targetId);
	}
	template <typename R = void> R ClearModifiers(uintptr_t target) {
		return ((R (*)(MagicContext*, uintptr_t))(Il2CppBase() + 0x1200690))(this, target);
	}

};

