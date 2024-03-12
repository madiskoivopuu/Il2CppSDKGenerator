#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext`2" 

class MagicContext: NewBlueprintContext2
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
	template <typename T = void*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& _actorIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _ownerIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> T& _parentIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> T& _targetIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> T& _aliveOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = void*> T& _aliveWithIconOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = void*> T& _aliveWithItemDescriptionIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = void*> T& _blueprintOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = void*> T& _withInventoryIndexOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = void*> T& _withBlueprintAndActorIndex() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = void*> T& _withVipOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = void*> T& _sneakOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = void*> T& _removeOnMoveOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = void*> T& _permanentOnTargetIndex() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _idManager() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = void*> T& _aliveWithMagicIcon() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = void*> T& _aliveWithLocationPlayerMagic() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = void*> T& _withRemoveCondition() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = void*> T& _aliveAuras() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = void*> T& _aliveWithItemDescription() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F55A0))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(MagicContext*, uintptr_t))(Il2CppBase() + 0x11F55A8))(this, value);
	}
	template <typename T = int32_t> static T GetTargetId(uintptr_t e, uintptr_t c) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11F55B8))(0, e, c);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F5834))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithId(int32_t id) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F5BCC))(this, id);
	}
	template <typename T = void*> T GetWithParent(int32_t parentId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F5DDC))(this, parentId);
	}
	template <typename T = bool> T HasWithParentOnTarget(int32_t parentId, Il2CppString* name, int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x11F6144))(this, parentId, name, targetId);
	}
	template <typename T = void*> T GetWithActor(int32_t actorId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F631C))(this, actorId);
	}
	template <typename T = void*> T GetWithOwner(int64_t ownerId) {
		return ((T (*)(MagicContext*, int64_t))(Il2CppBase() + 0x11F6684))(this, ownerId);
	}
	template <typename T = void*> T GetOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F69EC))(this, targetId);
	}
	template <typename T = void*> T GetAliveOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F6CD4))(this, targetId);
	}
	template <typename T = void*> T GetAliveWithMagicIconOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F6F28))(this, targetId);
	}
	template <typename T = void*> T GetAliveWithItemDescription(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F7304))(this, targetId);
	}
	template <typename T = void*> T GetWithBlueprintOnTarget(int32_t targetId, Il2CppString* name) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x11F76E0))(this, targetId, name);
	}
	template <typename T = void*> T GetWithInventoryIndexOnTarget(int32_t targetId, int32_t index) {
		return ((T (*)(MagicContext*, int32_t, int32_t))(Il2CppBase() + 0x11F7AE0))(this, targetId, index);
	}
	template <typename T = uintptr_t> T GetFirstOnTarget(int32_t targetId, Il2CppString* name, bool alive) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F7EB4))(this, targetId, name, alive);
	}
	template <typename T = int32_t> T GetAliveWithBlueprintOnTargetCount(int32_t targetId, Il2CppString* name, bool useStackCount) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F8048))(this, targetId, name, useStackCount);
	}
	template <typename T = int32_t> T GetAliveWithTagOnTargetCount(int32_t targetId, Il2CppString* tag, bool useStackCount) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x11F81E4))(this, targetId, tag, useStackCount);
	}
	template <typename T = void*> T GetWithBlueprintAndActor(int32_t actorId, Il2CppString* name) {
		return ((T (*)(MagicContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x11F837C))(this, actorId, name);
	}
	template <typename T = uintptr_t> T GetWithVipOnTarget(int32_t id, uintptr_t type) {
		return ((T (*)(MagicContext*, int32_t, uintptr_t))(Il2CppBase() + 0x11F8750))(this, id, type);
	}
	template <typename T = void*> T GetSneakOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F8B24))(this, targetId);
	}
	template <typename T = void*> T GetRemoveOnMoveOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F8E4C))(this, targetId);
	}
	template <typename T = void*> T GetPermanentOnTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11F9174))(this, targetId);
	}
	template <typename T = void*> T GetAliveWithMagicIcon() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F7098))(this);
	}
	template <typename T = void*> T GetAliveWithLocationPlayerMagic() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F949C))(this);
	}
	template <typename T = void*> T GetWithRemoveCondition() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F9708))(this);
	}
	template <typename T = void*> T GetAliveAuras() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F9A04))(this);
	}
	template <typename T = void*> T GetAliveWithItemDescription_1() {
		return ((T (*)(MagicContext*))(Il2CppBase() + 0x11F7474))(this);
	}
	template <typename T = uintptr_t> T UpdateMagic(int64_t updateTime, uintptr_t data) {
		return ((T (*)(MagicContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11F9C70))(this, updateTime, data);
	}
	template <typename T = void*> T CreateMagicFromData(int64_t updateTime, uintptr_t data) {
		return ((T (*)(MagicContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11F9E1C))(this, updateTime, data);
	}
	template <typename T = uintptr_t> T CreateOrExtendMagic(uintptr_t world, Il2CppString* magicName, uintptr_t target, uintptr_t actor) {
		return ((T (*)(MagicContext*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FA510))(this, world, magicName, target, actor);
	}
	template <typename T = void> T CreateOrExtendMagic_1(uintptr_t world, Il2CppString* magicName, uintptr_t target, void* teamId, void* duration) {
		return ((T (*)(MagicContext*, uintptr_t, Il2CppString*, uintptr_t, void*, void*))(Il2CppBase() + 0x11FB198))(this, world, magicName, target, teamId, duration);
	}
	template <typename T = uintptr_t> T CreateMagic(uintptr_t world, Il2CppString* magicName, uintptr_t target, uintptr_t actor) {
		return ((T (*)(MagicContext*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FA944))(this, world, magicName, target, actor);
	}
	template <typename T = void> T SetupDamage(uintptr_t world, uintptr_t magicEntity, uintptr_t magicDataEntity, uintptr_t target, uintptr_t actor) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FC01C))(this, world, magicEntity, magicDataEntity, target, actor);
	}
	template <typename T = uintptr_t> T CreateMagicWithParent(uintptr_t world, Il2CppString* magicName, uintptr_t target, uintptr_t parentMagic, uintptr_t source) {
		return ((T (*)(MagicContext*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FC648))(this, world, magicName, target, parentMagic, source);
	}
	template <typename T = uintptr_t> T CreateMagicFromParent(uintptr_t world, Il2CppString* magicName, uintptr_t target, uintptr_t parentMagic, uintptr_t source) {
		return ((T (*)(MagicContext*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FC69C))(this, world, magicName, target, parentMagic, source);
	}
	template <typename T = uintptr_t> T DistributeMagic(uintptr_t world, uintptr_t sourceMagic, uintptr_t target, uintptr_t source) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FD2A8))(this, world, sourceMagic, target, source);
	}
	template <typename T = uintptr_t> T CreateMagicWithParent_1(uintptr_t world, Il2CppString* magicName, uintptr_t target, uintptr_t parent) {
		return ((T (*)(MagicContext*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FD610))(this, world, magicName, target, parent);
	}
	template <typename T = uintptr_t> T CreateMagicCenterFromTarget(uintptr_t world, uintptr_t magic, uintptr_t target) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FBA1C))(this, world, magic, target);
	}
	template <typename T = void> T SetKnockdown(uintptr_t world, uintptr_t target, bool value) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x11FDBA4))(this, world, target, value);
	}
	template <typename T = void> T EnableGhost(uintptr_t world, uintptr_t target, bool firstEnter) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x11FE268))(this, world, target, firstEnter);
	}
	template <typename T = void> T SetDisabled(uintptr_t contexts, uintptr_t target, bool isDisabled) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x11FE348))(this, contexts, target, isDisabled);
	}
	template <typename T = void> T SetChatting(uintptr_t contexts, uintptr_t target, bool chatting) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x11FE428))(this, contexts, target, chatting);
	}
	template <typename T = bool> T IsPriorityTargetFor(int32_t actorId, uintptr_t target) {
		return ((T (*)(MagicContext*, int32_t, uintptr_t))(Il2CppBase() + 0x11FE514))(this, actorId, target);
	}
	template <typename T = int32_t> T GetPriorityTargetFor(int32_t actorId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11FE71C))(this, actorId);
	}
	template <typename T = uintptr_t> T SetPriorityTarget(uintptr_t contexts, uintptr_t actor, uintptr_t target) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FE908))(this, contexts, actor, target);
	}
	template <typename T = void> T RemovePriorityTarget(int32_t actorId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x11FED5C))(this, actorId);
	}
	template <typename T = bool> T UnderCover(uintptr_t contexts, uintptr_t target) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FEDC4))(this, contexts, target);
	}
	template <typename T = void> T Cover(uintptr_t contexts, uintptr_t target) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FEE60))(this, contexts, target);
	}
	template <typename T = uintptr_t> T ApplySneakDamageImmune(uintptr_t contexts, uintptr_t target) {
		return ((T (*)(MagicContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FEF18))(this, contexts, target);
	}
	template <typename T = void> T RemoveCover(uintptr_t target) {
		return ((T (*)(MagicContext*, uintptr_t))(Il2CppBase() + 0x11FEFE8))(this, target);
	}
	template <typename T = int32_t> T ConsumeMagics(int32_t targetId, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(MagicContext*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11FF338))(this, targetId, items);
	}
	template <typename T = int32_t> T GetMagicsCount(int32_t targetId, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(MagicContext*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11FF7D4))(this, targetId, items);
	}
	template <typename T = bool> T Remove(void* magics, void* predicate) {
		return ((T (*)(MagicContext*, void*, void*))(Il2CppBase() + 0x11FDDD8))(this, magics, predicate);
	}
	template <typename T = void> T RemoveAllMagicFromTarget(int32_t targetId, bool onlyRemovable) {
		return ((T (*)(MagicContext*, int32_t, bool))(Il2CppBase() + 0x11FF8E4))(this, targetId, onlyRemovable);
	}
	template <typename T = bool> T ChangeDurationByLostHp(int32_t targetId, uintptr_t world, uintptr_t damageEvent) {
		return ((T (*)(MagicContext*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11FFC64))(this, targetId, world, damageEvent);
	}
	template <typename T = void> T RemoveAllDebuffFromTarget(int32_t targetId) {
		return ((T (*)(MagicContext*, int32_t))(Il2CppBase() + 0x12002F8))(this, targetId);
	}
	template <typename T = void> T ClearModifiers(uintptr_t target) {
		return ((T (*)(MagicContext*, uintptr_t))(Il2CppBase() + 0x1200690))(this, target);
	}

};

}
