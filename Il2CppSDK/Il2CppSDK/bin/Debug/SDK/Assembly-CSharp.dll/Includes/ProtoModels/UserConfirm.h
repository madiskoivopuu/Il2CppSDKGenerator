#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserConfirm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserConfirm"));
	}

	template <typename T = MessageParser1UserConfirm*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& AcceptFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& accept_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CancelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& cancel_() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = MessageParser1UserConfirm*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2464BEC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2464C50))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserConfirm*))(Il2CppBase() + 0x2464D70))(this);
	}
	template <typename T = UserConfirm*> T Clone() {
		return ((T (*)(UserConfirm*))(Il2CppBase() + 0x2464E18))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserConfirm*))(Il2CppBase() + 0x2464E74))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserConfirm*, int64_t))(Il2CppBase() + 0x2464E7C))(this, value);
	}
	template <typename T = bool> T get_Accept() {
		return ((T (*)(UserConfirm*))(Il2CppBase() + 0x2464E84))(this);
	}
	template <typename T = void> T set_Accept(bool value) {
		return ((T (*)(UserConfirm*, bool))(Il2CppBase() + 0x2464E8C))(this, value);
	}
	template <typename T = bool> T get_Cancel() {
		return ((T (*)(UserConfirm*))(Il2CppBase() + 0x2464E98))(this);
	}
	template <typename T = void> T set_Cancel(bool value) {
		return ((T (*)(UserConfirm*, bool))(Il2CppBase() + 0x2464EA0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserConfirm*, Il2CppObject*))(Il2CppBase() + 0x2464EAC))(this, other);
	}
	template <typename T = bool> T Equals_1(UserConfirm* other) {
		return ((T (*)(UserConfirm*, UserConfirm*))(Il2CppBase() + 0x2464F1C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserConfirm*))(Il2CppBase() + 0x2464F88))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserConfirm*))(Il2CppBase() + 0x246501C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserConfirm*, uintptr_t))(Il2CppBase() + 0x2465080))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserConfirm*))(Il2CppBase() + 0x2465130))(this);
	}
	template <typename T = void> T MergeFrom(UserConfirm* other) {
		return ((T (*)(UserConfirm*, UserConfirm*))(Il2CppBase() + 0x24651CC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserConfirm*, uintptr_t))(Il2CppBase() + 0x24651F8))(this, input);
	}

};

}
