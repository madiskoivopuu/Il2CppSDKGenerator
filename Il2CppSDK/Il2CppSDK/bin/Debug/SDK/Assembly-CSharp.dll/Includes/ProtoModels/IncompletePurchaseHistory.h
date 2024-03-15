#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class IncompletePurchaseHistory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "IncompletePurchaseHistory"));
	}

	 static MessageParser1<ProtoModels::IncompletePurchaseHistory*>*& _parser() {
		return *(MessageParser1<ProtoModels::IncompletePurchaseHistory*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ProductNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& productName_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ProductIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& productID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::IncompletePurchaseHistory*>* get_Parser() {
		return ((MessageParser1<ProtoModels::IncompletePurchaseHistory*>* (*)(void *))(Il2CppBase() + 0x1E3ED84))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E3EDE8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3EF08))(this);
	}
	template <typename R = ProtoModels::IncompletePurchaseHistory*> R Clone() {
		return ((R (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F014))(this);
	}
	template <typename R = Il2CppString*> R get_ProductName() {
		return ((R (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F070))(this);
	}
	template <typename R = void> R set_ProductName(Il2CppString* value) {
		return ((R (*)(IncompletePurchaseHistory*, Il2CppString*))(Il2CppBase() + 0x1E3F078))(this, value);
	}
	template <typename R = Il2CppString*> R get_ProductID() {
		return ((R (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F0F8))(this);
	}
	template <typename R = void> R set_ProductID(Il2CppString* value) {
		return ((R (*)(IncompletePurchaseHistory*, Il2CppString*))(Il2CppBase() + 0x1E3F100))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(IncompletePurchaseHistory*, Il2CppObject*))(Il2CppBase() + 0x1E3F180))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::IncompletePurchaseHistory* other) {
		return ((R (*)(IncompletePurchaseHistory*, ProtoModels::IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F1F0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F258))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F2C4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(IncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E3F328))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F3BC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::IncompletePurchaseHistory* other) {
		return ((R (*)(IncompletePurchaseHistory*, ProtoModels::IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F48C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(IncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E3F4EC))(this, input);
	}

};

}
