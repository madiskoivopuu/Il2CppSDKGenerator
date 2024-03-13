#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaIncompletePurchaseHistory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaIncompletePurchaseHistory"));
	}

	template <typename T = MessageParser1ArenaIncompletePurchaseHistory*>*> static T& _parser() {
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

	template <typename T = MessageParser1ArenaIncompletePurchaseHistory*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2A354))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2A3B8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A4D8))(this);
	}
	template <typename T = ArenaIncompletePurchaseHistory*> T Clone() {
		return ((T (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A5E4))(this);
	}
	template <typename T = Il2CppString*> T get_ProductName() {
		return ((T (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A640))(this);
	}
	template <typename T = void> T set_ProductName(Il2CppString* value) {
		return ((T (*)(ArenaIncompletePurchaseHistory*, Il2CppString*))(Il2CppBase() + 0x1E2A648))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProductID() {
		return ((T (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A6C8))(this);
	}
	template <typename T = void> T set_ProductID(Il2CppString* value) {
		return ((T (*)(ArenaIncompletePurchaseHistory*, Il2CppString*))(Il2CppBase() + 0x1E2A6D0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaIncompletePurchaseHistory*, Il2CppObject*))(Il2CppBase() + 0x1E2A750))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaIncompletePurchaseHistory* other) {
		return ((T (*)(ArenaIncompletePurchaseHistory*, ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A7C0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A828))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A894))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaIncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E2A8F8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2A98C))(this);
	}
	template <typename T = void> T MergeFrom(ArenaIncompletePurchaseHistory* other) {
		return ((T (*)(ArenaIncompletePurchaseHistory*, ArenaIncompletePurchaseHistory*))(Il2CppBase() + 0x1E2AA5C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaIncompletePurchaseHistory*, uintptr_t))(Il2CppBase() + 0x1E2AABC))(this, input);
	}

};

}
