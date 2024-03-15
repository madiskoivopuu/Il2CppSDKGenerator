#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPurchaseRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPurchaseRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaPurchaseRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaPurchaseRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PurchaseFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PurchaseInfoType*> R& purchase_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaPurchaseRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaPurchaseRequest*>* (*)(void *))(Il2CppBase() + 0x1A6807C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A680E0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A68200))(this);
	}
	template <typename R = ProtoModels::ArenaPurchaseRequest*> R Clone() {
		return ((R (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A682BC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A68318))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaPurchaseRequest*, int64_t))(Il2CppBase() + 0x1A68320))(this, value);
	}
	template <typename R = ProtoModels::PurchaseInfoType*> R get_Purchase() {
		return ((R (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A68328))(this);
	}
	template <typename R = void> R set_Purchase(ProtoModels::PurchaseInfoType* value) {
		return ((R (*)(ArenaPurchaseRequest*, ProtoModels::PurchaseInfoType*))(Il2CppBase() + 0x1A68330))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaPurchaseRequest*, Il2CppObject*))(Il2CppBase() + 0x1A68338))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaPurchaseRequest* other) {
		return ((R (*)(ArenaPurchaseRequest*, ProtoModels::ArenaPurchaseRequest*))(Il2CppBase() + 0x1A683A8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A683E4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A6844C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x1A684B0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A68534))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaPurchaseRequest* other) {
		return ((R (*)(ArenaPurchaseRequest*, ProtoModels::ArenaPurchaseRequest*))(Il2CppBase() + 0x1A685E8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x1A686A0))(this, input);
	}

};

}
