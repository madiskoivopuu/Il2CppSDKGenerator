#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEntityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEntityView"));
	}


	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_OnGround() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_OnGround(bool value) {
		return ((R (*)(IEntityView*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = uintptr_t> R get_GameObject() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_Transform() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R GetSocket(Il2CppString* name) {
		return ((R (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = uintptr_t> R get_DefaultSocket() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_Position() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Position(uintptr_t value) {
		return ((R (*)(IEntityView*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = uintptr_t> R get_LocalScale() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_LocalScale(uintptr_t value) {
		return ((R (*)(IEntityView*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R get_HasSounds() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = EntitySounds*> R get_Sounds() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_HasAnimator() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsActive() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_IsActive(bool value) {
		return ((R (*)(IEntityView*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R get_KeepAnimatorControllerStateOnDisable() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_KeepAnimatorControllerStateOnDisable(bool value) {
		return ((R (*)(IEntityView*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R AnimatorHasState(int32_t layerIndex, int32_t stateId) {
		return ((R (*)(IEntityView*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, layerIndex, stateId);
	}
	template <typename R = bool> R AnimatorGetBool(Il2CppString* name) {
		return ((R (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = void> R AnimatorSetBool(int32_t key, bool value) {
		return ((R (*)(IEntityView*, int32_t, bool))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename R = void> R AnimatorSetBool_1(Il2CppString* name, bool value) {
		return ((R (*)(IEntityView*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, name, value);
	}
	template <typename R = int32_t> R AnimatorGetInteger(Il2CppString* name) {
		return ((R (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = void> R AnimatorSetInteger(int32_t key, int32_t value) {
		return ((R (*)(IEntityView*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename R = void> R AnimatorSetInteger_1(Il2CppString* name, int32_t value) {
		return ((R (*)(IEntityView*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, name, value);
	}
	template <typename R = void> R AnimatorSetTrigger(Il2CppString* name) {
		return ((R (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = void> R AnimatorSetTrigger_1(int32_t key) {
		return ((R (*)(IEntityView*, int32_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename R = void> R AnimatorResetTrigger(int32_t key) {
		return ((R (*)(IEntityView*, int32_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename R = float> R AnimatorGetFloat(Il2CppString* name) {
		return ((R (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = void> R AnimatorSetFloat(int32_t key, float value) {
		return ((R (*)(IEntityView*, int32_t, float))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename R = void> R AnimatorSetFloat_1(Il2CppString* name, float value) {
		return ((R (*)(IEntityView*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, name, value);
	}
	template <typename R = void> R AnimatorSetFloat_2(int32_t key, float value, float dampTime, float deltaTime) {
		return ((R (*)(IEntityView*, int32_t, float, float, float))(Il2CppBase() + 0x0))(this, key, value, dampTime, deltaTime);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Destroy(float duration) {
		return ((R (*)(IEntityView*, float))(Il2CppBase() + 0x0))(this, duration);
	}
	template <typename R = void> R AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((R (*)(IEntityView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, effectGo, socketName);
	}
	template <typename R = void> R RemoveEffect(uintptr_t effectGo) {
		return ((R (*)(IEntityView*, uintptr_t))(Il2CppBase() + 0x0))(this, effectGo);
	}

};

