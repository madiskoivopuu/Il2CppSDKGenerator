#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreProductPrice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreProductPrice"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CurrencyTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& currencyType_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& value_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& ProductIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& productID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x271F9B4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271FA18))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FB38))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FC34))(this);
	}
	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FC90))(this);
	}
	template <typename T = void> T set_CurrencyType(uintptr_t value) {
		return ((T (*)(ArenaStoreProductPrice*, uintptr_t))(Il2CppBase() + 0x271FC98))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FCA0))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(ArenaStoreProductPrice*, int32_t))(Il2CppBase() + 0x271FCA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProductID() {
		return ((T (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FCB0))(this);
	}
	template <typename T = void> T set_ProductID(Il2CppString* value) {
		return ((T (*)(ArenaStoreProductPrice*, Il2CppString*))(Il2CppBase() + 0x271FCB8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaStoreProductPrice*, uintptr_t))(Il2CppBase() + 0x271FD38))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaStoreProductPrice*, uintptr_t))(Il2CppBase() + 0x271FDA8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FE0C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FE9C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreProductPrice*, uintptr_t))(Il2CppBase() + 0x271FF00))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreProductPrice*))(Il2CppBase() + 0x271FFB8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaStoreProductPrice*, uintptr_t))(Il2CppBase() + 0x27200BC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreProductPrice*, uintptr_t))(Il2CppBase() + 0x27200FC))(this, input);
	}

};

}
