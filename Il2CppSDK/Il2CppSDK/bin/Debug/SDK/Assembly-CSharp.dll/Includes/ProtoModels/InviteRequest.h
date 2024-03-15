#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InviteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InviteRequest"));
	}

	 static MessageParser1<ProtoModels::InviteRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::InviteRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& FromUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& fromUserID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ToUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& toUserID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CellIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cellID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& message_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::InviteRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::InviteRequest*>* (*)(void *))(Il2CppBase() + 0x1247874))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12478D8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x12479F8))(this);
	}
	template <typename R = ProtoModels::InviteRequest*> R Clone() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247B04))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247B60))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(InviteRequest*, int64_t))(Il2CppBase() + 0x1247B68))(this, value);
	}
	template <typename R = int64_t> R get_FromUserID() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247B70))(this);
	}
	template <typename R = void> R set_FromUserID(int64_t value) {
		return ((R (*)(InviteRequest*, int64_t))(Il2CppBase() + 0x1247B78))(this, value);
	}
	template <typename R = int64_t> R get_ToUserID() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247B80))(this);
	}
	template <typename R = void> R set_ToUserID(int64_t value) {
		return ((R (*)(InviteRequest*, int64_t))(Il2CppBase() + 0x1247B88))(this, value);
	}
	template <typename R = int32_t> R get_CellID() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247B90))(this);
	}
	template <typename R = void> R set_CellID(int32_t value) {
		return ((R (*)(InviteRequest*, int32_t))(Il2CppBase() + 0x1247B98))(this, value);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247BA0))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(InviteRequest*, Il2CppString*))(Il2CppBase() + 0x1247BA8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(InviteRequest*, Il2CppObject*))(Il2CppBase() + 0x1247C28))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::InviteRequest* other) {
		return ((R (*)(InviteRequest*, ProtoModels::InviteRequest*))(Il2CppBase() + 0x1247C98))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247D1C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247DE8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(InviteRequest*, uintptr_t))(Il2CppBase() + 0x1247E4C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(InviteRequest*))(Il2CppBase() + 0x1247F5C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::InviteRequest* other) {
		return ((R (*)(InviteRequest*, ProtoModels::InviteRequest*))(Il2CppBase() + 0x12480D8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(InviteRequest*, uintptr_t))(Il2CppBase() + 0x1248130))(this, input);
	}

};

}
