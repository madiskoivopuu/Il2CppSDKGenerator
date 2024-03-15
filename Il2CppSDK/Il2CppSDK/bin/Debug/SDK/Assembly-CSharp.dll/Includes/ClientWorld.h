#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientWorld"));
	}

	template <typename R = bool> static R& Exist() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = BaseClientWorld*> static R& Base() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ICommonClientWorld*> static R& Common() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = ICommonUnityWorld*> static R& Unity() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = ArenaUnityWorld*> static R& ArenaUnity() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = MapUnityWorld*> static R& MapUnity() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = MapClientWorld*> static R& Map() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = ArenaClientWorld*> static R& Arena() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename R = bool> static R get_Exist() {
		return ((R (*)(void *))(Il2CppBase() + 0xE225AC))(0);
	}
	template <typename R = void> static R set_Exist(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0xE225F8))(0, value);
	}
	template <typename R = BaseClientWorld*> static R get_Base() {
		return ((R (*)(void *))(Il2CppBase() + 0xE2264C))(0);
	}
	template <typename R = void> static R set_Base(BaseClientWorld* value) {
		return ((R (*)(void *, BaseClientWorld*))(Il2CppBase() + 0xE22698))(0, value);
	}
	template <typename R = ICommonClientWorld*> static R get_Common() {
		return ((R (*)(void *))(Il2CppBase() + 0xE226EC))(0);
	}
	template <typename R = void> static R set_Common(ICommonClientWorld* value) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0xE22738))(0, value);
	}
	template <typename R = ICommonUnityWorld*> static R get_Unity() {
		return ((R (*)(void *))(Il2CppBase() + 0xE2278C))(0);
	}
	template <typename R = void> static R set_Unity(ICommonUnityWorld* value) {
		return ((R (*)(void *, ICommonUnityWorld*))(Il2CppBase() + 0xE227D8))(0, value);
	}
	template <typename R = ArenaUnityWorld*> static R get_ArenaUnity() {
		return ((R (*)(void *))(Il2CppBase() + 0xE2282C))(0);
	}
	template <typename R = void> static R set_ArenaUnity(ArenaUnityWorld* value) {
		return ((R (*)(void *, ArenaUnityWorld*))(Il2CppBase() + 0xE22878))(0, value);
	}
	template <typename R = MapUnityWorld*> static R get_MapUnity() {
		return ((R (*)(void *))(Il2CppBase() + 0xE228CC))(0);
	}
	template <typename R = void> static R set_MapUnity(MapUnityWorld* value) {
		return ((R (*)(void *, MapUnityWorld*))(Il2CppBase() + 0xE22918))(0, value);
	}
	template <typename R = MapClientWorld*> static R get_Map() {
		return ((R (*)(void *))(Il2CppBase() + 0xE2296C))(0);
	}
	template <typename R = void> static R set_Map(MapClientWorld* value) {
		return ((R (*)(void *, MapClientWorld*))(Il2CppBase() + 0xE229B8))(0, value);
	}
	template <typename R = ArenaClientWorld*> static R get_Arena() {
		return ((R (*)(void *))(Il2CppBase() + 0xE22A0C))(0);
	}
	template <typename R = void> static R set_Arena(ArenaClientWorld* value) {
		return ((R (*)(void *, ArenaClientWorld*))(Il2CppBase() + 0xE22A58))(0, value);
	}
	template <typename R = void> static R Init(BaseClientWorld* world) {
		return ((R (*)(void *, BaseClientWorld*))(Il2CppBase() + 0xE22AAC))(0, world);
	}
	template <typename R = void> static R Destroy() {
		return ((R (*)(void *))(Il2CppBase() + 0xE22DC4))(0);
	}

};

