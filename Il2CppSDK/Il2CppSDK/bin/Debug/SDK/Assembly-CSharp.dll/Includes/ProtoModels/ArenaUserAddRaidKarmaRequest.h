#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserAddRaidKarmaRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserAddRaidKarmaRequest"));
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
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& value_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF579F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF57A5C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57B7C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57C2C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57C88))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, int64_t))(Il2CppBase() + 0xF57C90))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57C98))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, int32_t))(Il2CppBase() + 0xF57CA0))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57CA8))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, int64_t))(Il2CppBase() + 0xF57CB0))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57CB8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, int64_t))(Il2CppBase() + 0xF57CC0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, uintptr_t))(Il2CppBase() + 0xF57CC8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, uintptr_t))(Il2CppBase() + 0xF57D38))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57D98))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57E40))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, uintptr_t))(Il2CppBase() + 0xF57EA4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*))(Il2CppBase() + 0xF57F80))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, uintptr_t))(Il2CppBase() + 0xF580B4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserAddRaidKarmaRequest*, uintptr_t))(Il2CppBase() + 0xF580EC))(this, input);
	}

};

}
