#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityPlymorphView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityPlymorphView"));
	}

	template <typename T = EntityHideHelper*> T& Base() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = EntityHideHelper*> T& _current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<EntityHideHelper*>*> T& _others() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = EntityHideHelper*> T get_Base() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x137456C))(this);
	}
	template <typename T = void> T set_Base(EntityHideHelper* value) {
		return ((T (*)(EntityPlymorphView*, EntityHideHelper*))(Il2CppBase() + 0x1374574))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x137462C))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374740))(this);
	}
	template <typename T = void> T AddPolymorphView(EntityHideHelper* polymorphView) {
		return ((T (*)(EntityPlymorphView*, EntityHideHelper*))(Il2CppBase() + 0x1374790))(this, polymorphView);
	}
	template <typename T = void> T RemovePolymorphView(uintptr_t go) {
		return ((T (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x137488C))(this, go);
	}
	template <typename T = uintptr_t> T get_Position() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374A58))(this);
	}
	template <typename T = void> T set_Position(uintptr_t value) {
		return ((T (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x1374B04))(this, value);
	}
	template <typename T = bool> T get_OnGround() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374BDC))(this);
	}
	template <typename T = void> T set_OnGround(bool value) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1374BFC))(this, value);
	}
	template <typename T = uintptr_t> T get_LocalScale() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374C10))(this);
	}
	template <typename T = void> T set_LocalScale(uintptr_t value) {
		return ((T (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x1374CBC))(this, value);
	}
	template <typename T = uintptr_t> T get_GameObject() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374D94))(this);
	}
	template <typename T = uintptr_t> T get_Transform() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374DAC))(this);
	}
	template <typename T = bool> T get_HasSounds() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374DC4))(this);
	}
	template <typename T = EntitySounds*> T get_Sounds() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374E8C))(this);
	}
	template <typename T = bool> T get_HasAnimator() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1374FB8))(this);
	}
	template <typename T = bool> T get_KeepAnimatorControllerStateOnDisable() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1375120))(this);
	}
	template <typename T = void> T set_KeepAnimatorControllerStateOnDisable(bool value) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1375174))(this, value);
	}
	template <typename T = bool> T AnimatorHasState(int32_t layerIndex, int32_t stateId) {
		return ((T (*)(EntityPlymorphView*, int32_t, int32_t))(Il2CppBase() + 0x13751D0))(this, layerIndex, stateId);
	}
	template <typename T = void> T AnimatorResetTrigger(int32_t key) {
		return ((T (*)(EntityPlymorphView*, int32_t))(Il2CppBase() + 0x1375240))(this, key);
	}
	template <typename T = bool> T AnimatorGetBool(Il2CppString* name) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x13753C8))(this, name);
	}
	template <typename T = void> T AnimatorSetBool(int32_t key, bool value) {
		return ((T (*)(EntityPlymorphView*, int32_t, bool))(Il2CppBase() + 0x1375424))(this, key, value);
	}
	template <typename T = void> T AnimatorSetBool_1(Il2CppString* name, bool value) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*, bool))(Il2CppBase() + 0x13755CC))(this, name, value);
	}
	template <typename T = int32_t> T AnimatorGetInteger(Il2CppString* name) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x1375774))(this, name);
	}
	template <typename T = float> T AnimatorGetFloat(Il2CppString* name) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x13757D0))(this, name);
	}
	template <typename T = void> T AnimatorSetFloat(int32_t key, float value) {
		return ((T (*)(EntityPlymorphView*, int32_t, float))(Il2CppBase() + 0x1375830))(this, key, value);
	}
	template <typename T = void> T AnimatorSetFloat_1(Il2CppString* name, float value) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*, float))(Il2CppBase() + 0x13759E0))(this, name, value);
	}
	template <typename T = void> T AnimatorSetFloat_2(int32_t key, float value, float dampTime, float deltaTime) {
		return ((T (*)(EntityPlymorphView*, int32_t, float, float, float))(Il2CppBase() + 0x1375B90))(this, key, value, dampTime, deltaTime);
	}
	template <typename T = void> T AnimatorSetInteger(int32_t key, int32_t value) {
		return ((T (*)(EntityPlymorphView*, int32_t, int32_t))(Il2CppBase() + 0x1375D7C))(this, key, value);
	}
	template <typename T = void> T AnimatorSetInteger_1(Il2CppString* name, int32_t value) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*, int32_t))(Il2CppBase() + 0x1375F24))(this, name, value);
	}
	template <typename T = void> T AnimatorSetTrigger(Il2CppString* name) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x13760CC))(this, name);
	}
	template <typename T = void> T AnimatorSetTrigger_1(int32_t key) {
		return ((T (*)(EntityPlymorphView*, int32_t))(Il2CppBase() + 0x1376254))(this, key);
	}
	template <typename T = void> T AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((T (*)(EntityPlymorphView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13763DC))(this, effectGo, socketName);
	}
	template <typename T = void> T RemoveEffect(uintptr_t effectGo) {
		return ((T (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x13763F8))(this, effectGo);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1376414))(this);
	}
	template <typename T = void> T Destroy(float duration) {
		return ((T (*)(EntityPlymorphView*, float))(Il2CppBase() + 0x1376490))(this, duration);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x13766CC))(this);
	}
	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1376774))(this, value);
	}
	template <typename T = uintptr_t> T GetSocket(Il2CppString* name) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*))(Il2CppBase() + 0x1376994))(this, name);
	}
	template <typename T = uintptr_t> T get_DefaultSocket() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x13769B0))(this);
	}
	template <typename T = MinimapLabelView*> T get_MinimapLabel() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x13769CC))(this);
	}
	template <typename T = void> T SetMinimapIcon(GameEntity* entity, Il2CppString* iconName, bool directed) {
		return ((T (*)(EntityPlymorphView*, GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0x13769DC))(this, entity, iconName, directed);
	}
	template <typename T = void> T RemoveMinimapIcon() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x13769F0))(this);
	}
	template <typename T = void> T Death(GameEntity* entity) {
		return ((T (*)(EntityPlymorphView*, GameEntity*))(Il2CppBase() + 0x1376A00))(this, entity);
	}
	template <typename T = void> T DestroyTool() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1376D64))(this);
	}
	template <typename T = void> T Execute(GameEntity* entity, float deltaTime) {
		return ((T (*)(EntityPlymorphView*, GameEntity*, float))(Il2CppBase() + 0x1376E90))(this, entity, deltaTime);
	}
	template <typename T = void> T HideBullet() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1376FE4))(this);
	}
	template <typename T = void> T HideTool() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1377110))(this);
	}
	template <typename T = void> T HideWeaponAndTool() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x137723C))(this);
	}
	template <typename T = void> T ResetColor(uintptr_t color) {
		return ((T (*)(EntityPlymorphView*, uintptr_t))(Il2CppBase() + 0x1377368))(this, color);
	}
	template <typename T = void> T ResetTransparency(float value) {
		return ((T (*)(EntityPlymorphView*, float))(Il2CppBase() + 0x1377378))(this, value);
	}
	template <typename T = void> T SetColor(uintptr_t color, int32_t priority) {
		return ((T (*)(EntityPlymorphView*, uintptr_t, int32_t))(Il2CppBase() + 0x1377388))(this, color, priority);
	}
	template <typename T = void> T SetTransparency(float value) {
		return ((T (*)(EntityPlymorphView*, float))(Il2CppBase() + 0x1377398))(this, value);
	}
	template <typename T = void> T SetPolymorph(bool isPolymorph) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x13773A8))(this, isPolymorph);
	}
	template <typename T = void> T SetRiding(bool riding) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x13773AC))(this, riding);
	}
	template <typename T = void> T SetRenderActive(bool active) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x13774EC))(this, active);
	}
	template <typename T = void> T SetSneak(bool isSneak) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x137762C))(this, isSneak);
	}
	template <typename T = void> T SetupGender(Gender* gender, bool hd) {
		return ((T (*)(EntityPlymorphView*, Gender*, bool))(Il2CppBase() + 0x137776C))(this, gender, hd);
	}
	template <typename T = void> T SetupSlotView(ItemEntity* item, int32_t slotIndex, bool hd) {
		return ((T (*)(EntityPlymorphView*, ItemEntity*, int32_t, bool))(Il2CppBase() + 0x13778B8))(this, item, slotIndex, hd);
	}
	template <typename T = void> T SetToolFx(Il2CppString* name, bool active) {
		return ((T (*)(EntityPlymorphView*, Il2CppString*, bool))(Il2CppBase() + 0x1377A24))(this, name, active);
	}
	template <typename T = void> T UpdateArmed(GameEntity* entity) {
		return ((T (*)(EntityPlymorphView*, GameEntity*))(Il2CppBase() + 0x1377A38))(this, entity);
	}
	template <typename T = void> T SetupToolView(ItemEntity* item) {
		return ((T (*)(EntityPlymorphView*, ItemEntity*))(Il2CppBase() + 0x1377A48))(this, item);
	}
	template <typename T = void> T SetVisible(bool isInvisible, bool isFriend) {
		return ((T (*)(EntityPlymorphView*, bool, bool))(Il2CppBase() + 0x1377A58))(this, isInvisible, isFriend);
	}
	template <typename T = void> T SetMinimapAlwaysVisible(bool isMinimapAlwaysVisible) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1377BA4))(this, isMinimapAlwaysVisible);
	}
	template <typename T = void> T SetMinimapHide(bool isMinimapHide) {
		return ((T (*)(EntityPlymorphView*, bool))(Il2CppBase() + 0x1377BB8))(this, isMinimapHide);
	}
	template <typename T = void> T ShowBullet() {
		return ((T (*)(EntityPlymorphView*))(Il2CppBase() + 0x1377BCC))(this);
	}
	template <typename T = void> T AddChild(HideHelper* child) {
		return ((T (*)(EntityPlymorphView*, HideHelper*))(Il2CppBase() + 0x1377CF8))(this, child);
	}
	template <typename T = void> T RemoveChild(HideHelper* child) {
		return ((T (*)(EntityPlymorphView*, HideHelper*))(Il2CppBase() + 0x1377D08))(this, child);
	}

};

