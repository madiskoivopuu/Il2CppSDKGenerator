#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetPveWorldsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetPveWorldsRequest"));
	}

	 static MessageParser1<ProtoModels::AdminGetPveWorldsRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetPveWorldsRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::AdminGetPveWorldsRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetPveWorldsRequest*>* (*)(void *))(Il2CppBase() + 0x18B43F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B445C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B457C))(this);
	}
	template <typename R = ProtoModels::AdminGetPveWorldsRequest*> R Clone() {
		return ((R (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B4614))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B4680))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminGetPveWorldsRequest*, int64_t))(Il2CppBase() + 0x18B4688))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetPveWorldsRequest*, Il2CppObject*))(Il2CppBase() + 0x18B4690))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetPveWorldsRequest* other) {
		return ((R (*)(AdminGetPveWorldsRequest*, ProtoModels::AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B471C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B474C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B478C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetPveWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18B47F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B4848))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetPveWorldsRequest* other) {
		return ((R (*)(AdminGetPveWorldsRequest*, ProtoModels::AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B48C4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetPveWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18B48D8))(this, input);
	}

};

}
