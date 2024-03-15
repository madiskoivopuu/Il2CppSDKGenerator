#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaIncompletePurchaseHistory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaIncompletePurchaseHistory"));
	}

	 static MessageParser1<ProtoModels::ArenaIncompletePurchaseHistory*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaIncompletePurchaseHistory*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::ArenaIncompletePurchaseHistory*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaIncompletePurchaseHistory*>* (*)(void *))(Il2CppBase() + 0x1E2A354))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2A3B8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A4D8))(this);
	}
	template <typename R = ProtoModels::ArenaIncompletePurchaseHistory*> R Clone() {
		return ((R (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A5E4))(this);
	}
	template <typename R = Il2CppString*> R get_ProductName() {
		return ((R (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A640))(this);
	}
	template <typename R = void> R set_ProductName(Il2CppString* value) {
		return ((R (*)(ArenaIncompletePurchaseHistory*, Il2CppString*))(Il2CppBase() + 0x1E2A648))(this, value);
	}
	template <typename R = Il2CppString*> R get_ProductID() {
		return ((R (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A6C8))(this);
	}
	template <typename R = void> R set_ProductID(Il2CppString* value) {
		return ((R (*)(ArenaIncompletePurchaseHistory*, Il2CppString*))(Il2CppBase() + 0x1E2A6D0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaIncompletePurchaseHistory*, Il2CppObject*))(Il2CppBase() + 0x1E2A750))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaIncompletePurchaseHistory* other) {
		return ((R (*)(ArenaIncompletePurchaseHistory*, ProtoModels::ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A7C0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A828))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A894))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaIncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E2A8F8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A98C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaIncompletePurchaseHistory* other) {
		return ((R (*)(ArenaIncompletePurchaseHistory*, ProtoModels::ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2AA5C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaIncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E2AABC))(this, input);
	}

};

}
