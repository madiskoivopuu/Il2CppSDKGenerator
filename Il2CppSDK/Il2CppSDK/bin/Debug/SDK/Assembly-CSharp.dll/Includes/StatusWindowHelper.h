#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusWindowHelper"));
	}


	template <typename T = uintptr_t> static T GetStatusWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1496244))(0, manager);
	}
	template <typename T = uintptr_t> static T GetOrShowStatus(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x148714C))(0, manager);
	}
	template <typename T = void> static T CloseStatus(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x148778C))(0, manager);
	}
	template <typename T = void> static T OnPickup(uintptr_t manager, uintptr_t entity, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x14962DC))(0, manager, entity, data);
	}
	template <typename T = void> static T OnTournamentPoints(uintptr_t manager, int32_t points) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x149632C))(0, manager, points);
	}
	template <typename T = void> static T OnStoreExperienceNotification(uintptr_t manager, int64_t productDataId, uint32_t expValue) {
		return ((T (*)(void *, uintptr_t, int64_t, uint32_t))(Il2CppBase() + 0x1496360))(0, manager, productDataId, expValue);
	}
	template <typename T = void> static T ApplyDamage(uintptr_t manager, uintptr_t entity, float delta, uintptr_t damageType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x149639C))(0, manager, entity, delta, damageType);
	}
	template <typename T = void> static T ApplyDamageBlocked(uintptr_t manager, uintptr_t entity, float value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1496414))(0, manager, entity, value);
	}
	template <typename T = void> static T ApplyDamageShielded(uintptr_t manager, uintptr_t entity, float value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x149645C))(0, manager, entity, value);
	}
	template <typename T = void> static T AddExperience(uintptr_t manager, uint32_t delta) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x14964A4))(0, manager, delta);
	}
	template <typename T = void> static T AddPetExperience(uintptr_t manager, uint32_t delta) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x14964D8))(0, manager, delta);
	}
	template <typename T = void> static T ShowModifierNotification(uintptr_t manager, int32_t entityId, uintptr_t notification, float value, uintptr_t sourceItem) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x149650C))(0, manager, entityId, notification, value, sourceItem);
	}
	template <typename T = void> static T ShowTextBubble(uintptr_t manager, uintptr_t target, Il2CppString* text, void* lifeTime) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x148BEF8))(0, manager, target, text, lifeTime);
	}
	template <typename T = void> static T SetSpectatorMode(uintptr_t manager, bool isActive) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1487BD8))(0, manager, isActive);
	}

};

}
