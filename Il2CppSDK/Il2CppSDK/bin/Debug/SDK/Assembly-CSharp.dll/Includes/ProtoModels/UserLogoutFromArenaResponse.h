#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserLogoutFromArenaResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserLogoutFromArenaResponse"));
	}

	template <typename T = MessageParser1UserLogoutFromArenaResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1UserLogoutFromArenaResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246F4F4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246F558))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F678))(this);
	}
	template <typename T = UserLogoutFromArenaResponse*> T Clone() {
		return ((T (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F76C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F7C8))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UserLogoutFromArenaResponse*, int32_t))(Il2CppBase() + 0x246F7D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F7D8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(UserLogoutFromArenaResponse*, Il2CppString*))(Il2CppBase() + 0x246F7E0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserLogoutFromArenaResponse*, Il2CppObject*))(Il2CppBase() + 0x246F860))(this, other);
	}
	template <typename T = bool> T Equals_1(UserLogoutFromArenaResponse* other) {
		return ((T (*)(UserLogoutFromArenaResponse*, UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F8D0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F924))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F998))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserLogoutFromArenaResponse*, uintptr_t))(Il2CppBase() + 0x246F9FC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246FA88))(this);
	}
	template <typename T = void> T MergeFrom(UserLogoutFromArenaResponse* other) {
		return ((T (*)(UserLogoutFromArenaResponse*, UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246FB48))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserLogoutFromArenaResponse*, uintptr_t))(Il2CppBase() + 0x246FB7C))(this, input);
	}

};

}
