#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetStatisticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetStatisticRequest"));
	}

	 static MessageParser1<ProtoModels::AdminGetStatisticRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetStatisticRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::AdminGetStatisticRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetStatisticRequest*>* (*)(void *))(Il2CppBase() + 0x18B68A0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B6904))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6A24))(this);
	}
	template <typename R = ProtoModels::AdminGetStatisticRequest*> R Clone() {
		return ((R (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6ABC))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6B28))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminGetStatisticRequest*, int64_t))(Il2CppBase() + 0x18B6B30))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetStatisticRequest*, Il2CppObject*))(Il2CppBase() + 0x18B6B38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetStatisticRequest* other) {
		return ((R (*)(AdminGetStatisticRequest*, ProtoModels::AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6BC4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6BF4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6C34))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B6C98))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6CF0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetStatisticRequest* other) {
		return ((R (*)(AdminGetStatisticRequest*, ProtoModels::AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6D6C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B6D80))(this, input);
	}

};

}
