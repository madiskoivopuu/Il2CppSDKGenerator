#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetArenaStatisticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetArenaStatisticRequest"));
	}

	 static MessageParser1<ProtoModels::AdminGetArenaStatisticRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetArenaStatisticRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::AdminGetArenaStatisticRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetArenaStatisticRequest*>* (*)(void *))(Il2CppBase() + 0x18B1B48))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B1BAC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1CCC))(this);
	}
	template <typename R = ProtoModels::AdminGetArenaStatisticRequest*> R Clone() {
		return ((R (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1D64))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1DD0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminGetArenaStatisticRequest*, int64_t))(Il2CppBase() + 0x18B1DD8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetArenaStatisticRequest*, Il2CppObject*))(Il2CppBase() + 0x18B1DE0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetArenaStatisticRequest* other) {
		return ((R (*)(AdminGetArenaStatisticRequest*, ProtoModels::AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1E6C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1E9C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1EDC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetArenaStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B1F40))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B1F98))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetArenaStatisticRequest* other) {
		return ((R (*)(AdminGetArenaStatisticRequest*, ProtoModels::AdminGetArenaStatisticRequest*))(Il2CppBase() + 0x18B2014))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetArenaStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B2028))(this, input);
	}

};

}
