#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusWindowHelper"));
	}


	template <typename T = StatusWindow*> static T GetStatusWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1496244))(0, manager);
	}
	template <typename T = StatusWindow*> static T GetOrShowStatus(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x148714C))(0, manager);
	}
	template <typename T = void> static T CloseStatus(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x148778C))(0, manager);
	}
	template <typename T = void> static T OnPickup(UIWindowsManager* manager, GameEntity* entity, PickupData* data) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*, PickupData*))(Il2CppBase() + 0x14962DC))(0, manager, entity, data);
	}
	template <typename T = void> static T OnTournamentPoints(UIWindowsManager* manager, int32_t points) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x149632C))(0, manager, points);
	}
	template <typename T = void> static T OnStoreExperienceNotification(UIWindowsManager* manager, int64_t productDataId, uint32_t expValue) {
		return ((T (*)(void *, UIWindowsManager*, int64_t, uint32_t))(Il2CppBase() + 0x1496360))(0, manager, productDataId, expValue);
	}
	template <typename T = void> static T ApplyDamage(UIWindowsManager* manager, GameEntity* entity, float delta, DamageType* damageType) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*, float, DamageType*))(Il2CppBase() + 0x149639C))(0, manager, entity, delta, damageType);
	}
	template <typename T = void> static T ApplyDamageBlocked(UIWindowsManager* manager, GameEntity* entity, float value) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*, float))(Il2CppBase() + 0x1496414))(0, manager, entity, value);
	}
	template <typename T = void> static T ApplyDamageShielded(UIWindowsManager* manager, GameEntity* entity, float value) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*, float))(Il2CppBase() + 0x149645C))(0, manager, entity, value);
	}
	template <typename T = void> static T AddExperience(UIWindowsManager* manager, uint32_t delta) {
		return ((T (*)(void *, UIWindowsManager*, uint32_t))(Il2CppBase() + 0x14964A4))(0, manager, delta);
	}
	template <typename T = void> static T AddPetExperience(UIWindowsManager* manager, uint32_t delta) {
		return ((T (*)(void *, UIWindowsManager*, uint32_t))(Il2CppBase() + 0x14964D8))(0, manager, delta);
	}
	template <typename T = void> static T ShowModifierNotification(UIWindowsManager* manager, int32_t entityId, NotificationComponent* notification, float value, ItemEntity* sourceItem) {
		return ((T (*)(void *, UIWindowsManager*, int32_t, NotificationComponent*, float, ItemEntity*))(Il2CppBase() + 0x149650C))(0, manager, entityId, notification, value, sourceItem);
	}
	template <typename T = void> static T ShowTextBubble(UIWindowsManager* manager, GameEntity* target, Il2CppString* text, Nullable1float>* lifeTime) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*, Il2CppString*, Nullable1float>*))(Il2CppBase() + 0x148BEF8))(0, manager, target, text, lifeTime);
	}
	template <typename T = void> static T SetSpectatorMode(UIWindowsManager* manager, bool isActive) {
		return ((T (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x1487BD8))(0, manager, isActive);
	}

};

