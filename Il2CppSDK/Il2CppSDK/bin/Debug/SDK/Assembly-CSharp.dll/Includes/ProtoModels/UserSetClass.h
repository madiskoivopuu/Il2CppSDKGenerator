#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserSetClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserSetClass"));
	}

	template <typename T = MessageParser1UserSetClass*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& ClassFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& class_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1UserSetClass*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B95E0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B9644))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserSetClass*))(Il2CppBase() + 0x15B9764))(this);
	}
	template <typename T = UserSetClass*> T Clone() {
		return ((T (*)(UserSetClass*))(Il2CppBase() + 0x15B9860))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserSetClass*))(Il2CppBase() + 0x15B98BC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserSetClass*, int64_t))(Il2CppBase() + 0x15B98C4))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserSetClass*))(Il2CppBase() + 0x15B98CC))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserSetClass*, int64_t))(Il2CppBase() + 0x15B98D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Class() {
		return ((T (*)(UserSetClass*))(Il2CppBase() + 0x15B98DC))(this);
	}
	template <typename T = void> T set_Class(Il2CppString* value) {
		return ((T (*)(UserSetClass*, Il2CppString*))(Il2CppBase() + 0x15B98E4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserSetClass*, Il2CppObject*))(Il2CppBase() + 0x15B9964))(this, other);
	}
	template <typename T = bool> T Equals_1(UserSetClass* other) {
		return ((T (*)(UserSetClass*, UserSetClass*))(Il2CppBase() + 0x15B99D4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserSetClass*))(Il2CppBase() + 0x15B9A38))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserSetClass*))(Il2CppBase() + 0x15B9AC8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserSetClass*, uintptr_t))(Il2CppBase() + 0x15B9B2C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserSetClass*))(Il2CppBase() + 0x15B9BE4))(this);
	}
	template <typename T = void> T MergeFrom(UserSetClass* other) {
		return ((T (*)(UserSetClass*, UserSetClass*))(Il2CppBase() + 0x15B9CE8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserSetClass*, uintptr_t))(Il2CppBase() + 0x15B9D28))(this, input);
	}

};

}
