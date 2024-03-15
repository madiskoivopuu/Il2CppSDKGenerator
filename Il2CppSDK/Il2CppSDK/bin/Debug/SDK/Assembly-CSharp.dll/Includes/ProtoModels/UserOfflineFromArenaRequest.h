#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserOfflineFromArenaRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserOfflineFromArenaRequest"));
	}

	 static MessageParser1<ProtoModels::UserOfflineFromArenaRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserOfflineFromArenaRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::UserOfflineFromArenaRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserOfflineFromArenaRequest*>* (*)(void *))(Il2CppBase() + 0x246FD24))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246FD88))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x246FEA8))(this);
	}
	template <typename R = ProtoModels::UserOfflineFromArenaRequest*> R Clone() {
		return ((R (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x246FF48))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x246FFA4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserOfflineFromArenaRequest*, int64_t))(Il2CppBase() + 0x246FFAC))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x246FFB4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserOfflineFromArenaRequest*, int64_t))(Il2CppBase() + 0x246FFBC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserOfflineFromArenaRequest*, Il2CppObject*))(Il2CppBase() + 0x246FFC4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserOfflineFromArenaRequest* other) {
		return ((R (*)(UserOfflineFromArenaRequest*, ProtoModels::UserOfflineFromArenaRequest*))(Il2CppBase() + 0x2470060))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x24700A0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x247010C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserOfflineFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x2470170))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x24701F4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserOfflineFromArenaRequest* other) {
		return ((R (*)(UserOfflineFromArenaRequest*, ProtoModels::UserOfflineFromArenaRequest*))(Il2CppBase() + 0x24702A8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserOfflineFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x24702C8))(this, input);
	}

};

}
