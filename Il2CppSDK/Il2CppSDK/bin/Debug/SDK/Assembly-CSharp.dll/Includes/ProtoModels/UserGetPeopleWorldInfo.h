#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetPeopleWorldInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetPeopleWorldInfo"));
	}

	template <typename T = MessageParser1UserGetPeopleWorldInfo*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EmailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& email_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1UserGetPeopleWorldInfo*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246868C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24686F0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468810))(this);
	}
	template <typename T = UserGetPeopleWorldInfo*> T Clone() {
		return ((T (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x246890C))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468968))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(UserGetPeopleWorldInfo*, int64_t))(Il2CppBase() + 0x2468970))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468978))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserGetPeopleWorldInfo*, int64_t))(Il2CppBase() + 0x2468980))(this, value);
	}
	template <typename T = Il2CppString*> T get_Email() {
		return ((T (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468988))(this);
	}
	template <typename T = void> T set_Email(Il2CppString* value) {
		return ((T (*)(UserGetPeopleWorldInfo*, Il2CppString*))(Il2CppBase() + 0x2468990))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserGetPeopleWorldInfo*, Il2CppObject*))(Il2CppBase() + 0x2468A10))(this, other);
	}
	template <typename T = bool> T Equals_1(UserGetPeopleWorldInfo* other) {
		return ((T (*)(UserGetPeopleWorldInfo*, UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468A80))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468AE4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468B74))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserGetPeopleWorldInfo*, uintptr_t))(Il2CppBase() + 0x2468BD8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468C90))(this);
	}
	template <typename T = void> T MergeFrom(UserGetPeopleWorldInfo* other) {
		return ((T (*)(UserGetPeopleWorldInfo*, UserGetPeopleWorldInfo*))(Il2CppBase() + 0x2468D94))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserGetPeopleWorldInfo*, uintptr_t))(Il2CppBase() + 0x2468DD4))(this, input);
	}

};

}
