#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class MapLabelWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapLabelWindow"));
	}

	template <typename R = uintptr_t> R& LocationContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& PlayerContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& EventsArrowsRect() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& PlayersArrowsRect() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = UIViewController*> R& UIViewController() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = MapPlayerLabel*> R& AvatarLabel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = MapLocationLabel*> R& LocationLabelPrefab() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = MapPlayerLabel*> R& PlayerLabelPrefab() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = MapArrow*> R& PlayerArrowPrefab() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = MapArrow*> R& PointArrowPrefab() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = float> R& smoothTime() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = JoystickDPad*> R& D_Pad() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = float> R& MaxDistanceToPoint() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& PointSelectorPrefab() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 Il2CppList<MapPlayerLabel*>*& _playerLabels() {
		return *(Il2CppList<MapPlayerLabel*>**)((uintptr_t)this + 0xE8);
	}
	 Il2CppList<MapLocationLabel*>*& _pointLabels() {
		return *(Il2CppList<MapLocationLabel*>**)((uintptr_t)this + 0xF0);
	}
	 Il2CppList<MapArrow*>*& _playerArrows() {
		return *(Il2CppList<MapArrow*>**)((uintptr_t)this + 0xF8);
	}
	 Il2CppList<MapArrow*>*& _pointArrows() {
		return *(Il2CppList<MapArrow*>**)((uintptr_t)this + 0x100);
	}
	 HashSet1<Il2CppString*>*& _visiblePoints() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x108);
	}
	template <typename R = Il2CppString*> R& _pointName() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& _mainCamera() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = GameEntity*> R& _selectedPoint() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& _pointSelector() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = LocationWindow*> R& _locationWindow() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& _socialHubSelectorScale() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& _commonSelectorScale() {
		return *(R*)((uintptr_t)this + 0x144);
	}
	template <typename R = ArrowMarkerComparer*> static R& _arrowMarkerComparer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x1273D48))(this);
	}
	template <typename R = void> R UpdatePointLabels() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x1273DB0))(this);
	}
	template <typename R = void> R UpdatePlayerLabels() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x1274460))(this);
	}
	template <typename R = void> R UpdateAvatarLabel() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x1274878))(this);
	}
	template <typename R = void> R UpdatePlayerArrows() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x127495C))(this);
	}
	template <typename R = void> R UpdatePointArrows() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x1275D1C))(this);
	}
	template <typename R = void> R AddElementsForArrow(HashSet1<GameEntity*>* elementForArrow, bool players) {
		return ((R (*)(MapLabelWindow*, HashSet1<GameEntity*>*, bool))(Il2CppBase() + 0x12753A4))(this, elementForArrow, players);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MapLabelWindow*, float))(Il2CppBase() + 0x12763BC))(this, deltaTime);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(MapLabelWindow*, uintptr_t))(Il2CppBase() + 0x12764E0))(this, eventData);
	}
	template <typename R = void> R OnBeginDrag(uintptr_t eventData) {
		return ((R (*)(MapLabelWindow*, uintptr_t))(Il2CppBase() + 0x12767F8))(this, eventData);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(MapLabelWindow*, uintptr_t))(Il2CppBase() + 0x12768E4))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(MapLabelWindow*, uintptr_t))(Il2CppBase() + 0x1276CF4))(this, eventData);
	}
	template <typename R = void> R MoveToPoint(GameEntity* entity) {
		return ((R (*)(MapLabelWindow*, GameEntity*))(Il2CppBase() + 0x1276EA4))(this, entity);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x1277038))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x12778A4))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x12778AC))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x12778B4))(this);
	}
	template <typename R = void> R SelectNextPoint(JoystickMove move) {
		return ((R (*)(MapLabelWindow*, JoystickMove))(Il2CppBase() + 0x1277040))(this, move);
	}
	template <typename R = bool> R IsFOWUnlocked(MapUnityWorld* world, GameEntity* point) {
		return ((R (*)(MapLabelWindow*, MapUnityWorld*, GameEntity*))(Il2CppBase() + 0x12778BC))(this, world, point);
	}
	template <typename R = void> R OnSelectedPointClick() {
		return ((R (*)(MapLabelWindow*))(Il2CppBase() + 0x1277950))(this);
	}

};

