#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class WaitMeUserToCoordinatorResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "WaitMeUserToCoordinatorResponse"));
	}

	template <typename T = void*> static T& _parser() {
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

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15D1648))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15D16AC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D17CC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D18C0))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D191C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(WaitMeUserToCoordinatorResponse*, int32_t))(Il2CppBase() + 0x15D1924))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D192C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(WaitMeUserToCoordinatorResponse*, Il2CppString*))(Il2CppBase() + 0x15D1934))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(WaitMeUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x15D19B4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(WaitMeUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x15D1A24))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D1A78))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D1AEC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(WaitMeUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x15D1B50))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D1BDC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(WaitMeUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x15D1C9C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(WaitMeUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x15D1CD0))(this, input);
	}

};

}
