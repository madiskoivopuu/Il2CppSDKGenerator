#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityStatus"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ChatBubbleContainer() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& HPBarContainer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& NotificationContainer() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& NameContainer() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& MagicStatusContainer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& ActionProgressContainer() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& PlayerKillerActionProgressContainer() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& TimerContainer() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = StatusNameDecorator*> R& Name() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = HealthBarView*> R& HPBar() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int64_t> R& HPTimeout() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = ActionProgress*> R& ActionProgress() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = PlayerKillActionProgress*> R& PlayerKillActionProgress() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = MagicsStatus*> R& MagicsStatus() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = TimerBehaviour*> R& TimerStatus() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Nullable1<bool>*& LastPlayerKillStatus() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x98);
	}
	template <typename R = float> R& Offset() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	template <typename R = bool> R& IsNormalized() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> R& _pauseDuration() {
		return *(R*)((uintptr_t)this + 0xA4);
	}
	 Queue1<uintptr_t>*& _msgBuffer() {
		return *(Queue1<uintptr_t>**)((uintptr_t)this + 0xA8);
	}
	 Queue1<int32_t>*& _offsetsBuffer() {
		return *(Queue1<int32_t>**)((uintptr_t)this + 0xB0);
	}
	 Il2CppList<uintptr_t>*& _activeMsg() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0xB8);
	}
	template <typename R = EntityDiplomaticStatus> R& DiplomaticStatus() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _lastPosition() {
		return *(R*)((uintptr_t)this + 0xC4);
	}
	template <typename R = bool> R& IsMinimapIconInTransition() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _entityTransform() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = TextBubble*> R& _bubble() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = int32_t> R& _entityId() {
		return *(R*)((uintptr_t)this + 0xE8);
	}

	template <typename R = GameEntity*> R GetEntity() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x1378338))(this);
	}
	template <typename R = void> R Reattach(GameEntity* entity) {
		return ((R (*)(EntityStatus*, GameEntity*))(Il2CppBase() + 0x137843C))(this, entity);
	}
	template <typename R = void> R Init(GameEntity* entity) {
		return ((R (*)(EntityStatus*, GameEntity*))(Il2CppBase() + 0x1378580))(this, entity);
	}
	template <typename R = bool> R CanShow() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x1378A28))(this);
	}
	template <typename R = void> R ApplyDamage(TextMonoBehaviour* DamagePrefab, float delta, uintptr_t color) {
		return ((R (*)(EntityStatus*, TextMonoBehaviour*, float, uintptr_t))(Il2CppBase() + 0x1378AEC))(this, DamagePrefab, delta, color);
	}
	template <typename R = void> R ApplyResource(TextImageMonoBehaviour* resourcePrefab, Icon icon, float delta) {
		return ((R (*)(EntityStatus*, TextImageMonoBehaviour*, Icon, float))(Il2CppBase() + 0x1378D6C))(this, resourcePrefab, icon, delta);
	}
	template <typename R = void> R ApplyDamageBlocked(TextMonoBehaviour* damageBlockedPrefab, int32_t value) {
		return ((R (*)(EntityStatus*, TextMonoBehaviour*, int32_t))(Il2CppBase() + 0x1378FD0))(this, damageBlockedPrefab, value);
	}
	template <typename R = void> R ApplyDamageShielded(TextMonoBehaviour* damageBlockedPrefab, int32_t value) {
		return ((R (*)(EntityStatus*, TextMonoBehaviour*, int32_t))(Il2CppBase() + 0x1379198))(this, damageBlockedPrefab, value);
	}
	template <typename R = void> R ShowTextBubble(TextBubble* textBubblePrefab, Il2CppString* text, Nullable1<float>* lifeTime) {
		return ((R (*)(EntityStatus*, TextBubble*, Il2CppString*, Nullable1<float>*))(Il2CppBase() + 0x1379360))(this, textBubblePrefab, text, lifeTime);
	}
	template <typename R = void> R ShowModifierNotification(TextImageMonoBehaviour* ModifierNotificationPrefab, Il2CppString* text, Nullable1<uintptr_t>* color, Il2CppString* iconPath) {
		return ((R (*)(EntityStatus*, TextImageMonoBehaviour*, Il2CppString*, Nullable1<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x137951C))(this, ModifierNotificationPrefab, text, color, iconPath);
	}
	template <typename R = void> R UpdateNotificationsView() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x1379780))(this);
	}
	template <typename R = void> R Free() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x1379B94))(this);
	}
	template <typename R = bool> R UpdateDiplomaticStatus(EntityDiplomaticStatus diplomaticStatus) {
		return ((R (*)(EntityStatus*, EntityDiplomaticStatus))(Il2CppBase() + 0x1379C68))(this, diplomaticStatus);
	}
	template <typename R = void> R UpdatePlayerKillStatus() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x1379C88))(this);
	}
	template <typename R = void> R UpdateMinimapIcon() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x137871C))(this);
	}
	template <typename R = void> R OnMinimapActionStarted() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x1379D50))(this);
	}
	template <typename R = void> R OnMinimapActionCompleted() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x1379F4C))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x137A078))(this);
	}
	template <typename R = void> R UpdatePosition() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x137A3DC))(this);
	}
	template <typename R = void> R FixedUpdate() {
		return ((R (*)(EntityStatus*))(Il2CppBase() + 0x137A4E0))(this);
	}

};

