#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioUpdateValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioUpdateValue"));
	}

	 static MessageParser1ProtoModels::RatioUpdateValue*>*& _parser() {
		return *(MessageParser1ProtoModels::RatioUpdateValue*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RatioTableFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& ratioTable_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EntityIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& entityID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& DeltaFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& delta_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::RatioUpdateValue*>* get_Parser() {
		return ((MessageParser1ProtoModels::RatioUpdateValue*>* (*)(void *))(Il2CppBase() + 0x138E958))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x138E9BC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EADC))(this);
	}
	template <typename R = ProtoModels::RatioUpdateValue*> R Clone() {
		return ((R (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EB84))(this);
	}
	template <typename R = int32_t> R get_RatioTable() {
		return ((R (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EBE0))(this);
	}
	template <typename R = void> R set_RatioTable(int32_t value) {
		return ((R (*)(RatioUpdateValue*, int32_t))(Il2CppBase() + 0x138EBE8))(this, value);
	}
	template <typename R = int64_t> R get_EntityID() {
		return ((R (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EBF0))(this);
	}
	template <typename R = void> R set_EntityID(int64_t value) {
		return ((R (*)(RatioUpdateValue*, int64_t))(Il2CppBase() + 0x138EBF8))(this, value);
	}
	template <typename R = int32_t> R get_Delta() {
		return ((R (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EC00))(this);
	}
	template <typename R = void> R set_Delta(int32_t value) {
		return ((R (*)(RatioUpdateValue*, int32_t))(Il2CppBase() + 0x138EC08))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioUpdateValue*, Il2CppObject*))(Il2CppBase() + 0x138EC10))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioUpdateValue* other) {
		return ((R (*)(RatioUpdateValue*, ProtoModels::RatioUpdateValue*))(Il2CppBase() + 0x138ECBC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioUpdateValue*))(Il2CppBase() + 0x138ED0C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioUpdateValue*))(Il2CppBase() + 0x138ED98))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioUpdateValue*, uintptr_t))(Il2CppBase() + 0x138EDFC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EEAC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioUpdateValue* other) {
		return ((R (*)(RatioUpdateValue*, ProtoModels::RatioUpdateValue*))(Il2CppBase() + 0x138EFA4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioUpdateValue*, uintptr_t))(Il2CppBase() + 0x138EFD0))(this, input);
	}

};

}
