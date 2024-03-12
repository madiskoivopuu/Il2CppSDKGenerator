#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserCheater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserCheater"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& EventTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& eventTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x24644A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246450C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserCheater*))(Il2CppBase() + 0x246462C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserCheater*))(Il2CppBase() + 0x24646CC))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserCheater*))(Il2CppBase() + 0x2464728))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserCheater*, int64_t))(Il2CppBase() + 0x2464730))(this, value);
	}
	template <typename T = int64_t> T get_EventTime() {
		return ((T (*)(UserCheater*))(Il2CppBase() + 0x2464738))(this);
	}
	template <typename T = void> T set_EventTime(int64_t value) {
		return ((T (*)(UserCheater*, int64_t))(Il2CppBase() + 0x2464740))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserCheater*, uintptr_t))(Il2CppBase() + 0x2464748))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserCheater*, uintptr_t))(Il2CppBase() + 0x24647E4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserCheater*))(Il2CppBase() + 0x2464824))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserCheater*))(Il2CppBase() + 0x2464890))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserCheater*, uintptr_t))(Il2CppBase() + 0x24648F4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserCheater*))(Il2CppBase() + 0x2464978))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserCheater*, uintptr_t))(Il2CppBase() + 0x2464A2C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserCheater*, uintptr_t))(Il2CppBase() + 0x2464A4C))(this, input);
	}

};

}
