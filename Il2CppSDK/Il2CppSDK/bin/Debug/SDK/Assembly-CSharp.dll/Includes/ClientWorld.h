#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientWorld"));
	}

	template <typename T = bool> static T& Exist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Base() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& Common() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& Unity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& ArenaUnity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& MapUnity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& Map() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& Arena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> static T get_Exist() {
		return ((T (*)(void *))(Il2CppBase() + 0xE225AC))(0);
	}
	template <typename T = void> static T set_Exist(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0xE225F8))(0, value);
	}
	template <typename T = uintptr_t> static T get_Base() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2264C))(0);
	}
	template <typename T = void> static T set_Base(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE22698))(0, value);
	}
	template <typename T = uintptr_t> static T get_Common() {
		return ((T (*)(void *))(Il2CppBase() + 0xE226EC))(0);
	}
	template <typename T = void> static T set_Common(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE22738))(0, value);
	}
	template <typename T = uintptr_t> static T get_Unity() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2278C))(0);
	}
	template <typename T = void> static T set_Unity(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE227D8))(0, value);
	}
	template <typename T = uintptr_t> static T get_ArenaUnity() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2282C))(0);
	}
	template <typename T = void> static T set_ArenaUnity(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE22878))(0, value);
	}
	template <typename T = uintptr_t> static T get_MapUnity() {
		return ((T (*)(void *))(Il2CppBase() + 0xE228CC))(0);
	}
	template <typename T = void> static T set_MapUnity(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE22918))(0, value);
	}
	template <typename T = uintptr_t> static T get_Map() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2296C))(0);
	}
	template <typename T = void> static T set_Map(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE229B8))(0, value);
	}
	template <typename T = uintptr_t> static T get_Arena() {
		return ((T (*)(void *))(Il2CppBase() + 0xE22A0C))(0);
	}
	template <typename T = void> static T set_Arena(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE22A58))(0, value);
	}
	template <typename T = void> static T Init(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE22AAC))(0, world);
	}
	template <typename T = void> static T Destroy() {
		return ((T (*)(void *))(Il2CppBase() + 0xE22DC4))(0);
	}

};

}
