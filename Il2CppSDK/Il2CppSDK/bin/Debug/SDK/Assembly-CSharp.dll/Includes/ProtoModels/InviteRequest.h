#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InviteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InviteRequest"));
	}

	template <typename T = MessageParser1InviteRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& FromUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& fromUserID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ToUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& toUserID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CellIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1InviteRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1247874))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12478D8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x12479F8))(this);
	}
	template <typename T = InviteRequest*> T Clone() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247B04))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247B60))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(InviteRequest*, int64_t))(Il2CppBase() + 0x1247B68))(this, value);
	}
	template <typename T = int64_t> T get_FromUserID() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247B70))(this);
	}
	template <typename T = void> T set_FromUserID(int64_t value) {
		return ((T (*)(InviteRequest*, int64_t))(Il2CppBase() + 0x1247B78))(this, value);
	}
	template <typename T = int64_t> T get_ToUserID() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247B80))(this);
	}
	template <typename T = void> T set_ToUserID(int64_t value) {
		return ((T (*)(InviteRequest*, int64_t))(Il2CppBase() + 0x1247B88))(this, value);
	}
	template <typename T = int32_t> T get_CellID() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247B90))(this);
	}
	template <typename T = void> T set_CellID(int32_t value) {
		return ((T (*)(InviteRequest*, int32_t))(Il2CppBase() + 0x1247B98))(this, value);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247BA0))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(InviteRequest*, Il2CppString*))(Il2CppBase() + 0x1247BA8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(InviteRequest*, Il2CppObject*))(Il2CppBase() + 0x1247C28))(this, other);
	}
	template <typename T = bool> T Equals_1(InviteRequest* other) {
		return ((T (*)(InviteRequest*, InviteRequest*))(Il2CppBase() + 0x1247C98))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247D1C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247DE8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(InviteRequest*, uintptr_t))(Il2CppBase() + 0x1247E4C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(InviteRequest*))(Il2CppBase() + 0x1247F5C))(this);
	}
	template <typename T = void> T MergeFrom(InviteRequest* other) {
		return ((T (*)(InviteRequest*, InviteRequest*))(Il2CppBase() + 0x12480D8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(InviteRequest*, uintptr_t))(Il2CppBase() + 0x1248130))(this, input);
	}

};

}
