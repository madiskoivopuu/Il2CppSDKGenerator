#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PurchaseItemType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PurchaseItemType"));
	}

	 static MessageParser1<ProtoModels::PurchaseItemType*>*& _parser() {
		return *(MessageParser1<ProtoModels::PurchaseItemType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::PurchaseItemType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PurchaseItemType*>* (*)(void *))(Il2CppBase() + 0x11B93AC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11B9410))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9530))(this);
	}
	template <typename R = ProtoModels::PurchaseItemType*> R Clone() {
		return ((R (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9628))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9684))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(PurchaseItemType*, Il2CppString*))(Il2CppBase() + 0x11B968C))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(PurchaseItemType*))(Il2CppBase() + 0x11B970C))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(PurchaseItemType*, int32_t))(Il2CppBase() + 0x11B9714))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PurchaseItemType*, Il2CppObject*))(Il2CppBase() + 0x11B971C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PurchaseItemType* other) {
		return ((R (*)(PurchaseItemType*, ProtoModels::PurchaseItemType*))(Il2CppBase() + 0x11B978C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PurchaseItemType*))(Il2CppBase() + 0x11B97EC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9860))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PurchaseItemType*, uintptr_t))(Il2CppBase() + 0x11B98C4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9950))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PurchaseItemType* other) {
		return ((R (*)(PurchaseItemType*, ProtoModels::PurchaseItemType*))(Il2CppBase() + 0x11B9A18))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PurchaseItemType*, uintptr_t))(Il2CppBase() + 0x11B9A64))(this, input);
	}

};

}
