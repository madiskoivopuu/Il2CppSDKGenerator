#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaDisbandClanRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaDisbandClanRequest"));
	}

	 static MessageParser1ProtoModels::ArenaDisbandClanRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaDisbandClanRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1ProtoModels::ArenaDisbandClanRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaDisbandClanRequest*>* (*)(void *))(Il2CppBase() + 0x1E1D4BC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E1D520))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D640))(this);
	}
	template <typename R = ProtoModels::ArenaDisbandClanRequest*> R Clone() {
		return ((R (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D6E0))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D73C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaDisbandClanRequest*, int64_t))(Il2CppBase() + 0x1E1D744))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D74C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaDisbandClanRequest*, int64_t))(Il2CppBase() + 0x1E1D754))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaDisbandClanRequest*, Il2CppObject*))(Il2CppBase() + 0x1E1D75C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaDisbandClanRequest* other) {
		return ((R (*)(ArenaDisbandClanRequest*, ProtoModels::ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D7F8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D838))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D8A4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaDisbandClanRequest*, uintptr_t))(Il2CppBase() + 0x1E1D908))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1D98C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaDisbandClanRequest* other) {
		return ((R (*)(ArenaDisbandClanRequest*, ProtoModels::ArenaDisbandClanRequest*))(Il2CppBase() + 0x1E1DA40))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaDisbandClanRequest*, uintptr_t))(Il2CppBase() + 0x1E1DA60))(this, input);
	}

};

}
