#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDMinimap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDMinimap"));
	}

	template <typename T = uintptr_t> T& _center() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = MinimapArrowView*> T& _arrowPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _minDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _teammateArrowCollor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _pvpTimer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _pvpTimeText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _pvpBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<MinimapArrowView*>*> T& _arrows() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _arrowCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& _lastPing() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HUDMinimap*))(Il2CppBase() + 0x145E34C))(this);
	}
	template <typename T = void> T UpdateView(IUIWindow* window, GameEntity* avatar) {
		return ((T (*)(HUDMinimap*, IUIWindow*, GameEntity*))(Il2CppBase() + 0x145E408))(this, window, avatar);
	}
	template <typename T = void> T DrawArrow(float angle, MinimapArrowMode* mode, uintptr_t arrowColor, bool notRotation, bool onBorder, bool ping) {
		return ((T (*)(HUDMinimap*, float, MinimapArrowMode*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x145F11C))(this, angle, mode, arrowColor, notRotation, onBorder, ping);
	}
	template <typename T = float> T GetAngle(BasePositionComponent* e1, BasePositionComponent* e2) {
		return ((T (*)(HUDMinimap*, BasePositionComponent*, BasePositionComponent*))(Il2CppBase() + 0x145F0C4))(this, e1, e2);
	}
	template <typename T = void> T HideArrows() {
		return ((T (*)(HUDMinimap*))(Il2CppBase() + 0x145F010))(this);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(HUDMinimap*, uintptr_t))(Il2CppBase() + 0x145F324))(this, eventData);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HUDMinimap*))(Il2CppBase() + 0x145F6C4))(this);
	}
	template <typename T = void> T Awakeb__11_0() {
		return ((T (*)(HUDMinimap*))(Il2CppBase() + 0x145F794))(this);
	}

};

