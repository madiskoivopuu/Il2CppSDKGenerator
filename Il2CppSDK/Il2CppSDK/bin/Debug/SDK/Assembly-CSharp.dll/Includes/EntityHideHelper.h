#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EntityView.h" 

class EntityHideHelper : public EntityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityHideHelper"));
	}

	template <typename R = HideHelper*> R& _hideHelper() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = MinimapLabelView*> R get_MinimapLabel() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x13724F8))(this);
	}
	template <typename R = uintptr_t> R GetSocket(Il2CppString* name) {
		return ((R (*)(EntityHideHelper*, Il2CppString*))(Il2CppBase() + 0x1372584))(this, name);
	}
	template <typename R = uintptr_t> R get_DefaultSocket() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x137262C))(this);
	}
	template <typename R = void> R InitFromSource(EntityHideHelper* source) {
		return ((R (*)(EntityHideHelper*, EntityHideHelper*))(Il2CppBase() + 0x1372764))(this, source);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x137280C))(this);
	}
	template <typename R = void> R SetToolFx(Il2CppString* name, bool active) {
		return ((R (*)(EntityHideHelper*, Il2CppString*, bool))(Il2CppBase() + 0x13728D0))(this, name, active);
	}
	template <typename R = void> R ResetColor(uintptr_t color) {
		return ((R (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x137297C))(this, color);
	}
	template <typename R = void> R ResetTransparency(float value) {
		return ((R (*)(EntityHideHelper*, float))(Il2CppBase() + 0x1372A44))(this, value);
	}
	template <typename R = void> R SetColor(uintptr_t color, int32_t priority) {
		return ((R (*)(EntityHideHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x1372AE8))(this, color, priority);
	}
	template <typename R = void> R SetTransparency(float value) {
		return ((R (*)(EntityHideHelper*, float))(Il2CppBase() + 0x1372BC4))(this, value);
	}
	template <typename R = void> R SetVisible(bool isInvisible, bool isFriend) {
		return ((R (*)(EntityHideHelper*, bool, bool))(Il2CppBase() + 0x1372C68))(this, isInvisible, isFriend);
	}
	template <typename R = void> R SetMinimapAlwaysVisible(bool isMinimapAlwaysVisible) {
		return ((R (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1372D14))(this, isMinimapAlwaysVisible);
	}
	template <typename R = void> R SetMinimapHide(bool isMinimapHide) {
		return ((R (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1372DB8))(this, isMinimapHide);
	}
	template <typename R = void> R SetupSlotView(ItemEntity* item, int32_t slotIndex, bool hd) {
		return ((R (*)(EntityHideHelper*, ItemEntity*, int32_t, bool))(Il2CppBase() + 0x1372E5C))(this, item, slotIndex, hd);
	}
	template <typename R = void> R UpdateArmed(GameEntity* entity) {
		return ((R (*)(EntityHideHelper*, GameEntity*))(Il2CppBase() + 0x137307C))(this, entity);
	}
	template <typename R = void> R SetupToolView(ItemEntity* item) {
		return ((R (*)(EntityHideHelper*, ItemEntity*))(Il2CppBase() + 0x1373120))(this, item);
	}
	template <typename R = void> R SetMinimapIcon(GameEntity* entity, Il2CppString* iconName, bool directed) {
		return ((R (*)(EntityHideHelper*, GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0x13731C4))(this, entity, iconName, directed);
	}
	template <typename R = void> R RemoveMinimapIcon() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x1373270))(this);
	}
	template <typename R = void> R HideBullet() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x137338C))(this);
	}
	template <typename R = void> R HideTool() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x137341C))(this);
	}
	template <typename R = void> R Death(GameEntity* entity) {
		return ((R (*)(EntityHideHelper*, GameEntity*))(Il2CppBase() + 0x13734AC))(this, entity);
	}
	template <typename R = void> R AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((R (*)(EntityHideHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1373550))(this, effectGo, socketName);
	}
	template <typename R = void> R RemoveEffect(uintptr_t effectGo) {
		return ((R (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x13735FC))(this, effectGo);
	}
	template <typename R = void> R HideWeaponAndTool() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x13736A0))(this);
	}
	template <typename R = void> R ShowBullet() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x1373730))(this);
	}
	template <typename R = void> R DestroyTool() {
		return ((R (*)(EntityHideHelper*))(Il2CppBase() + 0x13737C0))(this);
	}
	template <typename R = void> R SetSneak(bool isSneak) {
		return ((R (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1373850))(this, isSneak);
	}
	template <typename R = void> R SetRenderActive(bool active) {
		return ((R (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x13738F4))(this, active);
	}
	template <typename R = void> R SetupGender(Gender* gender, bool hd) {
		return ((R (*)(EntityHideHelper*, Gender*, bool))(Il2CppBase() + 0x1373998))(this, gender, hd);
	}
	template <typename R = void> R Execute(GameEntity* entity, float deltaTime) {
		return ((R (*)(EntityHideHelper*, GameEntity*, float))(Il2CppBase() + 0x1373A44))(this, entity, deltaTime);
	}
	template <typename R = void> R SetPolymorph(bool isPolymorph) {
		return ((R (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1373AFC))(this, isPolymorph);
	}
	template <typename R = void> R SetRiding(bool riding) {
		return ((R (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1373D1C))(this, riding);
	}
	template <typename R = void> R AddChild(HideHelper* child) {
		return ((R (*)(EntityHideHelper*, HideHelper*))(Il2CppBase() + 0x1373DC0))(this, child);
	}
	template <typename R = void> R RemoveChild(HideHelper* child) {
		return ((R (*)(EntityHideHelper*, HideHelper*))(Il2CppBase() + 0x1373E64))(this, child);
	}

};

