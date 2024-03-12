#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EntityView" 

class EntityHideHelper: EntityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityHideHelper"));
	}

	template <typename T = uintptr_t> T& _hideHelper() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_MinimapLabel() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x13724F8))(this);
	}
	template <typename T = uintptr_t> T GetSocket(Il2CppString* name) {
		return ((T (*)(EntityHideHelper*, Il2CppString*))(Il2CppBase() + 0x1372584))(this, name);
	}
	template <typename T = uintptr_t> T get_DefaultSocket() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x137262C))(this);
	}
	template <typename T = void> T InitFromSource(uintptr_t source) {
		return ((T (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x1372764))(this, source);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x137280C))(this);
	}
	template <typename T = void> T SetToolFx(Il2CppString* name, bool active) {
		return ((T (*)(EntityHideHelper*, Il2CppString*, bool))(Il2CppBase() + 0x13728D0))(this, name, active);
	}
	template <typename T = void> T ResetColor(uintptr_t color) {
		return ((T (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x137297C))(this, color);
	}
	template <typename T = void> T ResetTransparency(float value) {
		return ((T (*)(EntityHideHelper*, float))(Il2CppBase() + 0x1372A44))(this, value);
	}
	template <typename T = void> T SetColor(uintptr_t color, int32_t priority) {
		return ((T (*)(EntityHideHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x1372AE8))(this, color, priority);
	}
	template <typename T = void> T SetTransparency(float value) {
		return ((T (*)(EntityHideHelper*, float))(Il2CppBase() + 0x1372BC4))(this, value);
	}
	template <typename T = void> T SetVisible(bool isInvisible, bool isFriend) {
		return ((T (*)(EntityHideHelper*, bool, bool))(Il2CppBase() + 0x1372C68))(this, isInvisible, isFriend);
	}
	template <typename T = void> T SetMinimapAlwaysVisible(bool isMinimapAlwaysVisible) {
		return ((T (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1372D14))(this, isMinimapAlwaysVisible);
	}
	template <typename T = void> T SetMinimapHide(bool isMinimapHide) {
		return ((T (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1372DB8))(this, isMinimapHide);
	}
	template <typename T = void> T SetupSlotView(uintptr_t item, int32_t slotIndex, bool hd) {
		return ((T (*)(EntityHideHelper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1372E5C))(this, item, slotIndex, hd);
	}
	template <typename T = void> T UpdateArmed(uintptr_t entity) {
		return ((T (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x137307C))(this, entity);
	}
	template <typename T = void> T SetupToolView(uintptr_t item) {
		return ((T (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x1373120))(this, item);
	}
	template <typename T = void> T SetMinimapIcon(uintptr_t entity, Il2CppString* iconName, bool directed) {
		return ((T (*)(EntityHideHelper*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x13731C4))(this, entity, iconName, directed);
	}
	template <typename T = void> T RemoveMinimapIcon() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x1373270))(this);
	}
	template <typename T = void> T HideBullet() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x137338C))(this);
	}
	template <typename T = void> T HideTool() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x137341C))(this);
	}
	template <typename T = void> T Death(uintptr_t entity) {
		return ((T (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x13734AC))(this, entity);
	}
	template <typename T = void> T AttachEffect(uintptr_t effectGo, Il2CppString* socketName) {
		return ((T (*)(EntityHideHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1373550))(this, effectGo, socketName);
	}
	template <typename T = void> T RemoveEffect(uintptr_t effectGo) {
		return ((T (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x13735FC))(this, effectGo);
	}
	template <typename T = void> T HideWeaponAndTool() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x13736A0))(this);
	}
	template <typename T = void> T ShowBullet() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x1373730))(this);
	}
	template <typename T = void> T DestroyTool() {
		return ((T (*)(EntityHideHelper*))(Il2CppBase() + 0x13737C0))(this);
	}
	template <typename T = void> T SetSneak(bool isSneak) {
		return ((T (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1373850))(this, isSneak);
	}
	template <typename T = void> T SetRenderActive(bool active) {
		return ((T (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x13738F4))(this, active);
	}
	template <typename T = void> T SetupGender(uintptr_t gender, bool hd) {
		return ((T (*)(EntityHideHelper*, uintptr_t, bool))(Il2CppBase() + 0x1373998))(this, gender, hd);
	}
	template <typename T = void> T Execute(uintptr_t entity, float deltaTime) {
		return ((T (*)(EntityHideHelper*, uintptr_t, float))(Il2CppBase() + 0x1373A44))(this, entity, deltaTime);
	}
	template <typename T = void> T SetPolymorph(bool isPolymorph) {
		return ((T (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1373AFC))(this, isPolymorph);
	}
	template <typename T = void> T SetRiding(bool riding) {
		return ((T (*)(EntityHideHelper*, bool))(Il2CppBase() + 0x1373D1C))(this, riding);
	}
	template <typename T = void> T AddChild(uintptr_t child) {
		return ((T (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x1373DC0))(this, child);
	}
	template <typename T = void> T RemoveChild(uintptr_t child) {
		return ((T (*)(EntityHideHelper*, uintptr_t))(Il2CppBase() + 0x1373E64))(this, child);
	}

};

}
