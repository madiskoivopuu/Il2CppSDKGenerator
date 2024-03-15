#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityPlymorphView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityPlymorphView"));
	}

	template <typename R = EntityHideHelper*> R& Base() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = EntityHideHelper*> R& _current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<EntityHideHelper*>*& _others() {
		return *(Il2CppList<EntityHideHelper*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = EntityHideHelper*> R get_Base() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x137456C))(this);
	}
	template <typename R = void> R set_Base(EntityHideHelper* value) {
		return ((R (*)(EntityPlymorphView*, EntityHideHelper*))(Il2CppBase() + 0x1374574))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x137462C))(this);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374740))(this);
	}
	template <typename R = void> R AddPolymorphView(EntityHideHelper* polymorphView) {
		return ((R (*)(EntityPlymorphView*, EntityHideHelper*))(Il2CppBase() + 0x1374790))(this, polymorphView);
	}
	template <typename R = void> R RemovePolymorphView(uintptr_t go) {
		return ((R (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x137488C))(this, go);
	}
	template <typename R = uintptr_t> R get_Position() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374A58))(this);
	}
	template <typename R = void> R set_Position(uintptr_t value) {
		return ((R (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x1374B04))(this, value);
	}
	template <typename R = bool> R get_OnGround() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374BDC))(this);
	}
	template <typename R = void> R set_OnGround(bool value) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1374BFC))(this, value);
	}
	template <typename R = uintptr_t> R get_LocalScale() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374C10))(this);
	}
	template <typename R = void> R set_LocalScale(uintptr_t value) {
		return ((R (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x1374CBC))(this, value);
	}
	template <typename R = uintptr_t> R get_GameObject() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374D94))(this);
	}
	template <typename R = uintptr_t> R get_Transform() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374DAC))(this);
	}
	template <typename R = bool> R get_HasSounds() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374DC4))(this);
	}
	template <typename R = EntitySounds*> R get_Sounds() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374E8C))(this);
	}
	template <typename R = bool> R get_HasAnimator() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374FB8))(this);
	}
	template <typename R = bool> R get_KeepAnimatorControllerStateOnDisable() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1375120))(this);
	}
	template <typename R = void> R set_KeepAnimatorControllerStateOnDisable(bool value) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1375174))(this, value);
	}
	template <typename R = bool> R AnimatorHasState(int32_t layerIndex, int32_t stateId) {
		return ((R (*)(EntityPlymorphView*, int32_t, int32_t))(Il2CppBase() + 0x13751D0))(this, layerIndex, stateId);
	}
	template <typename R = void> R AnimatorResetTrigger(int32_t key) {
		return ((R (*)(EntityPlymorphView*, int32_t))(Il2CppBase() + 0x1375240))(this, key);
	}
	template <typename R = bool> R AnimatorGetBool(Il2CppString* name) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x13753C8))(this, name);
	}
	template <typename R = void> R AnimatorSetBool(int32_t key, bool value) {
		return ((R (*)(EntityPlymorphView*, int32_t, bool))(Il2CppBase() + 0x1375424))(this, key, value);
	}
	template <typename R = void> R AnimatorSetBool_1(Il2CppString* name, bool value) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*, bool))(Il2CppBase() + 0x13755CC))(this, name, value);
	}
	template <typename R = int32_t> R AnimatorGetInteger(Il2CppString* name) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x1375774))(this, name);
	}
	template <typename R = float> R AnimatorGetFloat(Il2CppString* name) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x13757D0))(this, name);
	}
	template <typename R = void> R AnimatorSetFloat(int32_t key, float value) {
		return ((R (*)(EntityPlymorphView*, int32_t, float))(Il2CppBase() + 0x1375830))(this, key, value);
	}
	template <typename R = void> R AnimatorSetFloat_1(Il2CppString* name, float value) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*, float))(Il2CppBase() + 0x13759E0))(this, name, value);
	}
	template <typename R = void> R AnimatorSetFloat_2(int32_t key, float value, float dampTime, float deltaTime) {
		return ((R (*)(EntityPlymorphView*, int32_t, float, float, float))(Il2CppBase() + 0x1375B90))(this, key, value, dampTime, deltaTime);
	}
	template <typename R = void> R AnimatorSetInteger(int32_t key, int32_t value) {
		return ((R (*)(EntityPlymorphView*, int32_t, int32_t))(Il2CppBase() + 0x1375D7C))(this, key, value);
	}
	template <typename R = void> R AnimatorSetInteger_1(Il2CppString* name, int32_t value) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*, int32_t))(Il2CppBase() + 0x1375F24))(this, name, value);
	}
	template <typename R = void> R AnimatorSetTrigger(Il2CppString* name) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x13760CC))(this, name);
	}
	template <typename R = void> R AnimatorSetTrigger_1(int32_t key) {
		return ((R (*)(EntityPlymorphView*, int32_t))(Il2CppBase() + 0x1376254))(this, key);
	}
	template <typename R = void> R AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((R (*)(EntityPlymorphView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13763DC))(this, effectGo, socketName);
	}
	template <typename R = void> R RemoveEffect(uintptr_t effectGo) {
		return ((R (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x13763F8))(this, effectGo);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1376414))(this);
	}
	template <typename R = void> R Destroy(float duration) {
		return ((R (*)(EntityPlymorphView*, float))(Il2CppBase() + 0x1376490))(this, duration);
	}
	template <typename R = bool> R get_IsActive() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x13766CC))(this);
	}
	template <typename R = void> R set_IsActive(bool value) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1376774))(this, value);
	}
	template <typename R = uintptr_t> R GetSocket(Il2CppString* name) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x1376994))(this, name);
	}
	template <typename R = uintptr_t> R get_DefaultSocket() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x13769B0))(this);
	}
	template <typename R = MinimapLabelView*> R get_MinimapLabel() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x13769CC))(this);
	}
	template <typename R = void> R SetMinimapIcon(GameEntity* entity, Il2CppString* iconName, bool directed) {
		return ((R (*)(EntityPlymorphView*, GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0x13769DC))(this, entity, iconName, directed);
	}
	template <typename R = void> R RemoveMinimapIcon() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x13769F0))(this);
	}
	template <typename R = void> R Death(GameEntity* entity) {
		return ((R (*)(EntityPlymorphView*, GameEntity*))(Il2CppBase() + 0x1376A00))(this, entity);
	}
	template <typename R = void> R DestroyTool() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1376D64))(this);
	}
	template <typename R = void> R Execute(GameEntity* entity, float deltaTime) {
		return ((R (*)(EntityPlymorphView*, GameEntity*, float))(Il2CppBase() + 0x1376E90))(this, entity, deltaTime);
	}
	template <typename R = void> R HideBullet() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1376FE4))(this);
	}
	template <typename R = void> R HideTool() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1377110))(this);
	}
	template <typename R = void> R HideWeaponAndTool() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x137723C))(this);
	}
	template <typename R = void> R ResetColor(uintptr_t color) {
		return ((R (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x1377368))(this, color);
	}
	template <typename R = void> R ResetTransparency(float value) {
		return ((R (*)(EntityPlymorphView*, float))(Il2CppBase() + 0x1377378))(this, value);
	}
	template <typename R = void> R SetColor(uintptr_t color, int32_t priority) {
		return ((R (*)(EntityPlymorphView*, uintptr_t, int32_t))(Il2CppBase() + 0x1377388))(this, color, priority);
	}
	template <typename R = void> R SetTransparency(float value) {
		return ((R (*)(EntityPlymorphView*, float))(Il2CppBase() + 0x1377398))(this, value);
	}
	template <typename R = void> R SetPolymorph(bool isPolymorph) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x13773A8))(this, isPolymorph);
	}
	template <typename R = void> R SetRiding(bool riding) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x13773AC))(this, riding);
	}
	template <typename R = void> R SetRenderActive(bool active) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x13774EC))(this, active);
	}
	template <typename R = void> R SetSneak(bool isSneak) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x137762C))(this, isSneak);
	}
	template <typename R = void> R SetupGender(Gender gender, bool hd) {
		return ((R (*)(EntityPlymorphView*, Gender, bool))(Il2CppBase() + 0x137776C))(this, gender, hd);
	}
	template <typename R = void> R SetupSlotView(ItemEntity* item, int32_t slotIndex, bool hd) {
		return ((R (*)(EntityPlymorphView*, ItemEntity*, int32_t, bool))(Il2CppBase() + 0x13778B8))(this, item, slotIndex, hd);
	}
	template <typename R = void> R SetToolFx(Il2CppString* name, bool active) {
		return ((R (*)(EntityPlymorphView*, Il2CppString*, bool))(Il2CppBase() + 0x1377A24))(this, name, active);
	}
	template <typename R = void> R UpdateArmed(GameEntity* entity) {
		return ((R (*)(EntityPlymorphView*, GameEntity*))(Il2CppBase() + 0x1377A38))(this, entity);
	}
	template <typename R = void> R SetupToolView(ItemEntity* item) {
		return ((R (*)(EntityPlymorphView*, ItemEntity*))(Il2CppBase() + 0x1377A48))(this, item);
	}
	template <typename R = void> R SetVisible(bool isInvisible, bool isFriend) {
		return ((R (*)(EntityPlymorphView*, bool, bool))(Il2CppBase() + 0x1377A58))(this, isInvisible, isFriend);
	}
	template <typename R = void> R SetMinimapAlwaysVisible(bool isMinimapAlwaysVisible) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1377BA4))(this, isMinimapAlwaysVisible);
	}
	template <typename R = void> R SetMinimapHide(bool isMinimapHide) {
		return ((R (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1377BB8))(this, isMinimapHide);
	}
	template <typename R = void> R ShowBullet() {
		return ((R (*)(EntityPlymorphView*))(Il2CppBase() + 0x1377BCC))(this);
	}
	template <typename R = void> R AddChild(HideHelper* child) {
		return ((R (*)(EntityPlymorphView*, HideHelper*))(Il2CppBase() + 0x1377CF8))(this, child);
	}
	template <typename R = void> R RemoveChild(HideHelper* child) {
		return ((R (*)(EntityPlymorphView*, HideHelper*))(Il2CppBase() + 0x1377D08))(this, child);
	}

};

