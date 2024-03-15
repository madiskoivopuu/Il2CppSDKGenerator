#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class WaitMeUserToCoordinatorRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "WaitMeUserToCoordinatorRequest"));
	}

	 static MessageParser1ProtoModels::WaitMeUserToCoordinatorRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::WaitMeUserToCoordinatorRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::WaitMeUserToCoordinatorRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::WaitMeUserToCoordinatorRequest*>* (*)(void *))(Il2CppBase() + 0x15D0FE4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15D1048))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1168))(this);
	}
	template <typename R = ProtoModels::WaitMeUserToCoordinatorRequest*> R Clone() {
		return ((R (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1200))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D126C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(WaitMeUserToCoordinatorRequest*, int64_t))(Il2CppBase() + 0x15D1274))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(WaitMeUserToCoordinatorRequest*, Il2CppObject*))(Il2CppBase() + 0x15D127C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::WaitMeUserToCoordinatorRequest* other) {
		return ((R (*)(WaitMeUserToCoordinatorRequest*, ProtoModels::WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1308))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1338))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1378))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(WaitMeUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x15D13DC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1434))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::WaitMeUserToCoordinatorRequest* other) {
		return ((R (*)(WaitMeUserToCoordinatorRequest*, ProtoModels::WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D14B0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(WaitMeUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x15D14C4))(this, input);
	}

};

}
