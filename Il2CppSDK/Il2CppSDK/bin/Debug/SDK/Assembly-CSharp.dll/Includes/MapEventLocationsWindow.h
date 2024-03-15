#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapEventLocationsWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapEventLocationsWindow"));
	}

	template <typename R = Il2CppString*> static R& COMPASS_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ENEMY_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 Il2CppList<MapEventLocationElement*>*& _locationElements() {
		return *(Il2CppList<MapEventLocationElement*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& _maxElements() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _showElementTimeout() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 IGroup1GameEntity*>*& _entities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x38);
	}
	 HashSet1int32_t>*& _addedPoints() {
		return *(HashSet1int32_t>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _currentElement() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _nextElementTimeout() {
		return *(R*)((uintptr_t)this + 0x4C);
	}

	template <typename R = void> R Bind(UIWindow* window) {
		return ((R (*)(MapEventLocationsWindow*, UIWindow*))(Il2CppBase() + 0x126D2D8))(this, window);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(MapEventLocationsWindow*))(Il2CppBase() + 0x126D510))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(MapEventLocationsWindow*, float))(Il2CppBase() + 0x126D60C))(this, deltaTime);
	}
	template <typename R = void> R AddPointToPanel(GameEntity* pointEntity) {
		return ((R (*)(MapEventLocationsWindow*, GameEntity*))(Il2CppBase() + 0x126DD54))(this, pointEntity);
	}
	template <typename R = void> R OnPointRemoved(int32_t id, Il2CppString* blueprint) {
		return ((R (*)(MapEventLocationsWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x126E0FC))(this, id, blueprint);
	}

};

