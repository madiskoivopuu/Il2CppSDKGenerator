#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class JoinUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "JoinUserRequest"));
	}

	 static MessageParser1<ProtoModels::JoinUserRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::JoinUserRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CellIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cellID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ToClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Clan*> R& toClan_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& InvitesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Invite*>*& _repeated_invites_codec() {
		return *(FieldCodec1<ProtoModels::Invite*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Invite*>*& invites_() {
		return *(RepeatedField1<ProtoModels::Invite*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::JoinUserRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::JoinUserRequest*>* (*)(void *))(Il2CppBase() + 0x14E4160))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E41C4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(JoinUserRequest*))(Il2CppBase() + 0x14E42E4))(this);
	}
	template <typename R = ProtoModels::JoinUserRequest*> R Clone() {
		return ((R (*)(JoinUserRequest*))(Il2CppBase() + 0x14E4474))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(JoinUserRequest*))(Il2CppBase() + 0x14E44D0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(JoinUserRequest*, int64_t))(Il2CppBase() + 0x14E44D8))(this, value);
	}
	template <typename R = int32_t> R get_CellID() {
		return ((R (*)(JoinUserRequest*))(Il2CppBase() + 0x14E44E0))(this);
	}
	template <typename R = void> R set_CellID(int32_t value) {
		return ((R (*)(JoinUserRequest*, int32_t))(Il2CppBase() + 0x14E44E8))(this, value);
	}
	template <typename R = ProtoModels::Clan*> R get_ToClan() {
		return ((R (*)(JoinUserRequest*))(Il2CppBase() + 0x14E44F0))(this);
	}
	template <typename R = void> R set_ToClan(ProtoModels::Clan* value) {
		return ((R (*)(JoinUserRequest*, ProtoModels::Clan*))(Il2CppBase() + 0x14E44F8))(this, value);
	}
	 RepeatedField1<ProtoModels::Invite*>* get_Invites() {
		return ((RepeatedField1<ProtoModels::Invite*>* (*)(JoinUserRequest*))(Il2CppBase() + 0x14E4500))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(JoinUserRequest*, Il2CppObject*))(Il2CppBase() + 0x14E4508))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::JoinUserRequest* other) {
		return ((R (*)(JoinUserRequest*, ProtoModels::JoinUserRequest*))(Il2CppBase() + 0x14E4578))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(JoinUserRequest*))(Il2CppBase() + 0x14E4638))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(JoinUserRequest*))(Il2CppBase() + 0x14E46D8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(JoinUserRequest*, uintptr_t))(Il2CppBase() + 0x14E473C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(JoinUserRequest*))(Il2CppBase() + 0x14E4860))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::JoinUserRequest* other) {
		return ((R (*)(JoinUserRequest*, ProtoModels::JoinUserRequest*))(Il2CppBase() + 0x14E49C4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(JoinUserRequest*, uintptr_t))(Il2CppBase() + 0x14E4AB4))(this, input);
	}

};

}
