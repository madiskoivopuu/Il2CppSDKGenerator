#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SubstructMailRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SubstructMailRequest"));
	}

	template <typename T = void*> static T& _parser() {
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

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16A1250))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16A12B4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A13D4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A147C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A14D8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(SubstructMailRequest*, int64_t))(Il2CppBase() + 0x16A14E0))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A14E8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(SubstructMailRequest*, int64_t))(Il2CppBase() + 0x16A14F0))(this, value);
	}
	template <typename T = int64_t> T get_MailID() {
		return ((T (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A14F8))(this);
	}
	template <typename T = void> T set_MailID(int64_t value) {
		return ((T (*)(SubstructMailRequest*, int64_t))(Il2CppBase() + 0x16A1500))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SubstructMailRequest*, uintptr_t))(Il2CppBase() + 0x16A1508))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(SubstructMailRequest*, uintptr_t))(Il2CppBase() + 0x16A15B4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A1604))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A168C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SubstructMailRequest*, uintptr_t))(Il2CppBase() + 0x16A16F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SubstructMailRequest*))(Il2CppBase() + 0x16A17A0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(SubstructMailRequest*, uintptr_t))(Il2CppBase() + 0x16A1898))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SubstructMailRequest*, uintptr_t))(Il2CppBase() + 0x16A18C4))(this, input);
	}

};

}
