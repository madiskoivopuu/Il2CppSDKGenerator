#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GetUserFCMTokenRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GetUserFCMTokenRequest"));
	}

	template <typename T = MessageParser1GetUserFCMTokenRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1GetUserFCMTokenRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1771070))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x17710D4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x17711F4))(this);
	}
	template <typename T = GetUserFCMTokenRequest*> T Clone() {
		return ((T (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x1771294))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x17712F0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GetUserFCMTokenRequest*, int64_t))(Il2CppBase() + 0x17712F8))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x1771300))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GetUserFCMTokenRequest*, int64_t))(Il2CppBase() + 0x1771308))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GetUserFCMTokenRequest*, Il2CppObject*))(Il2CppBase() + 0x1771310))(this, other);
	}
	template <typename T = bool> T Equals_1(GetUserFCMTokenRequest* other) {
		return ((T (*)(GetUserFCMTokenRequest*, GetUserFCMTokenRequest*))(Il2CppBase() + 0x17713AC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x17713EC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x1771458))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GetUserFCMTokenRequest*, uintptr_t))(Il2CppBase() + 0x17714BC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GetUserFCMTokenRequest*))(Il2CppBase() + 0x1771540))(this);
	}
	template <typename T = void> T MergeFrom(GetUserFCMTokenRequest* other) {
		return ((T (*)(GetUserFCMTokenRequest*, GetUserFCMTokenRequest*))(Il2CppBase() + 0x17715F4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GetUserFCMTokenRequest*, uintptr_t))(Il2CppBase() + 0x1771614))(this, input);
	}

};

}
