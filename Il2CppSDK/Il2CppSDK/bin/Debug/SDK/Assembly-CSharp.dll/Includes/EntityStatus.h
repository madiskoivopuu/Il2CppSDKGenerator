#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityStatus"));
	}

	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ChatBubbleContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& HPBarContainer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NotificationContainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NameContainer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& MagicStatusContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ActionProgressContainer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& PlayerKillerActionProgressContainer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& TimerContainer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& HPBar() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int64_t> T& HPTimeout() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ActionProgress() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PlayerKillActionProgress() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MagicsStatus() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TimerStatus() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& LastPlayerKillStatus() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& Offset() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& IsNormalized() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _pauseDuration() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = void*> T& _msgBuffer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& _offsetsBuffer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _activeMsg() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& DiplomaticStatus() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& _lastPosition() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& IsMinimapIconInTransition() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _entityTransform() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _bubble() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& _entityId() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = uintptr_t> T GetEntity() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x1378338))(this);
	}
	template <typename T = void> T Reattach(uintptr_t entity) {
		return ((T (*)(EntityStatus*, uintptr_t))(Il2CppBase() + 0x137843C))(this, entity);
	}
	template <typename T = void> T Init(uintptr_t entity) {
		return ((T (*)(EntityStatus*, uintptr_t))(Il2CppBase() + 0x1378580))(this, entity);
	}
	template <typename T = bool> T CanShow() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x1378A28))(this);
	}
	template <typename T = void> T ApplyDamage(uintptr_t DamagePrefab, float delta, uintptr_t color) {
		return ((T (*)(EntityStatus*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1378AEC))(this, DamagePrefab, delta, color);
	}
	template <typename T = void> T ApplyResource(uintptr_t resourcePrefab, uintptr_t icon, float delta) {
		return ((T (*)(EntityStatus*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1378D6C))(this, resourcePrefab, icon, delta);
	}
	template <typename T = void> T ApplyDamageBlocked(uintptr_t damageBlockedPrefab, int32_t value) {
		return ((T (*)(EntityStatus*, uintptr_t, int32_t))(Il2CppBase() + 0x1378FD0))(this, damageBlockedPrefab, value);
	}
	template <typename T = void> T ApplyDamageShielded(uintptr_t damageBlockedPrefab, int32_t value) {
		return ((T (*)(EntityStatus*, uintptr_t, int32_t))(Il2CppBase() + 0x1379198))(this, damageBlockedPrefab, value);
	}
	template <typename T = void> T ShowTextBubble(uintptr_t textBubblePrefab, Il2CppString* text, void* lifeTime) {
		return ((T (*)(EntityStatus*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x1379360))(this, textBubblePrefab, text, lifeTime);
	}
	template <typename T = void> T ShowModifierNotification(uintptr_t ModifierNotificationPrefab, Il2CppString* text, void* color, Il2CppString* iconPath) {
		return ((T (*)(EntityStatus*, uintptr_t, Il2CppString*, void*, Il2CppString*))(Il2CppBase() + 0x137951C))(this, ModifierNotificationPrefab, text, color, iconPath);
	}
	template <typename T = void> T UpdateNotificationsView() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x1379780))(this);
	}
	template <typename T = void> T Free() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x1379B94))(this);
	}
	template <typename T = bool> T UpdateDiplomaticStatus(uintptr_t diplomaticStatus) {
		return ((T (*)(EntityStatus*, uintptr_t))(Il2CppBase() + 0x1379C68))(this, diplomaticStatus);
	}
	template <typename T = void> T UpdatePlayerKillStatus() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x1379C88))(this);
	}
	template <typename T = void> T UpdateMinimapIcon() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x137871C))(this);
	}
	template <typename T = void> T OnMinimapActionStarted() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x1379D50))(this);
	}
	template <typename T = void> T OnMinimapActionCompleted() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x1379F4C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x137A078))(this);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x137A3DC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EntityStatus*))(Il2CppBase() + 0x137A4E0))(this);
	}

};

}
