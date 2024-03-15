#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Diplomacy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Diplomacy"));
	}

	 static MessageParser1<ProtoModels::Diplomacy*>*& _parser() {
		return *(MessageParser1<ProtoModels::Diplomacy*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& FromClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& fromClanID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ToClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& toClanID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& StateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::DiplomacyState> R& state_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::Diplomacy*>* get_Parser() {
		return ((MessageParser1<ProtoModels::Diplomacy*>* (*)(void *))(Il2CppBase() + 0x12FB3E0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12FB444))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB564))(this);
	}
	template <typename R = ProtoModels::Diplomacy*> R Clone() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB614))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB670))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(Diplomacy*, int64_t))(Il2CppBase() + 0x12FB678))(this, value);
	}
	template <typename R = int64_t> R get_FromClanID() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB680))(this);
	}
	template <typename R = void> R set_FromClanID(int64_t value) {
		return ((R (*)(Diplomacy*, int64_t))(Il2CppBase() + 0x12FB688))(this, value);
	}
	template <typename R = int64_t> R get_ToClanID() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB690))(this);
	}
	template <typename R = void> R set_ToClanID(int64_t value) {
		return ((R (*)(Diplomacy*, int64_t))(Il2CppBase() + 0x12FB698))(this, value);
	}
	template <typename R = ProtoModels::DiplomacyState> R get_State() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB6A0))(this);
	}
	template <typename R = void> R set_State(ProtoModels::DiplomacyState value) {
		return ((R (*)(Diplomacy*, ProtoModels::DiplomacyState))(Il2CppBase() + 0x12FB6A8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Diplomacy*, Il2CppObject*))(Il2CppBase() + 0x12FB6B0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Diplomacy* other) {
		return ((R (*)(Diplomacy*, ProtoModels::Diplomacy*))(Il2CppBase() + 0x12FB720))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB780))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB828))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Diplomacy*, uintptr_t))(Il2CppBase() + 0x12FB88C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Diplomacy*))(Il2CppBase() + 0x12FB968))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Diplomacy* other) {
		return ((R (*)(Diplomacy*, ProtoModels::Diplomacy*))(Il2CppBase() + 0x12FBA9C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Diplomacy*, uintptr_t))(Il2CppBase() + 0x12FBAD4))(this, input);
	}

};

}
