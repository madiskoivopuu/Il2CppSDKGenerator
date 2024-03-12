#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreCategory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreCategory"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EventsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_events_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& events_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TagsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_tags_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& tags_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x141D118))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x141D17C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D29C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D4B0))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D50C))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(StoreCategory*, int64_t))(Il2CppBase() + 0x141D514))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D51C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(StoreCategory*, Il2CppString*))(Il2CppBase() + 0x141D524))(this, value);
	}
	template <typename T = void*> T get_Events() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D5A4))(this);
	}
	template <typename T = void*> T get_Tags() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D5AC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(StoreCategory*, uintptr_t))(Il2CppBase() + 0x141D5B4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(StoreCategory*, uintptr_t))(Il2CppBase() + 0x141D624))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D700))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D7A4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(StoreCategory*, uintptr_t))(Il2CppBase() + 0x141D808))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(StoreCategory*))(Il2CppBase() + 0x141D93C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(StoreCategory*, uintptr_t))(Il2CppBase() + 0x141DAA4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(StoreCategory*, uintptr_t))(Il2CppBase() + 0x141DB68))(this, input);
	}

};

}
