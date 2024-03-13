#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DeleteMailRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DeleteMailRequest"));
	}

	template <typename T = MessageParser1DeleteMailRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MailIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mailID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1DeleteMailRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xEB96D4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xEB9738))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9858))(this);
	}
	template <typename T = DeleteMailRequest*> T Clone() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9908))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9964))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(DeleteMailRequest*, int64_t))(Il2CppBase() + 0xEB996C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9974))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(DeleteMailRequest*, int64_t))(Il2CppBase() + 0xEB997C))(this, value);
	}
	template <typename T = int64_t> T get_MailID() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9984))(this);
	}
	template <typename T = void> T set_MailID(int64_t value) {
		return ((T (*)(DeleteMailRequest*, int64_t))(Il2CppBase() + 0xEB998C))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9994))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(DeleteMailRequest*, int32_t))(Il2CppBase() + 0xEB999C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(DeleteMailRequest*, Il2CppObject*))(Il2CppBase() + 0xEB99A4))(this, other);
	}
	template <typename T = bool> T Equals_1(DeleteMailRequest* other) {
		return ((T (*)(DeleteMailRequest*, DeleteMailRequest*))(Il2CppBase() + 0xEB9A14))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9A74))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9B1C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(DeleteMailRequest*, uintptr_t))(Il2CppBase() + 0xEB9B80))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(DeleteMailRequest*))(Il2CppBase() + 0xEB9C5C))(this);
	}
	template <typename T = void> T MergeFrom(DeleteMailRequest* other) {
		return ((T (*)(DeleteMailRequest*, DeleteMailRequest*))(Il2CppBase() + 0xEB9D90))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(DeleteMailRequest*, uintptr_t))(Il2CppBase() + 0xEB9DC8))(this, input);
	}

};

}
