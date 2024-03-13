#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PurchaseItemType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PurchaseItemType"));
	}

	template <typename T = MessageParser1PurchaseItemType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1PurchaseItemType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11B93AC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11B9410))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9530))(this);
	}
	template <typename T = PurchaseItemType*> T Clone() {
		return ((T (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9628))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9684))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(PurchaseItemType*, Il2CppString*))(Il2CppBase() + 0x11B968C))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(PurchaseItemType*))(Il2CppBase() + 0x11B970C))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(PurchaseItemType*, int32_t))(Il2CppBase() + 0x11B9714))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PurchaseItemType*, Il2CppObject*))(Il2CppBase() + 0x11B971C))(this, other);
	}
	template <typename T = bool> T Equals_1(PurchaseItemType* other) {
		return ((T (*)(PurchaseItemType*, PurchaseItemType*))(Il2CppBase() + 0x11B978C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PurchaseItemType*))(Il2CppBase() + 0x11B97EC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9860))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PurchaseItemType*, uintptr_t))(Il2CppBase() + 0x11B98C4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PurchaseItemType*))(Il2CppBase() + 0x11B9950))(this);
	}
	template <typename T = void> T MergeFrom(PurchaseItemType* other) {
		return ((T (*)(PurchaseItemType*, PurchaseItemType*))(Il2CppBase() + 0x11B9A18))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PurchaseItemType*, uintptr_t))(Il2CppBase() + 0x11B9A64))(this, input);
	}

};

}
