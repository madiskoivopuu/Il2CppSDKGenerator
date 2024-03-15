#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoorsAndWalls
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DoorsAndWalls"));
	}

	template <typename R = bool> R& _changed() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Width() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& Height() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uint16_t> static R& NONE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& WALL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& FAKE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_OR_WALL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& UP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& LEFT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& RIGHT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_UP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_DOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_LEFT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_RIGHT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_DOOR_UP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_DOOR_DOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_DOOR_LEFT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_DOOR_RIGHT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& ANY_WALL_UP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& ANY_WALL_DOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& ANY_WALL_LEFT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& ANY_WALL_RIGHT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& WALL_UP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& WALL_DOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& WALL_LEFT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& WALL_RIGHT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_WALL_UP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_WALL_DOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_WALL_LEFT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_WALL_RIGHT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_OR_WALL_UP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_OR_WALL_DOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_OR_WALL_LEFT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& DOOR_OR_WALL_RIGHT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_DOOR_OR_WALL_UP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_DOOR_OR_WALL_DOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_DOOR_OR_WALL_LEFT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_DOOR_OR_WALL_RIGHT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& FLOOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint16_t> static R& NOT_FLOOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = LocationEntity*> R& _worldParams() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = IArenaWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _doorsAndWalls() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _offset() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = bool> R get_Changed() {
		return ((R (*)(DoorsAndWalls*))(Il2CppBase() + 0x13030E8))(this);
	}
	template <typename R = int32_t> R get_Width() {
		return ((R (*)(DoorsAndWalls*))(Il2CppBase() + 0x1303104))(this);
	}
	template <typename R = void> R set_Width(int32_t value) {
		return ((R (*)(DoorsAndWalls*, int32_t))(Il2CppBase() + 0x130310C))(this, value);
	}
	template <typename R = int32_t> R get_Height() {
		return ((R (*)(DoorsAndWalls*))(Il2CppBase() + 0x1303114))(this);
	}
	template <typename R = void> R set_Height(int32_t value) {
		return ((R (*)(DoorsAndWalls*, int32_t))(Il2CppBase() + 0x130311C))(this, value);
	}
	template <typename R = uint16_t> R get_Item(int32_t x, int32_t y) {
		return ((R (*)(DoorsAndWalls*, int32_t, int32_t))(Il2CppBase() + 0x1303124))(this, x, y);
	}
	template <typename R = uint16_t> R get_Item_1(Coord coord) {
		return ((R (*)(DoorsAndWalls*, Coord))(Il2CppBase() + 0x130333C))(this, coord);
	}
	template <typename R = bool> R TryAddFloor(float x, float y) {
		return ((R (*)(DoorsAndWalls*, float, float))(Il2CppBase() + 0x1303594))(this, x, y);
	}
	template <typename R = bool> R CanAddFloor(float x, float y) {
		return ((R (*)(DoorsAndWalls*, float, float))(Il2CppBase() + 0x130371C))(this, x, y);
	}
	template <typename R = bool> R TryRemoveFloor(float x, float y) {
		return ((R (*)(DoorsAndWalls*, float, float))(Il2CppBase() + 0x13037A8))(this, x, y);
	}
	template <typename R = bool> R TryAdd(GameEntity* entity) {
		return ((R (*)(DoorsAndWalls*, GameEntity*))(Il2CppBase() + 0x13038B4))(this, entity);
	}
	template <typename R = bool> R TryAdd_1(float x, float y, GameEntity* entity) {
		return ((R (*)(DoorsAndWalls*, float, float, GameEntity*))(Il2CppBase() + 0x1303918))(this, x, y, entity);
	}
	template <typename R = bool> R InDoorsAndWalls(int32_t x, int32_t y) {
		return ((R (*)(DoorsAndWalls*, int32_t, int32_t))(Il2CppBase() + 0x13036A0))(this, x, y);
	}
	template <typename R = bool> R TryAdd_2(float x, float y, uint16_t WHAT) {
		return ((R (*)(DoorsAndWalls*, float, float, uint16_t))(Il2CppBase() + 0x13039F8))(this, x, y, WHAT);
	}
	template <typename R = bool> R CanAdd(float x, float y) {
		return ((R (*)(DoorsAndWalls*, float, float))(Il2CppBase() + 0x1303EEC))(this, x, y);
	}
	template <typename R = bool> R TryRemove(float x, float y, bool door) {
		return ((R (*)(DoorsAndWalls*, float, float, bool))(Il2CppBase() + 0x1304228))(this, x, y, door);
	}
	template <typename R = void> R SafeRemove(GameEntity* entity, bool door, bool removeComponent) {
		return ((R (*)(DoorsAndWalls*, GameEntity*, bool, bool))(Il2CppBase() + 0x1304760))(this, entity, door, removeComponent);
	}
	template <typename R = void> R AddEntity(GameEntity* entity) {
		return ((R (*)(DoorsAndWalls*, GameEntity*))(Il2CppBase() + 0x1304A68))(this, entity);
	}
	template <typename R = void> R RemoveEntity(GameEntity* entity) {
		return ((R (*)(DoorsAndWalls*, GameEntity*))(Il2CppBase() + 0x1304B04))(this, entity);
	}
	template <typename R = void> R SafeRemoveEntity(GameEntity* entity, bool removeComponent) {
		return ((R (*)(DoorsAndWalls*, GameEntity*, bool))(Il2CppBase() + 0x1304C28))(this, entity, removeComponent);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DoorsAndWalls*))(Il2CppBase() + 0x1304D38))(this);
	}

};

