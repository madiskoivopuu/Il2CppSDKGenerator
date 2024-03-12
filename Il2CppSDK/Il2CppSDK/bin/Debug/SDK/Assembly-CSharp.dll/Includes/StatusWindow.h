#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StatusWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusWindow"));
	}

	template <typename T = uintptr_t> T& HealthContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& NameContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MagicStatusContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PickupContainer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ExpContainer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PetExpContainer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TournamentPointsContainer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& UIViewController() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& DefaultOffset() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& TimerOffset() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& MagicsStatusPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ActionProgressPrefab() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& PlayerKillActionProgressPrefab() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LeaveTimer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& NamePrefab() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& HPBarPrefab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& PickupPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& TournamentPointsPrefab() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& StoreExperiencePointsPrefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& CantPickupPrefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& DamagePrefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& BonusDamagePrefab() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& CritDamagePrefab() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& BlockedDamagePrefab() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& ShieldedDamagePrefab() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ModifierNotificationPrefab() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ResourcePrefab() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& TextBubblePrefab() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& TimerPrefab() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& CraftTimerPrefab() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& AddXPPrefab() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = void*> T& _avatarInPlayerKillMode() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& _isSpectatorModeActive() {
		return *(T*)((uintptr_t)this + 0x16A);
	}
	template <typename T = uintptr_t> T& _locationStatusNameShow() {
		return *(T*)((uintptr_t)this + 0x16B);
	}
	template <typename T = void*> T& _timerEntities() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StatusWindow*))(Il2CppBase() + 0x14915B8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StatusWindow*))(Il2CppBase() + 0x1491884))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StatusWindow*, float))(Il2CppBase() + 0x1491888))(this, deltaTime);
	}
	template <typename T = void> T CheckStatusPanel(uintptr_t entity, float offset) {
		return ((T (*)(StatusWindow*, uintptr_t, float))(Il2CppBase() + 0x149164C))(this, entity, offset);
	}
	template <typename T = void> T UpdateHealth(uintptr_t ownerAccount) {
		return ((T (*)(StatusWindow*, uintptr_t))(Il2CppBase() + 0x1491A74))(this, ownerAccount);
	}
	template <typename T = void> T UpdateDeadWorkersHealth(uintptr_t entity, uintptr_t ownerAccount) {
		return ((T (*)(StatusWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x149333C))(this, entity, ownerAccount);
	}
	template <typename T = void> T UpdateEntityHealth(uintptr_t entity, uintptr_t ownerAccount) {
		return ((T (*)(StatusWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1492F30))(this, entity, ownerAccount);
	}
	template <typename T = void> T UpdateName() {
		return ((T (*)(StatusWindow*))(Il2CppBase() + 0x1491E00))(this);
	}
	template <typename T = void> T UpdateEntityName(uintptr_t entity) {
		return ((T (*)(StatusWindow*, uintptr_t))(Il2CppBase() + 0x1493500))(this, entity);
	}
	template <typename T = void> T UpdateMagics() {
		return ((T (*)(StatusWindow*))(Il2CppBase() + 0x14922CC))(this);
	}
	template <typename T = void> T UpdateEntityMagics(uintptr_t entity, int64_t now) {
		return ((T (*)(StatusWindow*, uintptr_t, int64_t))(Il2CppBase() + 0x14938E0))(this, entity, now);
	}
	template <typename T = void> T UpdateLeaveTimer(float deltaTime) {
		return ((T (*)(StatusWindow*, float))(Il2CppBase() + 0x1491FC0))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T GetLocationExitMsg(uintptr_t player) {
		return ((T (*)(StatusWindow*, uintptr_t))(Il2CppBase() + 0x1493E0C))(this, player);
	}
	template <typename T = void> T OnLeaveTimerUpdate(uintptr_t avatar, float time) {
		return ((T (*)(StatusWindow*, uintptr_t, float))(Il2CppBase() + 0x1493AF8))(this, avatar, time);
	}
	template <typename T = void> T UpdateTimerEntities() {
		return ((T (*)(StatusWindow*))(Il2CppBase() + 0x14929D0))(this);
	}
	template <typename T = void> T UpdateEntityPortal(uintptr_t entity) {
		return ((T (*)(StatusWindow*, uintptr_t))(Il2CppBase() + 0x1493EE0))(this, entity);
	}
	template <typename T = void> T UpdateExtractWorkEntity(uintptr_t world, uintptr_t entity, uintptr_t account) {
		return ((T (*)(StatusWindow*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1494134))(this, world, entity, account);
	}
	template <typename T = void> T UpdateRewardsEntity(uintptr_t world, uintptr_t entity) {
		return ((T (*)(StatusWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1494504))(this, world, entity);
	}
	template <typename T = void> T OnPickup(uintptr_t entity, Il2CppString* resourceName, int32_t count) {
		return ((T (*)(StatusWindow*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1494824))(this, entity, resourceName, count);
	}
	template <typename T = void> T OnPickup_1(uintptr_t entity, uintptr_t data) {
		return ((T (*)(StatusWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1494A70))(this, entity, data);
	}
	template <typename T = void> T OnTournamentPoints(int32_t points) {
		return ((T (*)(StatusWindow*, int32_t))(Il2CppBase() + 0x1494EA4))(this, points);
	}
	template <typename T = void> T OnStoreExperienceNotification(int64_t productDataId, uint32_t expValue) {
		return ((T (*)(StatusWindow*, int64_t, uint32_t))(Il2CppBase() + 0x1494F88))(this, productDataId, expValue);
	}
	template <typename T = void> T ApplyDamage(uintptr_t entity, float delta, uintptr_t damageType) {
		return ((T (*)(StatusWindow*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1495294))(this, entity, delta, damageType);
	}
	template <typename T = void> T ResourceChanged(uintptr_t entity, Il2CppString* resourceName, float delta) {
		return ((T (*)(StatusWindow*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x14953C8))(this, entity, resourceName, delta);
	}
	template <typename T = void> T ApplyDamageBlocked(uintptr_t entity, float value) {
		return ((T (*)(StatusWindow*, uintptr_t, float))(Il2CppBase() + 0x1495558))(this, entity, value);
	}
	template <typename T = void> T ApplyDamageShielded(uintptr_t entity, float value) {
		return ((T (*)(StatusWindow*, uintptr_t, float))(Il2CppBase() + 0x1495670))(this, entity, value);
	}
	template <typename T = void> T ShowModifierNotification(int32_t entityId, Il2CppString* text, void* color, Il2CppString* iconPath) {
		return ((T (*)(StatusWindow*, int32_t, Il2CppString*, void*, Il2CppString*))(Il2CppBase() + 0x1495788))(this, entityId, text, color, iconPath);
	}
	template <typename T = void> T AddExperience(uint32_t delta) {
		return ((T (*)(StatusWindow*, uint32_t))(Il2CppBase() + 0x149590C))(this, delta);
	}
	template <typename T = void> T AddPetExperience(uint32_t delta) {
		return ((T (*)(StatusWindow*, uint32_t))(Il2CppBase() + 0x1495B24))(this, delta);
	}
	template <typename T = void> T UpdatePlayerKillView(uintptr_t avatarAccount, uintptr_t avatar) {
		return ((T (*)(StatusWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x14925D4))(this, avatarAccount, avatar);
	}
	template <typename T = void> T UpdateEntityPlayerKillModeView(uintptr_t avatarAccount, uintptr_t entity) {
		return ((T (*)(StatusWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1495D3C))(this, avatarAccount, entity);
	}
	template <typename T = void> T ShowTextBubble(uintptr_t entity, Il2CppString* text, void* lifeTime) {
		return ((T (*)(StatusWindow*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x14960D8))(this, entity, text, lifeTime);
	}
	template <typename T = void> T SetSpectatorMode(bool isActive) {
		return ((T (*)(StatusWindow*, bool))(Il2CppBase() + 0x14961E0))(this, isActive);
	}

};

}
