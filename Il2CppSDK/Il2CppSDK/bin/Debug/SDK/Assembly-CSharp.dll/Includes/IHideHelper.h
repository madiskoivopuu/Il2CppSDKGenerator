#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHideHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHideHelper"));
	}


	template <typename R = MinimapLabelView*> R get_MinimapLabel() {
		return ((R (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ResetColor(uintptr_t color) {
		return ((R (*)(IHideHelper*, uintptr_t))(Il2CppBase() + 0x0))(this, color);
	}
	template <typename R = void> R ResetTransparency(float value) {
		return ((R (*)(IHideHelper*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R SetColor(uintptr_t color, int32_t priority) {
		return ((R (*)(IHideHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, color, priority);
	}
	template <typename R = void> R SetTransparency(float value) {
		return ((R (*)(IHideHelper*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R SetVisible(bool isInvisible, bool isFriend) {
		return ((R (*)(IHideHelper*, bool, bool))(Il2CppBase() + 0x0))(this, isInvisible, isFriend);
	}
	template <typename R = void> R SetMinimapAlwaysVisible(bool isMinimapAlwaysVisible) {
		return ((R (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, isMinimapAlwaysVisible);
	}
	template <typename R = void> R SetMinimapHide(bool isMinimapHide) {
		return ((R (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, isMinimapHide);
	}
	template <typename R = void> R Death(GameEntity* entity) {
		return ((R (*)(IHideHelper*, GameEntity*))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = void> R SetupSlotView(ItemEntity* item, int32_t slotIndex, bool hd) {
		return ((R (*)(IHideHelper*, ItemEntity*, int32_t, bool))(Il2CppBase() + 0x0))(this, item, slotIndex, hd);
	}
	template <typename R = void> R SetupToolView(ItemEntity* item) {
		return ((R (*)(IHideHelper*, ItemEntity*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R SetMinimapIcon(GameEntity* entity, Il2CppString* iconName, bool directed) {
		return ((R (*)(IHideHelper*, GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, entity, iconName, directed);
	}
	template <typename R = void> R RemoveMinimapIcon() {
		return ((R (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R HideBullet() {
		return ((R (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R HideTool() {
		return ((R (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((R (*)(IHideHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, effectGo, socketName);
	}
	template <typename R = void> R SetToolFx(Il2CppString* name, bool active) {
		return ((R (*)(IHideHelper*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, name, active);
	}
	template <typename R = void> R HideWeaponAndTool() {
		return ((R (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ShowBullet() {
		return ((R (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R UpdateArmed(GameEntity* entity) {
		return ((R (*)(IHideHelper*, GameEntity*))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = void> R DestroyTool() {
		return ((R (*)(IHideHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R SetSneak(bool isSneak) {
		return ((R (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, isSneak);
	}
	template <typename R = void> R SetPolymorph(bool isPolymorph) {
		return ((R (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, isPolymorph);
	}
	template <typename R = void> R SetRiding(bool riding) {
		return ((R (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, riding);
	}
	template <typename R = void> R SetRenderActive(bool active) {
		return ((R (*)(IHideHelper*, bool))(Il2CppBase() + 0x0))(this, active);
	}
	template <typename R = void> R SetupGender(Gender gender, bool hd) {
		return ((R (*)(IHideHelper*, Gender, bool))(Il2CppBase() + 0x0))(this, gender, hd);
	}
	template <typename R = void> R AddChild(HideHelper* child) {
		return ((R (*)(IHideHelper*, HideHelper*))(Il2CppBase() + 0x0))(this, child);
	}
	template <typename R = void> R RemoveChild(HideHelper* child) {
		return ((R (*)(IHideHelper*, HideHelper*))(Il2CppBase() + 0x0))(this, child);
	}
	template <typename R = void> R Execute(GameEntity* entity, float deltaTime) {
		return ((R (*)(IHideHelper*, GameEntity*, float))(Il2CppBase() + 0x0))(this, entity, deltaTime);
	}

};

