#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class MapLabelWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapLabelWindow"));
	}

	template <typename T = uintptr_t> T& LocationContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PlayerContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& EventsArrowsRect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PlayersArrowsRect() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = UIViewController*> T& UIViewController() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = MapPlayerLabel*> T& AvatarLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = MapLocationLabel*> T& LocationLabelPrefab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = MapPlayerLabel*> T& PlayerLabelPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = MapArrow*> T& PlayerArrowPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = MapArrow*> T& PointArrowPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& smoothTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = JoystickDPad*> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& MaxDistanceToPoint() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& PointSelectorPrefab() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<MapPlayerLabel*>*> T& _playerLabels() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<MapLocationLabel*>*> T& _pointLabels() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppList<MapArrow*>*> T& _playerArrows() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<MapArrow*>*> T& _pointArrows() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _visiblePoints() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& _pointName() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _mainCamera() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = GameEntity*> T& _selectedPoint() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _pointSelector() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = LocationWindow*> T& _locationWindow() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _socialHubSelectorScale() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _commonSelectorScale() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = ArrowMarkerComparer*> static T& _arrowMarkerComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x1273D48))(this);
	}
	template <typename T = void> T UpdatePointLabels() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x1273DB0))(this);
	}
	template <typename T = void> T UpdatePlayerLabels() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x1274460))(this);
	}
	template <typename T = void> T UpdateAvatarLabel() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x1274878))(this);
	}
	template <typename T = void> T UpdatePlayerArrows() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x127495C))(this);
	}
	template <typename T = void> T UpdatePointArrows() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x1275D1C))(this);
	}
	template <typename T = void> T AddElementsForArrow(HashSet1GameEntity*>* elementForArrow, bool players) {
		return ((T (*)(MapLabelWindow*, HashSet1GameEntity*>*, bool))(Il2CppBase() + 0x12753A4))(this, elementForArrow, players);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MapLabelWindow*, float))(Il2CppBase() + 0x12763BC))(this, deltaTime);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(MapLabelWindow*, uintptr_t))(Il2CppBase() + 0x12764E0))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(MapLabelWindow*, uintptr_t))(Il2CppBase() + 0x12767F8))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(MapLabelWindow*, uintptr_t))(Il2CppBase() + 0x12768E4))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(MapLabelWindow*, uintptr_t))(Il2CppBase() + 0x1276CF4))(this, eventData);
	}
	template <typename T = void> T MoveToPoint(GameEntity* entity) {
		return ((T (*)(MapLabelWindow*, GameEntity*))(Il2CppBase() + 0x1276EA4))(this, entity);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x1277038))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x12778A4))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x12778AC))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x12778B4))(this);
	}
	template <typename T = void> T SelectNextPoint(JoystickMove* move) {
		return ((T (*)(MapLabelWindow*, JoystickMove*))(Il2CppBase() + 0x1277040))(this, move);
	}
	template <typename T = bool> T IsFOWUnlocked(MapUnityWorld* world, GameEntity* point) {
		return ((T (*)(MapLabelWindow*, MapUnityWorld*, GameEntity*))(Il2CppBase() + 0x12778BC))(this, world, point);
	}
	template <typename T = void> T OnSelectedPointClick() {
		return ((T (*)(MapLabelWindow*))(Il2CppBase() + 0x1277950))(this);
	}

};

