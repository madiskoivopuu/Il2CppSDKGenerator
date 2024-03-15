#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDMinimap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDMinimap"));
	}

	template <typename R = uintptr_t> R& _center() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = MinimapArrowView*> R& _arrowPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _minDistance() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _teammateArrowCollor() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = uintptr_t> R& _pvpTimer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _pvpTimeText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _pvpBtn() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppList<MinimapArrowView*>*& _arrows() {
		return *(Il2CppList<MinimapArrowView*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& _arrowCount() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int64_t> R& _lastPing() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(HUDMinimap*))(Il2CppBase() + 0x145E34C))(this);
	}
	template <typename R = void> R UpdateView(IUIWindow* window, GameEntity* avatar) {
		return ((R (*)(HUDMinimap*, IUIWindow*, GameEntity*))(Il2CppBase() + 0x145E408))(this, window, avatar);
	}
	template <typename R = void> R DrawArrow(float angle, MinimapArrowMode mode, uintptr_t arrowColor, bool notRotation, bool onBorder, bool ping) {
		return ((R (*)(HUDMinimap*, float, MinimapArrowMode, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x145F11C))(this, angle, mode, arrowColor, notRotation, onBorder, ping);
	}
	template <typename R = float> R GetAngle(BasePositionComponent* e1, BasePositionComponent* e2) {
		return ((R (*)(HUDMinimap*, BasePositionComponent*, BasePositionComponent*))(Il2CppBase() + 0x145F0C4))(this, e1, e2);
	}
	template <typename R = void> R HideArrows() {
		return ((R (*)(HUDMinimap*))(Il2CppBase() + 0x145F010))(this);
	}
	template <typename R = void> R OnPointerClick(uintptr_t eventData) {
		return ((R (*)(HUDMinimap*, uintptr_t))(Il2CppBase() + 0x145F324))(this, eventData);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(HUDMinimap*))(Il2CppBase() + 0x145F6C4))(this);
	}
	template <typename R = void> R Awakeb__11_0() {
		return ((R (*)(HUDMinimap*))(Il2CppBase() + 0x145F794))(this);
	}

};

