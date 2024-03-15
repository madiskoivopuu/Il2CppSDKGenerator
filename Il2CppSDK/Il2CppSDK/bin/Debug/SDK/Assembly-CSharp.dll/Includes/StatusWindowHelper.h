#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusWindowHelper"));
	}


	template <typename R = StatusWindow*> static R GetStatusWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1496244))(0, manager);
	}
	template <typename R = StatusWindow*> static R GetOrShowStatus(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x148714C))(0, manager);
	}
	template <typename R = void> static R CloseStatus(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x148778C))(0, manager);
	}
	template <typename R = void> static R OnPickup(UIWindowsManager* manager, GameEntity* entity, PickupData data) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*, PickupData))(Il2CppBase() + 0x14962DC))(0, manager, entity, data);
	}
	template <typename R = void> static R OnTournamentPoints(UIWindowsManager* manager, int32_t points) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x149632C))(0, manager, points);
	}
	template <typename R = void> static R OnStoreExperienceNotification(UIWindowsManager* manager, int64_t productDataId, uint32_t expValue) {
		return ((R (*)(void *, UIWindowsManager*, int64_t, uint32_t))(Il2CppBase() + 0x1496360))(0, manager, productDataId, expValue);
	}
	template <typename R = void> static R ApplyDamage(UIWindowsManager* manager, GameEntity* entity, float delta, DamageType damageType) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*, float, DamageType))(Il2CppBase() + 0x149639C))(0, manager, entity, delta, damageType);
	}
	template <typename R = void> static R ApplyDamageBlocked(UIWindowsManager* manager, GameEntity* entity, float value) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*, float))(Il2CppBase() + 0x1496414))(0, manager, entity, value);
	}
	template <typename R = void> static R ApplyDamageShielded(UIWindowsManager* manager, GameEntity* entity, float value) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*, float))(Il2CppBase() + 0x149645C))(0, manager, entity, value);
	}
	template <typename R = void> static R AddExperience(UIWindowsManager* manager, uint32_t delta) {
		return ((R (*)(void *, UIWindowsManager*, uint32_t))(Il2CppBase() + 0x14964A4))(0, manager, delta);
	}
	template <typename R = void> static R AddPetExperience(UIWindowsManager* manager, uint32_t delta) {
		return ((R (*)(void *, UIWindowsManager*, uint32_t))(Il2CppBase() + 0x14964D8))(0, manager, delta);
	}
	template <typename R = void> static R ShowModifierNotification(UIWindowsManager* manager, int32_t entityId, NotificationComponent* notification, float value, ItemEntity* sourceItem) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, NotificationComponent*, float, ItemEntity*))(Il2CppBase() + 0x149650C))(0, manager, entityId, notification, value, sourceItem);
	}
	template <typename R = void> static R ShowTextBubble(UIWindowsManager* manager, GameEntity* target, Il2CppString* text, Nullable1<float>* lifeTime) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*, Il2CppString*, Nullable1<float>*))(Il2CppBase() + 0x148BEF8))(0, manager, target, text, lifeTime);
	}
	template <typename R = void> static R SetSpectatorMode(UIWindowsManager* manager, bool isActive) {
		return ((R (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x1487BD8))(0, manager, isActive);
	}

};

