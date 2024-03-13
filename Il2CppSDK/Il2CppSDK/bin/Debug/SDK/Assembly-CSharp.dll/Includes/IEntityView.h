#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEntityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEntityView"));
	}


	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_OnGround() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_OnGround(bool value) {
		return ((T (*)(IEntityView*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_GameObject() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Transform() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetSocket(Il2CppString* name) {
		return ((T (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = uintptr_t> T get_DefaultSocket() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Position() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Position(uintptr_t value) {
		return ((T (*)(IEntityView*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_LocalScale() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_LocalScale(uintptr_t value) {
		return ((T (*)(IEntityView*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_HasSounds() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = EntitySounds*> T get_Sounds() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_HasAnimator() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(IEntityView*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_KeepAnimatorControllerStateOnDisable() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_KeepAnimatorControllerStateOnDisable(bool value) {
		return ((T (*)(IEntityView*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T AnimatorHasState(int32_t layerIndex, int32_t stateId) {
		return ((T (*)(IEntityView*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, layerIndex, stateId);
	}
	template <typename T = bool> T AnimatorGetBool(Il2CppString* name) {
		return ((T (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T AnimatorSetBool(int32_t key, bool value) {
		return ((T (*)(IEntityView*, int32_t, bool))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T AnimatorSetBool_1(Il2CppString* name, bool value) {
		return ((T (*)(IEntityView*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, name, value);
	}
	template <typename T = int32_t> T AnimatorGetInteger(Il2CppString* name) {
		return ((T (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T AnimatorSetInteger(int32_t key, int32_t value) {
		return ((T (*)(IEntityView*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T AnimatorSetInteger_1(Il2CppString* name, int32_t value) {
		return ((T (*)(IEntityView*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, name, value);
	}
	template <typename T = void> T AnimatorSetTrigger(Il2CppString* name) {
		return ((T (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T AnimatorSetTrigger_1(int32_t key) {
		return ((T (*)(IEntityView*, int32_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T AnimatorResetTrigger(int32_t key) {
		return ((T (*)(IEntityView*, int32_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = float> T AnimatorGetFloat(Il2CppString* name) {
		return ((T (*)(IEntityView*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T AnimatorSetFloat(int32_t key, float value) {
		return ((T (*)(IEntityView*, int32_t, float))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T AnimatorSetFloat_1(Il2CppString* name, float value) {
		return ((T (*)(IEntityView*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, name, value);
	}
	template <typename T = void> T AnimatorSetFloat_2(int32_t key, float value, float dampTime, float deltaTime) {
		return ((T (*)(IEntityView*, int32_t, float, float, float))(Il2CppBase() + 0x0))(this, key, value, dampTime, deltaTime);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(IEntityView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Destroy(float duration) {
		return ((T (*)(IEntityView*, float))(Il2CppBase() + 0x0))(this, duration);
	}
	template <typename T = void> T AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((T (*)(IEntityView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, effectGo, socketName);
	}
	template <typename T = void> T RemoveEffect(uintptr_t effectGo) {
		return ((T (*)(IEntityView*, uintptr_t))(Il2CppBase() + 0x0))(this, effectGo);
	}

};

