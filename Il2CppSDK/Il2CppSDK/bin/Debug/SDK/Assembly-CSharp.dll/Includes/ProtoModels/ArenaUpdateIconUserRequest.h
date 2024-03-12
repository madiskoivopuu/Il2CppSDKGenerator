#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateIconUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateIconUserRequest"));
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
	template <typename T = int32_t> static T& IconFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& icon_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF53CAC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF53D10))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF53E30))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF53F30))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF53F8C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUpdateIconUserRequest*, int64_t))(Il2CppBase() + 0xF53F94))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF53F9C))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(ArenaUpdateIconUserRequest*, Il2CppString*))(Il2CppBase() + 0xF53FA4))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF54024))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUpdateIconUserRequest*, int64_t))(Il2CppBase() + 0xF5402C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUpdateIconUserRequest*, uintptr_t))(Il2CppBase() + 0xF54034))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUpdateIconUserRequest*, uintptr_t))(Il2CppBase() + 0xF540A4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF54114))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF541A4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUpdateIconUserRequest*, uintptr_t))(Il2CppBase() + 0xF54208))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF542C0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUpdateIconUserRequest*, uintptr_t))(Il2CppBase() + 0xF543C4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUpdateIconUserRequest*, uintptr_t))(Il2CppBase() + 0xF5441C))(this, input);
	}

};

}
