#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateDev2DevUserIDRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateDev2DevUserIDRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& Dev2DevIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& dev2DevID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF53370))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF533D4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF534F4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF535F4))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53650))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*, int64_t))(Il2CppBase() + 0xF53658))(this, value);
	}
	template <typename T = Il2CppString*> T get_Dev2DevID() {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53660))(this);
	}
	template <typename T = void> T set_Dev2DevID(Il2CppString* value) {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*, Il2CppString*))(Il2CppBase() + 0xF53668))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF536E8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*, int64_t))(Il2CppBase() + 0xF536F0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*, uintptr_t))(Il2CppBase() + 0xF536F8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*, uintptr_t))(Il2CppBase() + 0xF53768))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF537D8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53868))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*, uintptr_t))(Il2CppBase() + 0xF538CC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53984))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*, uintptr_t))(Il2CppBase() + 0xF53A88))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUpdateDev2DevUserIDRequest*, uintptr_t))(Il2CppBase() + 0xF53AE0))(this, input);
	}

};

}
