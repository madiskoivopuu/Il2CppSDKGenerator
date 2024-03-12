#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserCanChangeRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserCanChangeRequest"));
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
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& can_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& value_() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1542AF8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1542B5C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542C7C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542D2C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542D88))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserCanChangeRequest*, int64_t))(Il2CppBase() + 0x1542D90))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542D98))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserCanChangeRequest*, int64_t))(Il2CppBase() + 0x1542DA0))(this, value);
	}
	template <typename T = uintptr_t> T get_Can() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542DA8))(this);
	}
	template <typename T = void> T set_Can(uintptr_t value) {
		return ((T (*)(UserCanChangeRequest*, uintptr_t))(Il2CppBase() + 0x1542DB0))(this, value);
	}
	template <typename T = bool> T get_Value() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542DB8))(this);
	}
	template <typename T = void> T set_Value(bool value) {
		return ((T (*)(UserCanChangeRequest*, bool))(Il2CppBase() + 0x1542DC0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserCanChangeRequest*, uintptr_t))(Il2CppBase() + 0x1542DCC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserCanChangeRequest*, uintptr_t))(Il2CppBase() + 0x1542E3C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542EA8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1542F58))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserCanChangeRequest*, uintptr_t))(Il2CppBase() + 0x1542FBC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserCanChangeRequest*))(Il2CppBase() + 0x1543098))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserCanChangeRequest*, uintptr_t))(Il2CppBase() + 0x15431A4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserCanChangeRequest*, uintptr_t))(Il2CppBase() + 0x15431DC))(this, input);
	}

};

}
