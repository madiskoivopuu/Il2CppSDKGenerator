#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Invite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Invite"));
	}

	 static MessageParser1ProtoModels::Invite*>*& _parser() {
		return *(MessageParser1ProtoModels::Invite*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
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
	template <typename R = int32_t> static R& ExpiredFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& expired_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& ClansFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Clan*>*& _repeated_clans_codec() {
		return *(FieldCodec1ProtoModels::Clan*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::Clan*>*& clans_() {
		return *(RepeatedField1ProtoModels::Clan*>**)((uintptr_t)this + 0x40);
	}

	 static MessageParser1ProtoModels::Invite*>* get_Parser() {
		return ((MessageParser1ProtoModels::Invite*>* (*)(void *))(Il2CppBase() + 0x1242AD8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1242B3C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x1242C5C))(this);
	}
	template <typename R = ProtoModels::Invite*> R Clone() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x1242E10))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x1242E6C))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(Invite*, int64_t))(Il2CppBase() + 0x1242E74))(this, value);
	}
	template <typename R = int64_t> R get_FromUserID() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x1242E7C))(this);
	}
	template <typename R = void> R set_FromUserID(int64_t value) {
		return ((R (*)(Invite*, int64_t))(Il2CppBase() + 0x1242E84))(this, value);
	}
	template <typename R = int64_t> R get_ToUserID() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x1242E8C))(this);
	}
	template <typename R = void> R set_ToUserID(int64_t value) {
		return ((R (*)(Invite*, int64_t))(Il2CppBase() + 0x1242E94))(this, value);
	}
	template <typename R = int32_t> R get_CellID() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x1242E9C))(this);
	}
	template <typename R = void> R set_CellID(int32_t value) {
		return ((R (*)(Invite*, int32_t))(Il2CppBase() + 0x1242EA4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x1242EAC))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(Invite*, Il2CppString*))(Il2CppBase() + 0x1242EB4))(this, value);
	}
	template <typename R = int64_t> R get_Expired() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x1242F34))(this);
	}
	template <typename R = void> R set_Expired(int64_t value) {
		return ((R (*)(Invite*, int64_t))(Il2CppBase() + 0x1242F3C))(this, value);
	}
	 RepeatedField1ProtoModels::Clan*>* get_Clans() {
		return ((RepeatedField1ProtoModels::Clan*>* (*)(Invite*))(Il2CppBase() + 0x1242F44))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Invite*, Il2CppObject*))(Il2CppBase() + 0x1242F4C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Invite* other) {
		return ((R (*)(Invite*, ProtoModels::Invite*))(Il2CppBase() + 0x1242FBC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x12430AC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x12431A8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Invite*, uintptr_t))(Il2CppBase() + 0x124320C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Invite*))(Il2CppBase() + 0x12433BC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Invite* other) {
		return ((R (*)(Invite*, ProtoModels::Invite*))(Il2CppBase() + 0x12435DC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Invite*, uintptr_t))(Il2CppBase() + 0x12436A8))(this, input);
	}

};

}
