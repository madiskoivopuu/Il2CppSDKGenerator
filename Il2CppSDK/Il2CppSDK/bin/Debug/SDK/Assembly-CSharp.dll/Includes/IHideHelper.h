#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHideHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHideHelper"));
	}


	template <typename T = MinimapLabelView*> T get_MinimapLabel() {
		return ((T (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ResetColor(uintptr_t color) {
		return ((T (*)(IHideHelper*, uintptr_t))(Il2CppBase() + 0x0))(this, color);
	}
	template <typename T = void> T ResetTransparency(float value) {
		return ((T (*)(IHideHelper*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetColor(uintptr_t color, int32_t priority) {
		return ((T (*)(IHideHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, color, priority);
	}
	template <typename T = void> T SetTransparency(float value) {
		return ((T (*)(IHideHelper*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetVisible(bool isInvisible, bool isFriend) {
		return ((T (*)(IHideHelper*, bool, bool))(Il2CppBase() + 0x0))(this, isInvisible, isFriend);
	}
	template <typename T = void> T SetMinimapAlwaysVisible(bool isMinimapAlwaysVisible) {
		return ((T (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, isMinimapAlwaysVisible);
	}
	template <typename T = void> T SetMinimapHide(bool isMinimapHide) {
		return ((T (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, isMinimapHide);
	}
	template <typename T = void> T Death(GameEntity* entity) {
		return ((T (*)(IHideHelper*, GameEntity*))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = void> T SetupSlotView(ItemEntity* item, int32_t slotIndex, bool hd) {
		return ((T (*)(IHideHelper*, ItemEntity*, int32_t, bool))(Il2CppBase() + 0x0))(this, item, slotIndex, hd);
	}
	template <typename T = void> T SetupToolView(ItemEntity* item) {
		return ((T (*)(IHideHelper*, ItemEntity*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T SetMinimapIcon(GameEntity* entity, Il2CppString* iconName, bool directed) {
		return ((T (*)(IHideHelper*, GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, entity, iconName, directed);
	}
	template <typename T = void> T RemoveMinimapIcon() {
		return ((T (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T HideBullet() {
		return ((T (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T HideTool() {
		return ((T (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((T (*)(IHideHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, effectGo, socketName);
	}
	template <typename T = void> T SetToolFx(Il2CppString* name, bool active) {
		return ((T (*)(IHideHelper*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, name, active);
	}
	template <typename T = void> T HideWeaponAndTool() {
		return ((T (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ShowBullet() {
		return ((T (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateArmed(GameEntity* entity) {
		return ((T (*)(IHideHelper*, GameEntity*))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = void> T DestroyTool() {
		return ((T (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetSneak(bool isSneak) {
		return ((T (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, isSneak);
	}
	template <typename T = void> T SetPolymorph(bool isPolymorph) {
		return ((T (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, isPolymorph);
	}
	template <typename T = void> T SetRiding(bool riding) {
		return ((T (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, riding);
	}
	template <typename T = void> T SetRenderActive(bool active) {
		return ((T (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, active);
	}
	template <typename T = void> T SetupGender(Gender* gender, bool hd) {
		return ((T (*)(IHideHelper*, Gender*, bool))(Il2CppBase() + 0x0))(this, gender, hd);
	}
	template <typename T = void> T AddChild(HideHelper* child) {
		return ((T (*)(IHideHelper*, HideHelper*))(Il2CppBase() + 0x0))(this, child);
	}
	template <typename T = void> T RemoveChild(HideHelper* child) {
		return ((T (*)(IHideHelper*, HideHelper*))(Il2CppBase() + 0x0))(this, child);
	}
	template <typename T = void> T Execute(GameEntity* entity, float deltaTime) {
		return ((T (*)(IHideHelper*, GameEntity*, float))(Il2CppBase() + 0x0))(this, entity, deltaTime);
	}

};

