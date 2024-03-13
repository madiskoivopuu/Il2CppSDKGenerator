#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class WaitMeUserToCoordinatorRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "WaitMeUserToCoordinatorRequest"));
	}

	template <typename T = MessageParser1WaitMeUserToCoordinatorRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1WaitMeUserToCoordinatorRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15D0FE4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15D1048))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1168))(this);
	}
	template <typename T = WaitMeUserToCoordinatorRequest*> T Clone() {
		return ((T (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1200))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D126C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(WaitMeUserToCoordinatorRequest*, int64_t))(Il2CppBase() + 0x15D1274))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(WaitMeUserToCoordinatorRequest*, Il2CppObject*))(Il2CppBase() + 0x15D127C))(this, other);
	}
	template <typename T = bool> T Equals_1(WaitMeUserToCoordinatorRequest* other) {
		return ((T (*)(WaitMeUserToCoordinatorRequest*, WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1308))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1338))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1378))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(WaitMeUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x15D13DC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D1434))(this);
	}
	template <typename T = void> T MergeFrom(WaitMeUserToCoordinatorRequest* other) {
		return ((T (*)(WaitMeUserToCoordinatorRequest*, WaitMeUserToCoordinatorRequest*))(Il2CppBase() + 0x15D14B0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(WaitMeUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x15D14C4))(this, input);
	}

};

}
