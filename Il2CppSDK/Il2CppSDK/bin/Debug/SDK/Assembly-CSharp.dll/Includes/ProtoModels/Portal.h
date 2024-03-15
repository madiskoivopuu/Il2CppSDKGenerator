#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Portal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Portal"));
	}

	 static MessageParser1<ProtoModels::Portal*>*& _parser() {
		return *(MessageParser1<ProtoModels::Portal*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& tag_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& OwnerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& ownerID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::Portal*>* get_Parser() {
		return ((MessageParser1<ProtoModels::Portal*>* (*)(void *))(Il2CppBase() + 0x1576520))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1576584))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Portal*))(Il2CppBase() + 0x15766A4))(this);
	}
	template <typename R = ProtoModels::Portal*> R Clone() {
		return ((R (*)(Portal*))(Il2CppBase() + 0x157679C))(this);
	}
	template <typename R = Il2CppString*> R get_Tag() {
		return ((R (*)(Portal*))(Il2CppBase() + 0x15767F8))(this);
	}
	template <typename R = void> R set_Tag(Il2CppString* value) {
		return ((R (*)(Portal*, Il2CppString*))(Il2CppBase() + 0x1576800))(this, value);
	}
	template <typename R = int64_t> R get_OwnerID() {
		return ((R (*)(Portal*))(Il2CppBase() + 0x1576880))(this);
	}
	template <typename R = void> R set_OwnerID(int64_t value) {
		return ((R (*)(Portal*, int64_t))(Il2CppBase() + 0x1576888))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Portal*, Il2CppObject*))(Il2CppBase() + 0x1576890))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Portal* other) {
		return ((R (*)(Portal*, ProtoModels::Portal*))(Il2CppBase() + 0x1576900))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Portal*))(Il2CppBase() + 0x1576960))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Portal*))(Il2CppBase() + 0x15769D4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Portal*, uintptr_t))(Il2CppBase() + 0x1576A38))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Portal*))(Il2CppBase() + 0x1576AC4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Portal* other) {
		return ((R (*)(Portal*, ProtoModels::Portal*))(Il2CppBase() + 0x1576B8C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Portal*, uintptr_t))(Il2CppBase() + 0x1576BD8))(this, input);
	}

};

}
