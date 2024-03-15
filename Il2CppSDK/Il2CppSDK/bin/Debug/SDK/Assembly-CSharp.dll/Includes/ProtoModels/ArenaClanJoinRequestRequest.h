#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClanJoinRequestRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClanJoinRequestRequest"));
	}

	 static MessageParser1ProtoModels::ArenaClanJoinRequestRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaClanJoinRequestRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TextFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& text_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& JoinFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& join_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaClanJoinRequestRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaClanJoinRequestRequest*>* (*)(void *))(Il2CppBase() + 0x1A1BA64))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A1BAC8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BBE8))(this);
	}
	template <typename R = ProtoModels::ArenaClanJoinRequestRequest*> R Clone() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BCF0))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BD4C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaClanJoinRequestRequest*, int64_t))(Il2CppBase() + 0x1A1BD54))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BD5C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaClanJoinRequestRequest*, int64_t))(Il2CppBase() + 0x1A1BD64))(this, value);
	}
	template <typename R = Il2CppString*> R get_Text() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BD6C))(this);
	}
	template <typename R = void> R set_Text(Il2CppString* value) {
		return ((R (*)(ArenaClanJoinRequestRequest*, Il2CppString*))(Il2CppBase() + 0x1A1BD74))(this, value);
	}
	template <typename R = bool> R get_Join() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BDF4))(this);
	}
	template <typename R = void> R set_Join(bool value) {
		return ((R (*)(ArenaClanJoinRequestRequest*, bool))(Il2CppBase() + 0x1A1BDFC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaClanJoinRequestRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1BE08))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaClanJoinRequestRequest* other) {
		return ((R (*)(ArenaClanJoinRequestRequest*, ProtoModels::ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BE78))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BF04))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BFB8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaClanJoinRequestRequest*, uintptr_t))(Il2CppBase() + 0x1A1C01C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1C100))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaClanJoinRequestRequest* other) {
		return ((R (*)(ArenaClanJoinRequestRequest*, ProtoModels::ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1C218))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaClanJoinRequestRequest*, uintptr_t))(Il2CppBase() + 0x1A1C27C))(this, input);
	}

};

}
