#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapEventLocationsWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapEventLocationsWindow"));
	}

	template <typename T = Il2CppString*> static T& COMPASS_TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENEMY_TAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _locationElements() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _maxElements() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _showElementTimeout() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& _addedPoints() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _currentElement() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _nextElementTimeout() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(MapEventLocationsWindow*, uintptr_t))(Il2CppBase() + 0x126D2D8))(this, window);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MapEventLocationsWindow*))(Il2CppBase() + 0x126D510))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(MapEventLocationsWindow*, float))(Il2CppBase() + 0x126D60C))(this, deltaTime);
	}
	template <typename T = void> T AddPointToPanel(uintptr_t pointEntity) {
		return ((T (*)(MapEventLocationsWindow*, uintptr_t))(Il2CppBase() + 0x126DD54))(this, pointEntity);
	}
	template <typename T = void> T OnPointRemoved(int32_t id, Il2CppString* blueprint) {
		return ((T (*)(MapEventLocationsWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x126E0FC))(this, id, blueprint);
	}

};

}
