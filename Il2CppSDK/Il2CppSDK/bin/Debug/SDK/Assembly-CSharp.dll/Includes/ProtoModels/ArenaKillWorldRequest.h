#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaKillWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaKillWorldRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& IsWorldFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isWorld_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2B3D0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2B434))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B554))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B5F4))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B650))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaKillWorldRequest*, int64_t))(Il2CppBase() + 0x1E2B658))(this, value);
	}
	template <typename T = bool> T get_IsWorld() {
		return ((T (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B660))(this);
	}
	template <typename T = void> T set_IsWorld(bool value) {
		return ((T (*)(ArenaKillWorldRequest*, bool))(Il2CppBase() + 0x1E2B668))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaKillWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E2B674))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaKillWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E2B71C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B768))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B7DC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaKillWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E2B840))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaKillWorldRequest*))(Il2CppBase() + 0x1E2B8C4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaKillWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E2B950))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaKillWorldRequest*, uintptr_t))(Il2CppBase() + 0x1E2B970))(this, input);
	}

};

}
