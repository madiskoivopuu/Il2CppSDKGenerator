#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioValue"));
	}

	 static MessageParser1<ProtoModels::RatioValue*>*& _parser() {
		return *(MessageParser1<ProtoModels::RatioValue*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& value_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::RatioValue*>* get_Parser() {
		return ((MessageParser1<ProtoModels::RatioValue*>* (*)(void *))(Il2CppBase() + 0x138F198))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x138F1FC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioValue*))(Il2CppBase() + 0x138F31C))(this);
	}
	template <typename R = ProtoModels::RatioValue*> R Clone() {
		return ((R (*)(RatioValue*))(Il2CppBase() + 0x138F3BC))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(RatioValue*))(Il2CppBase() + 0x138F418))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(RatioValue*, int64_t))(Il2CppBase() + 0x138F420))(this, value);
	}
	template <typename R = int32_t> R get_Value() {
		return ((R (*)(RatioValue*))(Il2CppBase() + 0x138F428))(this);
	}
	template <typename R = void> R set_Value(int32_t value) {
		return ((R (*)(RatioValue*, int32_t))(Il2CppBase() + 0x138F430))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioValue*, Il2CppObject*))(Il2CppBase() + 0x138F438))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioValue* other) {
		return ((R (*)(RatioValue*, ProtoModels::RatioValue*))(Il2CppBase() + 0x138F4D4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioValue*))(Il2CppBase() + 0x138F514))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioValue*))(Il2CppBase() + 0x138F584))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioValue*, uintptr_t))(Il2CppBase() + 0x138F5E8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioValue*))(Il2CppBase() + 0x138F66C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioValue* other) {
		return ((R (*)(RatioValue*, ProtoModels::RatioValue*))(Il2CppBase() + 0x138F720))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioValue*, uintptr_t))(Il2CppBase() + 0x138F740))(this, input);
	}

};

}
