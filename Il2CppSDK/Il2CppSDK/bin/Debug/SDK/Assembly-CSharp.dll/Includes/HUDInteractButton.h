#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ImageButtonMonoBehaviour.h" 

class HUDInteractButton : public ImageButtonMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInteractButton"));
	}

	template <typename T = uintptr_t> T& DurabilityPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Durability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& CooldownImage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& CooldownText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& DefaultSprite() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Icons() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& ShowDurability() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = InputButton*> T& _inputButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = InputEntity*> T& _inputEntity() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = GameEntity*> T& _previousTarget() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _onHoldUpdateDurabilityCoroutine() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _iconsDict() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Nullable1bool>*> T& _lastGameInputIsEnabled() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HUDInteractButton*))(Il2CppBase() + 0x1456818))(this);
	}
	template <typename T = void> T SetIcon(Il2CppString* interactIcon) {
		return ((T (*)(HUDInteractButton*, Il2CppString*))(Il2CppBase() + 0x14568B4))(this, interactIcon);
	}
	template <typename T = void> T Bind(IUIWindow* window) {
		return ((T (*)(HUDInteractButton*, IUIWindow*))(Il2CppBase() + 0x1456AE8))(this, window);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(HUDInteractButton*))(Il2CppBase() + 0x1456DA0))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(HUDInteractButton*, float))(Il2CppBase() + 0x1457238))(this, deltaTime);
	}
	template <typename T = bool> T GameInputIsEnabled() {
		return ((T (*)(HUDInteractButton*))(Il2CppBase() + 0x1457674))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDInteractButton*, float))(Il2CppBase() + 0x14578D0))(this, deltaTime);
	}
	template <typename T = void> T SetEnable(bool value) {
		return ((T (*)(HUDInteractButton*, bool))(Il2CppBase() + 0x14580EC))(this, value);
	}
	template <typename T = void> T UpdateDurabilityIndicator(GameEntity* target) {
		return ((T (*)(HUDInteractButton*, GameEntity*))(Il2CppBase() + 0x1458280))(this, target);
	}
	template <typename T = void> T UpdateMiningDurability(GameDataEntity* targetData) {
		return ((T (*)(HUDInteractButton*, GameDataEntity*))(Il2CppBase() + 0x1456FC0))(this, targetData);
	}
	template <typename T = uintptr_t> T OnHoldUpdateDurabilityCoroutine(GameDataEntity* targetData) {
		return ((T (*)(HUDInteractButton*, GameDataEntity*))(Il2CppBase() + 0x1458538))(this, targetData);
	}

};

