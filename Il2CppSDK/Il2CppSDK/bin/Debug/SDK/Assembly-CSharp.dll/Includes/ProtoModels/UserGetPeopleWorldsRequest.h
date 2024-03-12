#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetPeopleWorldsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetPeopleWorldsRequest"));
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

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2469B7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2469BE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469D00))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469D98))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469E04))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserGetPeopleWorldsRequest*, int64_t))(Il2CppBase() + 0x2469E0C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserGetPeopleWorldsRequest*, uintptr_t))(Il2CppBase() + 0x2469E14))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserGetPeopleWorldsRequest*, uintptr_t))(Il2CppBase() + 0x2469EA0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469ED0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469F10))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserGetPeopleWorldsRequest*, uintptr_t))(Il2CppBase() + 0x2469F74))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserGetPeopleWorldsRequest*))(Il2CppBase() + 0x2469FCC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserGetPeopleWorldsRequest*, uintptr_t))(Il2CppBase() + 0x246A048))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserGetPeopleWorldsRequest*, uintptr_t))(Il2CppBase() + 0x246A05C))(this, input);
	}

};

}
