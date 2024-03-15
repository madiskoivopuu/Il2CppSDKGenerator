#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GetUserFCMTokenRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GetUserFCMTokenRequest"));
	}

	 static MessageParser1<ProtoModels::GetUserFCMTokenRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GetUserFCMTokenRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::GetUserFCMTokenRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GetUserFCMTokenRequest*>* (*)(void *))(Il2CppBase() + 0x1771070))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x17710D4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x17711F4))(this);
	}
	template <typename R = ProtoModels::GetUserFCMTokenRequest*> R Clone() {
		return ((R (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x1771294))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x17712F0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GetUserFCMTokenRequest*, int64_t))(Il2CppBase() + 0x17712F8))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x1771300))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GetUserFCMTokenRequest*, int64_t))(Il2CppBase() + 0x1771308))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GetUserFCMTokenRequest*, Il2CppObject*))(Il2CppBase() + 0x1771310))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GetUserFCMTokenRequest* other) {
		return ((R (*)(GetUserFCMTokenRequest*, ProtoModels::GetUserFCMTokenRequest*))(Il2CppBase() + 0x17713AC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x17713EC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x1771458))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GetUserFCMTokenRequest*, uintptr_t))(Il2CppBase() + 0x17714BC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x1771540))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GetUserFCMTokenRequest* other) {
		return ((R (*)(GetUserFCMTokenRequest*, ProtoModels::GetUserFCMTokenRequest*))(Il2CppBase() + 0x17715F4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GetUserFCMTokenRequest*, uintptr_t))(Il2CppBase() + 0x1771614))(this, input);
	}

};

}
