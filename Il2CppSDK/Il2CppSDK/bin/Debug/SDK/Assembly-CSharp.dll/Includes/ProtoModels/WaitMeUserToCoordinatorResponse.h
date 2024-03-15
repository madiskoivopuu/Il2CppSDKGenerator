#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class WaitMeUserToCoordinatorResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "WaitMeUserToCoordinatorResponse"));
	}

	 static MessageParser1<ProtoModels::WaitMeUserToCoordinatorResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::WaitMeUserToCoordinatorResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::WaitMeUserToCoordinatorResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::WaitMeUserToCoordinatorResponse*>* (*)(void *))(Il2CppBase() + 0x15D1648))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15D16AC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D17CC))(this);
	}
	template <typename R = ProtoModels::WaitMeUserToCoordinatorResponse*> R Clone() {
		return ((R (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D18C0))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D191C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(WaitMeUserToCoordinatorResponse*, int32_t))(Il2CppBase() + 0x15D1924))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D192C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(WaitMeUserToCoordinatorResponse*, Il2CppString*))(Il2CppBase() + 0x15D1934))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(WaitMeUserToCoordinatorResponse*, Il2CppObject*))(Il2CppBase() + 0x15D19B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::WaitMeUserToCoordinatorResponse* other) {
		return ((R (*)(WaitMeUserToCoordinatorResponse*, ProtoModels::WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D1A24))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D1A78))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D1AEC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(WaitMeUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x15D1B50))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D1BDC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::WaitMeUserToCoordinatorResponse* other) {
		return ((R (*)(WaitMeUserToCoordinatorResponse*, ProtoModels::WaitMeUserToCoordinatorResponse*))(Il2CppBase() + 0x15D1C9C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(WaitMeUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x15D1CD0))(this, input);
	}

};

}
