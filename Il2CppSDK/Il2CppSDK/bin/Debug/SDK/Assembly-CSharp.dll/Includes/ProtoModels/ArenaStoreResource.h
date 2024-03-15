#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreResource"));
	}

	 static MessageParser1ProtoModels::ArenaStoreResource*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaStoreResource*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& DurabilityFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& durability_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaStoreResource*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaStoreResource*>* (*)(void *))(Il2CppBase() + 0x27202C8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x272032C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreResource*))(Il2CppBase() + 0x272044C))(this);
	}
	template <typename R = ProtoModels::ArenaStoreResource*> R Clone() {
		return ((R (*)(ArenaStoreResource*))(Il2CppBase() + 0x272054C))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaStoreResource*))(Il2CppBase() + 0x27205A8))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaStoreResource*, Il2CppString*))(Il2CppBase() + 0x27205B0))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(ArenaStoreResource*))(Il2CppBase() + 0x2720630))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(ArenaStoreResource*, int32_t))(Il2CppBase() + 0x2720638))(this, value);
	}
	template <typename R = int64_t> R get_Durability() {
		return ((R (*)(ArenaStoreResource*))(Il2CppBase() + 0x2720640))(this);
	}
	template <typename R = void> R set_Durability(int64_t value) {
		return ((R (*)(ArenaStoreResource*, int64_t))(Il2CppBase() + 0x2720648))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreResource*, Il2CppObject*))(Il2CppBase() + 0x2720650))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreResource* other) {
		return ((R (*)(ArenaStoreResource*, ProtoModels::ArenaStoreResource*))(Il2CppBase() + 0x27206C0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreResource*))(Il2CppBase() + 0x2720730))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreResource*))(Il2CppBase() + 0x27207C4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreResource*, uintptr_t))(Il2CppBase() + 0x2720828))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreResource*))(Il2CppBase() + 0x27208E0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreResource* other) {
		return ((R (*)(ArenaStoreResource*, ProtoModels::ArenaStoreResource*))(Il2CppBase() + 0x27209EC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreResource*, uintptr_t))(Il2CppBase() + 0x2720A44))(this, input);
	}

};

}
