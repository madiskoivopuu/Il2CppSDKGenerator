#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateIconUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateIconUserRequest"));
	}

	 static MessageParser1ProtoModels::ArenaUpdateIconUserRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaUpdateIconUserRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& IconFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& icon_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaUpdateIconUserRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaUpdateIconUserRequest*>* (*)(void *))(Il2CppBase() + 0xF53CAC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF53D10))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF53E30))(this);
	}
	template <typename R = ProtoModels::ArenaUpdateIconUserRequest*> R Clone() {
		return ((R (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF53F30))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF53F8C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUpdateIconUserRequest*, int64_t))(Il2CppBase() + 0xF53F94))(this, value);
	}
	template <typename R = Il2CppString*> R get_Icon() {
		return ((R (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF53F9C))(this);
	}
	template <typename R = void> R set_Icon(Il2CppString* value) {
		return ((R (*)(ArenaUpdateIconUserRequest*, Il2CppString*))(Il2CppBase() + 0xF53FA4))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF54024))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUpdateIconUserRequest*, int64_t))(Il2CppBase() + 0xF5402C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUpdateIconUserRequest*, Il2CppObject*))(Il2CppBase() + 0xF54034))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUpdateIconUserRequest* other) {
		return ((R (*)(ArenaUpdateIconUserRequest*, ProtoModels::ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF540A4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF54114))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF541A4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUpdateIconUserRequest*, uintptr_t))(Il2CppBase() + 0xF54208))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF542C0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUpdateIconUserRequest* other) {
		return ((R (*)(ArenaUpdateIconUserRequest*, ProtoModels::ArenaUpdateIconUserRequest*))(Il2CppBase() + 0xF543C4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUpdateIconUserRequest*, uintptr_t))(Il2CppBase() + 0xF5441C))(this, input);
	}

};

}
