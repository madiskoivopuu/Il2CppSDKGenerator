#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityView"));
	}

	template <typename R = bool> R& OnGround() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& Transform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& GameObject() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1<bool>*& _hasSounds() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x28);
	}
	template <typename R = EntitySounds*> R& _sounds() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1<bool>*& _hasAnimator() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x1374690))(this);
	}
	template <typename R = uintptr_t> R get_Position() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x137A600))(this);
	}
	template <typename R = void> R set_Position(uintptr_t value) {
		return ((R (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A694))(this, value);
	}
	template <typename R = bool> R get_OnGround() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x137A754))(this);
	}
	template <typename R = void> R set_OnGround(bool value) {
		return ((R (*)(EntityView*, bool))(Il2CppBase() + 0x137A75C))(this, value);
	}
	template <typename R = uintptr_t> R get_LocalScale() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x137A768))(this);
	}
	template <typename R = void> R set_LocalScale(uintptr_t value) {
		return ((R (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A7FC))(this, value);
	}
	template <typename R = uintptr_t> R get_Transform() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x137A8BC))(this);
	}
	template <typename R = void> R set_Transform(uintptr_t value) {
		return ((R (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A8C4))(this, value);
	}
	template <typename R = uintptr_t> R get_GameObject() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x137A8CC))(this);
	}
	template <typename R = void> R set_GameObject(uintptr_t value) {
		return ((R (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A8D4))(this, value);
	}
	template <typename R = bool> R get_HasSounds() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x1373BC4))(this);
	}
	template <typename R = EntitySounds*> R get_Sounds() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x1374F88))(this);
	}
	template <typename R = bool> R get_HasAnimator() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x1374FC8))(this);
	}
	template <typename R = bool> R get_KeepAnimatorControllerStateOnDisable() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x1375130))(this);
	}
	template <typename R = void> R set_KeepAnimatorControllerStateOnDisable(bool value) {
		return ((R (*)(EntityView*, bool))(Il2CppBase() + 0x1375188))(this, value);
	}
	template <typename R = uintptr_t> R GetSocket(Il2CppString* name) {
		return ((R (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x137A8DC))(this, name);
	}
	template <typename R = uintptr_t> R get_DefaultSocket() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x137A8E4))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x1372838))(this);
	}
	template <typename R = bool> R AnimatorHasState(int32_t layerIndex, int32_t stateId) {
		return ((R (*)(EntityView*, int32_t, int32_t))(Il2CppBase() + 0x13751E0))(this, layerIndex, stateId);
	}
	template <typename R = bool> R AnimatorGetBool(Il2CppString* name) {
		return ((R (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x13753D8))(this, name);
	}
	template <typename R = void> R AnimatorSetBool(int32_t key, bool value) {
		return ((R (*)(EntityView*, int32_t, bool))(Il2CppBase() + 0x1375570))(this, key, value);
	}
	template <typename R = void> R AnimatorSetBool_1(Il2CppString* name, bool value) {
		return ((R (*)(EntityView*, Il2CppString*, bool))(Il2CppBase() + 0x1375718))(this, name, value);
	}
	template <typename R = void> R AnimatorSetInteger(int32_t key, int32_t value) {
		return ((R (*)(EntityView*, int32_t, int32_t))(Il2CppBase() + 0x1375EC8))(this, key, value);
	}
	template <typename R = void> R AnimatorSetInteger_1(Il2CppString* name, int32_t value) {
		return ((R (*)(EntityView*, Il2CppString*, int32_t))(Il2CppBase() + 0x1376070))(this, name, value);
	}
	template <typename R = void> R AnimatorSetTrigger(int32_t key) {
		return ((R (*)(EntityView*, int32_t))(Il2CppBase() + 0x1376394))(this, key);
	}
	template <typename R = void> R AnimatorSetTrigger_1(Il2CppString* name) {
		return ((R (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x137620C))(this, name);
	}
	template <typename R = void> R AnimatorResetTrigger(int32_t key) {
		return ((R (*)(EntityView*, int32_t))(Il2CppBase() + 0x1375380))(this, key);
	}
	template <typename R = int32_t> R AnimatorGetInteger(Il2CppString* name) {
		return ((R (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x1375784))(this, name);
	}
	template <typename R = float> R AnimatorGetFloat(Il2CppString* name) {
		return ((R (*)(EntityView*, Il2CppString*))(Il2CppBase() + 0x13757E4))(this, name);
	}
	template <typename R = void> R AnimatorSetFloat(Il2CppString* name, float value) {
		return ((R (*)(EntityView*, Il2CppString*, float))(Il2CppBase() + 0x1375B34))(this, name, value);
	}
	template <typename R = void> R AnimatorSetFloat_1(int32_t key, float value) {
		return ((R (*)(EntityView*, int32_t, float))(Il2CppBase() + 0x1375984))(this, key, value);
	}
	template <typename R = void> R AnimatorSetFloat_2(int32_t key, float value, float dampTime, float deltaTime) {
		return ((R (*)(EntityView*, int32_t, float, float, float))(Il2CppBase() + 0x1375D04))(this, key, value, dampTime, deltaTime);
	}
	template <typename R = void> R Destroy(float duration) {
		return ((R (*)(EntityView*, float))(Il2CppBase() + 0x13765E0))(this, duration);
	}
	template <typename R = bool> R get_IsActive() {
		return ((R (*)(EntityView*))(Il2CppBase() + 0x13766E0))(this);
	}
	template <typename R = void> R set_IsActive(bool value) {
		return ((R (*)(EntityView*, bool))(Il2CppBase() + 0x13768B4))(this, value);
	}
	template <typename R = void> R AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((R (*)(EntityView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x137A8EC))(this, effectGo, socketName);
	}
	template <typename R = void> R RemoveEffect(uintptr_t effectGo) {
		return ((R (*)(EntityView*, uintptr_t))(Il2CppBase() + 0x137A928))(this, effectGo);
	}

};

