#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StatusWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusWindow"));
	}

	template <typename R = uintptr_t> R& HealthContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& NameContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& MagicStatusContainer() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& PickupContainer() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ExpContainer() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& PetExpContainer() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& TournamentPointsContainer() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = UIViewController*> R& UIViewController() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = float> R& DefaultOffset() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = float> R& TimerOffset() {
		return *(R*)((uintptr_t)this + 0xBC);
	}
	template <typename R = MagicsStatus*> R& MagicsStatusPrefab() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = ActionProgress*> R& ActionProgressPrefab() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = PlayerKillActionProgress*> R& PlayerKillActionProgressPrefab() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& LeaveTimer() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = StatusNameDecorator*> R& NamePrefab() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = HealthBarView*> R& HPBarPrefab() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = TextImageMonoBehaviour*> R& PickupPrefab() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = TextImageMonoBehaviour*> R& TournamentPointsPrefab() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = TextImageMonoBehaviour*> R& StoreExperiencePointsPrefab() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = TextImageMonoBehaviour*> R& CantPickupPrefab() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = TextMonoBehaviour*> R& DamagePrefab() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = TextMonoBehaviour*> R& BonusDamagePrefab() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = TextMonoBehaviour*> R& CritDamagePrefab() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = TextMonoBehaviour*> R& BlockedDamagePrefab() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = TextMonoBehaviour*> R& ShieldedDamagePrefab() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = TextImageMonoBehaviour*> R& ModifierNotificationPrefab() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = TextImageMonoBehaviour*> R& ResourcePrefab() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = TextBubble*> R& TextBubblePrefab() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = TimerBehaviour*> R& TimerPrefab() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = TimerBehaviour*> R& CraftTimerPrefab() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = TextMonoBehaviour*> R& AddXPPrefab() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	 Nullable1bool>*& _avatarInPlayerKillMode() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x168);
	}
	template <typename R = bool> R& _isSpectatorModeActive() {
		return *(R*)((uintptr_t)this + 0x16A);
	}
	template <typename R = StatusNameShow*> R& _locationStatusNameShow() {
		return *(R*)((uintptr_t)this + 0x16B);
	}
	 IGroup1GameEntity*>*& _timerEntities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x170);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StatusWindow*))(Il2CppBase() + 0x14915B8))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StatusWindow*))(Il2CppBase() + 0x1491884))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(StatusWindow*, float))(Il2CppBase() + 0x1491888))(this, deltaTime);
	}
	template <typename R = void> R CheckStatusPanel(GameEntity* entity, float offset) {
		return ((R (*)(StatusWindow*, GameEntity*, float))(Il2CppBase() + 0x149164C))(this, entity, offset);
	}
	template <typename R = void> R UpdateHealth(AccountEntity* ownerAccount) {
		return ((R (*)(StatusWindow*, AccountEntity*))(Il2CppBase() + 0x1491A74))(this, ownerAccount);
	}
	template <typename R = void> R UpdateDeadWorkersHealth(GameEntity* entity, AccountEntity* ownerAccount) {
		return ((R (*)(StatusWindow*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x149333C))(this, entity, ownerAccount);
	}
	template <typename R = void> R UpdateEntityHealth(GameEntity* entity, AccountEntity* ownerAccount) {
		return ((R (*)(StatusWindow*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1492F30))(this, entity, ownerAccount);
	}
	template <typename R = void> R UpdateName() {
		return ((R (*)(StatusWindow*))(Il2CppBase() + 0x1491E00))(this);
	}
	template <typename R = void> R UpdateEntityName(GameEntity* entity) {
		return ((R (*)(StatusWindow*, GameEntity*))(Il2CppBase() + 0x1493500))(this, entity);
	}
	template <typename R = void> R UpdateMagics() {
		return ((R (*)(StatusWindow*))(Il2CppBase() + 0x14922CC))(this);
	}
	template <typename R = void> R UpdateEntityMagics(GameEntity* entity, int64_t now) {
		return ((R (*)(StatusWindow*, GameEntity*, int64_t))(Il2CppBase() + 0x14938E0))(this, entity, now);
	}
	template <typename R = void> R UpdateLeaveTimer(float deltaTime) {
		return ((R (*)(StatusWindow*, float))(Il2CppBase() + 0x1491FC0))(this, deltaTime);
	}
	template <typename R = Il2CppString*> R GetLocationExitMsg(GameEntity* player) {
		return ((R (*)(StatusWindow*, GameEntity*))(Il2CppBase() + 0x1493E0C))(this, player);
	}
	template <typename R = void> R OnLeaveTimerUpdate(GameEntity* avatar, float time) {
		return ((R (*)(StatusWindow*, GameEntity*, float))(Il2CppBase() + 0x1493AF8))(this, avatar, time);
	}
	template <typename R = void> R UpdateTimerEntities() {
		return ((R (*)(StatusWindow*))(Il2CppBase() + 0x14929D0))(this);
	}
	template <typename R = void> R UpdateEntityPortal(GameEntity* entity) {
		return ((R (*)(StatusWindow*, GameEntity*))(Il2CppBase() + 0x1493EE0))(this, entity);
	}
	template <typename R = void> R UpdateExtractWorkEntity(ICommonUnityWorld* world, GameEntity* entity, AccountEntity* account) {
		return ((R (*)(StatusWindow*, ICommonUnityWorld*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1494134))(this, world, entity, account);
	}
	template <typename R = void> R UpdateRewardsEntity(ICommonUnityWorld* world, GameEntity* entity) {
		return ((R (*)(StatusWindow*, ICommonUnityWorld*, GameEntity*))(Il2CppBase() + 0x1494504))(this, world, entity);
	}
	template <typename R = void> R OnPickup(GameEntity* entity, Il2CppString* resourceName, int32_t count) {
		return ((R (*)(StatusWindow*, GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1494824))(this, entity, resourceName, count);
	}
	template <typename R = void> R OnPickup_1(GameEntity* entity, PickupData* data) {
		return ((R (*)(StatusWindow*, GameEntity*, PickupData*))(Il2CppBase() + 0x1494A70))(this, entity, data);
	}
	template <typename R = void> R OnTournamentPoints(int32_t points) {
		return ((R (*)(StatusWindow*, int32_t))(Il2CppBase() + 0x1494EA4))(this, points);
	}
	template <typename R = void> R OnStoreExperienceNotification(int64_t productDataId, uint32_t expValue) {
		return ((R (*)(StatusWindow*, int64_t, uint32_t))(Il2CppBase() + 0x1494F88))(this, productDataId, expValue);
	}
	template <typename R = void> R ApplyDamage(GameEntity* entity, float delta, DamageType* damageType) {
		return ((R (*)(StatusWindow*, GameEntity*, float, DamageType*))(Il2CppBase() + 0x1495294))(this, entity, delta, damageType);
	}
	template <typename R = void> R ResourceChanged(GameEntity* entity, Il2CppString* resourceName, float delta) {
		return ((R (*)(StatusWindow*, GameEntity*, Il2CppString*, float))(Il2CppBase() + 0x14953C8))(this, entity, resourceName, delta);
	}
	template <typename R = void> R ApplyDamageBlocked(GameEntity* entity, float value) {
		return ((R (*)(StatusWindow*, GameEntity*, float))(Il2CppBase() + 0x1495558))(this, entity, value);
	}
	template <typename R = void> R ApplyDamageShielded(GameEntity* entity, float value) {
		return ((R (*)(StatusWindow*, GameEntity*, float))(Il2CppBase() + 0x1495670))(this, entity, value);
	}
	template <typename R = void> R ShowModifierNotification(int32_t entityId, Il2CppString* text, Nullable1uintptr_t>* color, Il2CppString* iconPath) {
		return ((R (*)(StatusWindow*, int32_t, Il2CppString*, Nullable1uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1495788))(this, entityId, text, color, iconPath);
	}
	template <typename R = void> R AddExperience(uint32_t delta) {
		return ((R (*)(StatusWindow*, uint32_t))(Il2CppBase() + 0x149590C))(this, delta);
	}
	template <typename R = void> R AddPetExperience(uint32_t delta) {
		return ((R (*)(StatusWindow*, uint32_t))(Il2CppBase() + 0x1495B24))(this, delta);
	}
	template <typename R = void> R UpdatePlayerKillView(AccountEntity* avatarAccount, GameEntity* avatar) {
		return ((R (*)(StatusWindow*, AccountEntity*, GameEntity*))(Il2CppBase() + 0x14925D4))(this, avatarAccount, avatar);
	}
	template <typename R = void> R UpdateEntityPlayerKillModeView(AccountEntity* avatarAccount, GameEntity* entity) {
		return ((R (*)(StatusWindow*, AccountEntity*, GameEntity*))(Il2CppBase() + 0x1495D3C))(this, avatarAccount, entity);
	}
	template <typename R = void> R ShowTextBubble(GameEntity* entity, Il2CppString* text, Nullable1float>* lifeTime) {
		return ((R (*)(StatusWindow*, GameEntity*, Il2CppString*, Nullable1float>*))(Il2CppBase() + 0x14960D8))(this, entity, text, lifeTime);
	}
	template <typename R = void> R SetSpectatorMode(bool isActive) {
		return ((R (*)(StatusWindow*, bool))(Il2CppBase() + 0x14961E0))(this, isActive);
	}

};

