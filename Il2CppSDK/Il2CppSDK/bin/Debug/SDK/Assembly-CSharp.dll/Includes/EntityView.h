#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityView"));
	}

	template <typename T = bool> T& OnGround() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Transform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1bool>*> T& _hasSounds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = EntitySounds*> T& _sounds() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Nullable1bool>*> T& _hasAnimator() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x1374690))(this);
	}
	template <typename T = uintptr_t> T get_Position() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x137A600))(this);
	}
	template <typename T = void> T set_Position(uintptr_t value) {
		return ((T (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A694))(this, value);
	}
	template <typename T = bool> T get_OnGround() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x137A754))(this);
	}
	template <typename T = void> T set_OnGround(bool value) {
		return ((T (*)(EntityView*, bool))(Il2CppBase() + 0x137A75C))(this, value);
	}
	template <typename T = uintptr_t> T get_LocalScale() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x137A768))(this);
	}
	template <typename T = void> T set_LocalScale(uintptr_t value) {
		return ((T (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A7FC))(this, value);
	}
	template <typename T = uintptr_t> T get_Transform() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x137A8BC))(this);
	}
	template <typename T = void> T set_Transform(uintptr_t value) {
		return ((T (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A8C4))(this, value);
	}
	template <typename T = uintptr_t> T get_GameObject() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x137A8CC))(this);
	}
	template <typename T = void> T set_GameObject(uintptr_t value) {
		return ((T (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A8D4))(this, value);
	}
	template <typename T = bool> T get_HasSounds() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x1373BC4))(this);
	}
	template <typename T = EntitySounds*> T get_Sounds() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x1374F88))(this);
	}
	template <typename T = bool> T get_HasAnimator() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x1374FC8))(this);
	}
	template <typename T = bool> T get_KeepAnimatorControllerStateOnDisable() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x1375130))(this);
	}
	template <typename T = void> T set_KeepAnimatorControllerStateOnDisable(bool value) {
		return ((T (*)(EntityView*, bool))(Il2CppBase() + 0x1375188))(this, value);
	}
	template <typename T = uintptr_t> T GetSocket(Il2CppString* name) {
		return ((T (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x137A8DC))(this, name);
	}
	template <typename T = uintptr_t> T get_DefaultSocket() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x137A8E4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x1372838))(this);
	}
	template <typename T = bool> T AnimatorHasState(int32_t layerIndex, int32_t stateId) {
		return ((T (*)(EntityView*, int32_t, int32_t))(Il2CppBase() + 0x13751E0))(this, layerIndex, stateId);
	}
	template <typename T = bool> T AnimatorGetBool(Il2CppString* name) {
		return ((T (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x13753D8))(this, name);
	}
	template <typename T = void> T AnimatorSetBool(int32_t key, bool value) {
		return ((T (*)(EntityView*, int32_t, bool))(Il2CppBase() + 0x1375570))(this, key, value);
	}
	template <typename T = void> T AnimatorSetBool_1(Il2CppString* name, bool value) {
		return ((T (*)(EntityView*, Il2CppString*, bool))(Il2CppBase() + 0x1375718))(this, name, value);
	}
	template <typename T = void> T AnimatorSetInteger(int32_t key, int32_t value) {
		return ((T (*)(EntityView*, int32_t, int32_t))(Il2CppBase() + 0x1375EC8))(this, key, value);
	}
	template <typename T = void> T AnimatorSetInteger_1(Il2CppString* name, int32_t value) {
		return ((T (*)(EntityView*, Il2CppString*, int32_t))(Il2CppBase() + 0x1376070))(this, name, value);
	}
	template <typename T = void> T AnimatorSetTrigger(int32_t key) {
		return ((T (*)(EntityView*, int32_t))(Il2CppBase() + 0x1376394))(this, key);
	}
	template <typename T = void> T AnimatorSetTrigger_1(Il2CppString* name) {
		return ((T (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x137620C))(this, name);
	}
	template <typename T = void> T AnimatorResetTrigger(int32_t key) {
		return ((T (*)(EntityView*, int32_t))(Il2CppBase() + 0x1375380))(this, key);
	}
	template <typename T = int32_t> T AnimatorGetInteger(Il2CppString* name) {
		return ((T (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x1375784))(this, name);
	}
	template <typename T = float> T AnimatorGetFloat(Il2CppString* name) {
		return ((T (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x13757E4))(this, name);
	}
	template <typename T = void> T AnimatorSetFloat(Il2CppString* name, float value) {
		return ((T (*)(EntityView*, Il2CppString*, float))(Il2CppBase() + 0x1375B34))(this, name, value);
	}
	template <typename T = void> T AnimatorSetFloat_1(int32_t key, float value) {
		return ((T (*)(EntityView*, int32_t, float))(Il2CppBase() + 0x1375984))(this, key, value);
	}
	template <typename T = void> T AnimatorSetFloat_2(int32_t key, float value, float dampTime, float deltaTime) {
		return ((T (*)(EntityView*, int32_t, float, float, float))(Il2CppBase() + 0x1375D04))(this, key, value, dampTime, deltaTime);
	}
	template <typename T = void> T Destroy(float duration) {
		return ((T (*)(EntityView*, float))(Il2CppBase() + 0x13765E0))(this, duration);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(EntityView*))(Il2CppBase() + 0x13766E0))(this);
	}
	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(EntityView*, bool))(Il2CppBase() + 0x13768B4))(this, value);
	}
	template <typename T = void> T AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((T (*)(EntityView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x137A8EC))(this, effectGo, socketName);
	}
	template <typename T = void> T RemoveEffect(uintptr_t effectGo) {
		return ((T (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A928))(this, effectGo);
	}

};

