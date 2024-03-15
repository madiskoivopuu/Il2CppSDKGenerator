#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetPvpRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetPvpRequest"));
	}

	 static MessageParser1ProtoModels::AdminGetPvpRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminGetPvpRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::AdminGetPvpRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminGetPvpRequest*>* (*)(void *))(Il2CppBase() + 0x18B564C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B56B0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B57D0))(this);
	}
	template <typename R = ProtoModels::AdminGetPvpRequest*> R Clone() {
		return ((R (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B5868))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B58D4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminGetPvpRequest*, int64_t))(Il2CppBase() + 0x18B58DC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetPvpRequest*, Il2CppObject*))(Il2CppBase() + 0x18B58E4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetPvpRequest* other) {
		return ((R (*)(AdminGetPvpRequest*, ProtoModels::AdminGetPvpRequest*))(Il2CppBase() + 0x18B5970))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B59A0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B59E0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetPvpRequest*, uintptr_t))(Il2CppBase() + 0x18B5A44))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B5A9C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetPvpRequest* other) {
		return ((R (*)(AdminGetPvpRequest*, ProtoModels::AdminGetPvpRequest*))(Il2CppBase() + 0x18B5B18))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetPvpRequest*, uintptr_t))(Il2CppBase() + 0x18B5B2C))(this, input);
	}

};

}
