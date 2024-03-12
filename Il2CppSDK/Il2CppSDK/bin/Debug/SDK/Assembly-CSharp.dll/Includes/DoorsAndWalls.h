#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoorsAndWalls
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DoorsAndWalls"));
	}

	template <typename T = bool> T& _changed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint16_t> static T& NONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& WALL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& FAKE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_OR_WALL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_DOOR_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_DOOR_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_DOOR_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_DOOR_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& ANY_WALL_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& ANY_WALL_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& ANY_WALL_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& ANY_WALL_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& WALL_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& WALL_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& WALL_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& WALL_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_WALL_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_WALL_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_WALL_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_WALL_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_OR_WALL_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_OR_WALL_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_OR_WALL_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& DOOR_OR_WALL_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_DOOR_OR_WALL_UP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_DOOR_OR_WALL_DOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_DOOR_OR_WALL_LEFT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_DOOR_OR_WALL_RIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& FLOOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint16_t> static T& NOT_FLOOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _worldParams() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _doorsAndWalls() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _offset() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_Changed() {
		return ((T (*)(DoorsAndWalls*))(Il2CppBase() + 0x13030E8))(this);
	}
	template <typename T = int32_t> T get_Width() {
		return ((T (*)(DoorsAndWalls*))(Il2CppBase() + 0x1303104))(this);
	}
	template <typename T = void> T set_Width(int32_t value) {
		return ((T (*)(DoorsAndWalls*, int32_t))(Il2CppBase() + 0x130310C))(this, value);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(DoorsAndWalls*))(Il2CppBase() + 0x1303114))(this);
	}
	template <typename T = void> T set_Height(int32_t value) {
		return ((T (*)(DoorsAndWalls*, int32_t))(Il2CppBase() + 0x130311C))(this, value);
	}
	template <typename T = uint16_t> T get_Item(int32_t x, int32_t y) {
		return ((T (*)(DoorsAndWalls*, int32_t, int32_t))(Il2CppBase() + 0x1303124))(this, x, y);
	}
	template <typename T = uint16_t> T get_Item_1(uintptr_t coord) {
		return ((T (*)(DoorsAndWalls*, uintptr_t))(Il2CppBase() + 0x130333C))(this, coord);
	}
	template <typename T = bool> T TryAddFloor(float x, float y) {
		return ((T (*)(DoorsAndWalls*, float, float))(Il2CppBase() + 0x1303594))(this, x, y);
	}
	template <typename T = bool> T CanAddFloor(float x, float y) {
		return ((T (*)(DoorsAndWalls*, float, float))(Il2CppBase() + 0x130371C))(this, x, y);
	}
	template <typename T = bool> T TryRemoveFloor(float x, float y) {
		return ((T (*)(DoorsAndWalls*, float, float))(Il2CppBase() + 0x13037A8))(this, x, y);
	}
	template <typename T = bool> T TryAdd(uintptr_t entity) {
		return ((T (*)(DoorsAndWalls*, uintptr_t))(Il2CppBase() + 0x13038B4))(this, entity);
	}
	template <typename T = bool> T TryAdd_1(float x, float y, uintptr_t entity) {
		return ((T (*)(DoorsAndWalls*, float, float, uintptr_t))(Il2CppBase() + 0x1303918))(this, x, y, entity);
	}
	template <typename T = bool> T InDoorsAndWalls(int32_t x, int32_t y) {
		return ((T (*)(DoorsAndWalls*, int32_t, int32_t))(Il2CppBase() + 0x13036A0))(this, x, y);
	}
	template <typename T = bool> T TryAdd_2(float x, float y, uint16_t WHAT) {
		return ((T (*)(DoorsAndWalls*, float, float, uint16_t))(Il2CppBase() + 0x13039F8))(this, x, y, WHAT);
	}
	template <typename T = bool> T CanAdd(float x, float y) {
		return ((T (*)(DoorsAndWalls*, float, float))(Il2CppBase() + 0x1303EEC))(this, x, y);
	}
	template <typename T = bool> T TryRemove(float x, float y, bool door) {
		return ((T (*)(DoorsAndWalls*, float, float, bool))(Il2CppBase() + 0x1304228))(this, x, y, door);
	}
	template <typename T = void> T SafeRemove(uintptr_t entity, bool door, bool removeComponent) {
		return ((T (*)(DoorsAndWalls*, uintptr_t, bool, bool))(Il2CppBase() + 0x1304760))(this, entity, door, removeComponent);
	}
	template <typename T = void> T AddEntity(uintptr_t entity) {
		return ((T (*)(DoorsAndWalls*, uintptr_t))(Il2CppBase() + 0x1304A68))(this, entity);
	}
	template <typename T = void> T RemoveEntity(uintptr_t entity) {
		return ((T (*)(DoorsAndWalls*, uintptr_t))(Il2CppBase() + 0x1304B04))(this, entity);
	}
	template <typename T = void> T SafeRemoveEntity(uintptr_t entity, bool removeComponent) {
		return ((T (*)(DoorsAndWalls*, uintptr_t, bool))(Il2CppBase() + 0x1304C28))(this, entity, removeComponent);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DoorsAndWalls*))(Il2CppBase() + 0x1304D38))(this);
	}

};

}
