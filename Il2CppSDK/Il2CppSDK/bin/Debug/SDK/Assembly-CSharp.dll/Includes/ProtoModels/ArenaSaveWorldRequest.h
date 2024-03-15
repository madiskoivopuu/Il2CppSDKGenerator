#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaSaveWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaSaveWorldRequest"));
	}

	 static MessageParser1ProtoModels::ArenaSaveWorldRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaSaveWorldRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CallbackIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& callbackID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaSaveWorldRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaSaveWorldRequest*>* (*)(void *))(Il2CppBase() + 0x270FFF8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x271005C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x271017C))(this);
	}
	template <typename R = ProtoModels::ArenaSaveWorldRequest*> R Clone() {
		return ((R (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x271021C))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x2710278))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaSaveWorldRequest*, int64_t))(Il2CppBase() + 0x2710280))(this, value);
	}
	template <typename R = int64_t> R get_CallbackID() {
		return ((R (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x2710288))(this);
	}
	template <typename R = void> R set_CallbackID(int64_t value) {
		return ((R (*)(ArenaSaveWorldRequest*, int64_t))(Il2CppBase() + 0x2710290))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaSaveWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x2710298))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaSaveWorldRequest* other) {
		return ((R (*)(ArenaSaveWorldRequest*, ProtoModels::ArenaSaveWorldRequest*))(Il2CppBase() + 0x2710334))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x2710374))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x27103E0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaSaveWorldRequest*, uintptr_t))(Il2CppBase() + 0x2710444))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x27104C8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaSaveWorldRequest* other) {
		return ((R (*)(ArenaSaveWorldRequest*, ProtoModels::ArenaSaveWorldRequest*))(Il2CppBase() + 0x271057C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaSaveWorldRequest*, uintptr_t))(Il2CppBase() + 0x271059C))(this, input);
	}

};

}
