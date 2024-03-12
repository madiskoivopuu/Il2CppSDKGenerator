#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class IncompletePurchaseHistory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "IncompletePurchaseHistory"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProductNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& productName_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ProductIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& productID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E3ED84))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E3EDE8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3EF08))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F014))(this);
	}
	template <typename T = Il2CppString*> T get_ProductName() {
		return ((T (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F070))(this);
	}
	template <typename T = void> T set_ProductName(Il2CppString* value) {
		return ((T (*)(IncompletePurchaseHistory*, Il2CppString*))(Il2CppBase() + 0x1E3F078))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProductID() {
		return ((T (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F0F8))(this);
	}
	template <typename T = void> T set_ProductID(Il2CppString* value) {
		return ((T (*)(IncompletePurchaseHistory*, Il2CppString*))(Il2CppBase() + 0x1E3F100))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(IncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E3F180))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(IncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E3F1F0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F258))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F2C4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(IncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E3F328))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(IncompletePurchaseHistory*))(Il2CppBase() + 0x1E3F3BC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(IncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E3F48C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(IncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E3F4EC))(this, input);
	}

};

}
