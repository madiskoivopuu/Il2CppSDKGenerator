#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StatusWindow : public UIWindow1<DataContext*>
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
	template <typename T = UIViewController*> T& UIViewController() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& DefaultOffset() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& TimerOffset() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = MagicsStatus*> T& MagicsStatusPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = ActionProgress*> T& ActionProgressPrefab() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = PlayerKillActionProgress*> T& PlayerKillActionProgressPrefab() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LeaveTimer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = StatusNameDecorator*> T& NamePrefab() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = HealthBarView*> T& HPBarPrefab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = TextImageMonoBehaviour*> T& PickupPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = TextImageMonoBehaviour*> T& TournamentPointsPrefab() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = TextImageMonoBehaviour*> T& StoreExperiencePointsPrefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = TextImageMonoBehaviour*> T& CantPickupPrefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = TextMonoBehaviour*> T& DamagePrefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = TextMonoBehaviour*> T& BonusDamagePrefab() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = TextMonoBehaviour*> T& CritDamagePrefab() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = TextMonoBehaviour*> T& BlockedDamagePrefab() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = TextMonoBehaviour*> T& ShieldedDamagePrefab() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = TextImageMonoBehaviour*> T& ModifierNotificationPrefab() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = TextImageMonoBehaviour*> T& ResourcePrefab() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = TextBubble*> T& TextBubblePrefab() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = TimerBehaviour*> T& TimerPrefab() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = TimerBehaviour*> T& CraftTimerPrefab() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = TextMonoBehaviour*> T& AddXPPrefab() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Nullable1bool>*> T& _avatarInPlayerKillMode() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& _isSpectatorModeActive() {
		return *(T*)((uintptr_t)this + 0x16A);
	}
	template <typename T = StatusNameShow*> T& _locationStatusNameShow() {
		return *(T*)((uintptr_t)this + 0x16B);
	}
	template <typename T = IGroup1GameEntity*>*> T& _timerEntities() {
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
	template <typename T = void> T CheckStatusPanel(GameEntity* entity, float offset) {
		return ((T (*)(StatusWindow*, GameEntity*, float))(Il2CppBase() + 0x149164C))(this, entity, offset);
	}
	template <typename T = void> T UpdateHealth(AccountEntity* ownerAccount) {
		return ((T (*)(StatusWindow*, AccountEntity*))(Il2CppBase() + 0x1491A74))(this, ownerAccount);
	}
	template <typename T = void> T UpdateDeadWorkersHealth(GameEntity* entity, AccountEntity* ownerAccount) {
		return ((T (*)(StatusWindow*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x149333C))(this, entity, ownerAccount);
	}
	template <typename T = void> T UpdateEntityHealth(GameEntity* entity, AccountEntity* ownerAccount) {
		return ((T (*)(StatusWindow*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1492F30))(this, entity, ownerAccount);
	}
	template <typename T = void> T UpdateName() {
		return ((T (*)(StatusWindow*))(Il2CppBase() + 0x1491E00))(this);
	}
	template <typename T = void> T UpdateEntityName(GameEntity* entity) {
		return ((T (*)(StatusWindow*, GameEntity*))(Il2CppBase() + 0x1493500))(this, entity);
	}
	template <typename T = void> T UpdateMagics() {
		return ((T (*)(StatusWindow*))(Il2CppBase() + 0x14922CC))(this);
	}
	template <typename T = void> T UpdateEntityMagics(GameEntity* entity, int64_t now) {
		return ((T (*)(StatusWindow*, GameEntity*, int64_t))(Il2CppBase() + 0x14938E0))(this, entity, now);
	}
	template <typename T = void> T UpdateLeaveTimer(float deltaTime) {
		return ((T (*)(StatusWindow*, float))(Il2CppBase() + 0x1491FC0))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T GetLocationExitMsg(GameEntity* player) {
		return ((T (*)(StatusWindow*, GameEntity*))(Il2CppBase() + 0x1493E0C))(this, player);
	}
	template <typename T = void> T OnLeaveTimerUpdate(GameEntity* avatar, float time) {
		return ((T (*)(StatusWindow*, GameEntity*, float))(Il2CppBase() + 0x1493AF8))(this, avatar, time);
	}
	template <typename T = void> T UpdateTimerEntities() {
		return ((T (*)(StatusWindow*))(Il2CppBase() + 0x14929D0))(this);
	}
	template <typename T = void> T UpdateEntityPortal(GameEntity* entity) {
		return ((T (*)(StatusWindow*, GameEntity*))(Il2CppBase() + 0x1493EE0))(this, entity);
	}
	template <typename T = void> T UpdateExtractWorkEntity(ICommonUnityWorld* world, GameEntity* entity, AccountEntity* account) {
		return ((T (*)(StatusWindow*, ICommonUnityWorld*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1494134))(this, world, entity, account);
	}
	template <typename T = void> T UpdateRewardsEntity(ICommonUnityWorld* world, GameEntity* entity) {
		return ((T (*)(StatusWindow*, ICommonUnityWorld*, GameEntity*))(Il2CppBase() + 0x1494504))(this, world, entity);
	}
	template <typename T = void> T OnPickup(GameEntity* entity, Il2CppString* resourceName, int32_t count) {
		return ((T (*)(StatusWindow*, GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1494824))(this, entity, resourceName, count);
	}
	template <typename T = void> T OnPickup_1(GameEntity* entity, PickupData* data) {
		return ((T (*)(StatusWindow*, GameEntity*, PickupData*))(Il2CppBase() + 0x1494A70))(this, entity, data);
	}
	template <typename T = void> T OnTournamentPoints(int32_t points) {
		return ((T (*)(StatusWindow*, int32_t))(Il2CppBase() + 0x1494EA4))(this, points);
	}
	template <typename T = void> T OnStoreExperienceNotification(int64_t productDataId, uint32_t expValue) {
		return ((T (*)(StatusWindow*, int64_t, uint32_t))(Il2CppBase() + 0x1494F88))(this, productDataId, expValue);
	}
	template <typename T = void> T ApplyDamage(GameEntity* entity, float delta, DamageType* damageType) {
		return ((T (*)(StatusWindow*, GameEntity*, float, DamageType*))(Il2CppBase() + 0x1495294))(this, entity, delta, damageType);
	}
	template <typename T = void> T ResourceChanged(GameEntity* entity, Il2CppString* resourceName, float delta) {
		return ((T (*)(StatusWindow*, GameEntity*, Il2CppString*, float))(Il2CppBase() + 0x14953C8))(this, entity, resourceName, delta);
	}
	template <typename T = void> T ApplyDamageBlocked(GameEntity* entity, float value) {
		return ((T (*)(StatusWindow*, GameEntity*, float))(Il2CppBase() + 0x1495558))(this, entity, value);
	}
	template <typename T = void> T ApplyDamageShielded(GameEntity* entity, float value) {
		return ((T (*)(StatusWindow*, GameEntity*, float))(Il2CppBase() + 0x1495670))(this, entity, value);
	}
	template <typename T = void> T ShowModifierNotification(int32_t entityId, Il2CppString* text, Nullable1uintptr_t>* color, Il2CppString* iconPath) {
		return ((T (*)(StatusWindow*, int32_t, Il2CppString*, Nullable1uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1495788))(this, entityId, text, color, iconPath);
	}
	template <typename T = void> T AddExperience(uint32_t delta) {
		return ((T (*)(StatusWindow*, uint32_t))(Il2CppBase() + 0x149590C))(this, delta);
	}
	template <typename T = void> T AddPetExperience(uint32_t delta) {
		return ((T (*)(StatusWindow*, uint32_t))(Il2CppBase() + 0x1495B24))(this, delta);
	}
	template <typename T = void> T UpdatePlayerKillView(AccountEntity* avatarAccount, GameEntity* avatar) {
		return ((T (*)(StatusWindow*, AccountEntity*, GameEntity*))(Il2CppBase() + 0x14925D4))(this, avatarAccount, avatar);
	}
	template <typename T = void> T UpdateEntityPlayerKillModeView(AccountEntity* avatarAccount, GameEntity* entity) {
		return ((T (*)(StatusWindow*, AccountEntity*, GameEntity*))(Il2CppBase() + 0x1495D3C))(this, avatarAccount, entity);
	}
	template <typename T = void> T ShowTextBubble(GameEntity* entity, Il2CppString* text, Nullable1float>* lifeTime) {
		return ((T (*)(StatusWindow*, GameEntity*, Il2CppString*, Nullable1float>*))(Il2CppBase() + 0x14960D8))(this, entity, text, lifeTime);
	}
	template <typename T = void> T SetSpectatorMode(bool isActive) {
		return ((T (*)(StatusWindow*, bool))(Il2CppBase() + 0x14961E0))(this, isActive);
	}

};

