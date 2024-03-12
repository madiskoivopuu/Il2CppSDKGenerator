#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreResource"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& DurabilityFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& durability_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x27202C8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x272032C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreResource*))(Il2CppBase() + 0x272044C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaStoreResource*))(Il2CppBase() + 0x272054C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaStoreResource*))(Il2CppBase() + 0x27205A8))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaStoreResource*, Il2CppString*))(Il2CppBase() + 0x27205B0))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArenaStoreResource*))(Il2CppBase() + 0x2720630))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(ArenaStoreResource*, int32_t))(Il2CppBase() + 0x2720638))(this, value);
	}
	template <typename T = int64_t> T get_Durability() {
		return ((T (*)(ArenaStoreResource*))(Il2CppBase() + 0x2720640))(this);
	}
	template <typename T = void> T set_Durability(int64_t value) {
		return ((T (*)(ArenaStoreResource*, int64_t))(Il2CppBase() + 0x2720648))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaStoreResource*, uintptr_t))(Il2CppBase() + 0x2720650))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaStoreResource*, uintptr_t))(Il2CppBase() + 0x27206C0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreResource*))(Il2CppBase() + 0x2720730))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreResource*))(Il2CppBase() + 0x27207C4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreResource*, uintptr_t))(Il2CppBase() + 0x2720828))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreResource*))(Il2CppBase() + 0x27208E0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaStoreResource*, uintptr_t))(Il2CppBase() + 0x27209EC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreResource*, uintptr_t))(Il2CppBase() + 0x2720A44))(this, input);
	}

};

}
