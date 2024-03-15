#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ImageButtonMonoBehaviour.h" 

class HUDInteractButton : public ImageButtonMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInteractButton"));
	}

	template <typename R = uintptr_t> R& DurabilityPanel() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Durability() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& CooldownImage() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& CooldownText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& DefaultSprite() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<Icon*>*> R& Icons() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& ShowDurability() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = InputButton*> R& _inputButton() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = InputEntity*> R& _inputEntity() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = GameEntity*> R& _previousTarget() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _onHoldUpdateDurabilityCoroutine() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	 Il2CppDictionary<Il2CppString*, uintptr_t>*& _iconsDict() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)this + 0x88);
	}
	 Nullable1bool>*& _lastGameInputIsEnabled() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(HUDInteractButton*))(Il2CppBase() + 0x1456818))(this);
	}
	template <typename R = void> R SetIcon(Il2CppString* interactIcon) {
		return ((R (*)(HUDInteractButton*, Il2CppString*))(Il2CppBase() + 0x14568B4))(this, interactIcon);
	}
	template <typename R = void> R Bind(IUIWindow* window) {
		return ((R (*)(HUDInteractButton*, IUIWindow*))(Il2CppBase() + 0x1456AE8))(this, window);
	}
	template <typename R = void> R Unbind() {
		return ((R (*)(HUDInteractButton*))(Il2CppBase() + 0x1456DA0))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(HUDInteractButton*, float))(Il2CppBase() + 0x1457238))(this, deltaTime);
	}
	template <typename R = bool> R GameInputIsEnabled() {
		return ((R (*)(HUDInteractButton*))(Il2CppBase() + 0x1457674))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDInteractButton*, float))(Il2CppBase() + 0x14578D0))(this, deltaTime);
	}
	template <typename R = void> R SetEnable(bool value) {
		return ((R (*)(HUDInteractButton*, bool))(Il2CppBase() + 0x14580EC))(this, value);
	}
	template <typename R = void> R UpdateDurabilityIndicator(GameEntity* target) {
		return ((R (*)(HUDInteractButton*, GameEntity*))(Il2CppBase() + 0x1458280))(this, target);
	}
	template <typename R = void> R UpdateMiningDurability(GameDataEntity* targetData) {
		return ((R (*)(HUDInteractButton*, GameDataEntity*))(Il2CppBase() + 0x1456FC0))(this, targetData);
	}
	template <typename R = uintptr_t> R OnHoldUpdateDurabilityCoroutine(GameDataEntity* targetData) {
		return ((R (*)(HUDInteractButton*, GameDataEntity*))(Il2CppBase() + 0x1458538))(this, targetData);
	}

};

