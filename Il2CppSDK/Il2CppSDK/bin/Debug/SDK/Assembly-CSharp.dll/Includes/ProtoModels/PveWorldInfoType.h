#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PveWorldInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PveWorldInfoType"));
	}

	 static MessageParser1ProtoModels::PveWorldInfoType*>*& _parser() {
		return *(MessageParser1ProtoModels::PveWorldInfoType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& SoloFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& solo_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& SoloCoopFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& soloCoop_() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = int32_t> static R& FreeForAllFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& freeForAll_() {
		return *(R*)((uintptr_t)this + 0x22);
	}

	 static MessageParser1ProtoModels::PveWorldInfoType*>* get_Parser() {
		return ((MessageParser1ProtoModels::PveWorldInfoType*>* (*)(void *))(Il2CppBase() + 0x11BEB10))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11BEB74))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEC94))(this);
	}
	template <typename R = ProtoModels::PveWorldInfoType*> R Clone() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEDA4))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEE00))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(PveWorldInfoType*, int64_t))(Il2CppBase() + 0x11BEE08))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEE10))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(PveWorldInfoType*, Il2CppString*))(Il2CppBase() + 0x11BEE18))(this, value);
	}
	template <typename R = bool> R get_Solo() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEE98))(this);
	}
	template <typename R = void> R set_Solo(bool value) {
		return ((R (*)(PveWorldInfoType*, bool))(Il2CppBase() + 0x11BEEA0))(this, value);
	}
	template <typename R = bool> R get_SoloCoop() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEEAC))(this);
	}
	template <typename R = void> R set_SoloCoop(bool value) {
		return ((R (*)(PveWorldInfoType*, bool))(Il2CppBase() + 0x11BEEB4))(this, value);
	}
	template <typename R = bool> R get_FreeForAll() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEEC0))(this);
	}
	template <typename R = void> R set_FreeForAll(bool value) {
		return ((R (*)(PveWorldInfoType*, bool))(Il2CppBase() + 0x11BEEC8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PveWorldInfoType*, Il2CppObject*))(Il2CppBase() + 0x11BEED4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PveWorldInfoType* other) {
		return ((R (*)(PveWorldInfoType*, ProtoModels::PveWorldInfoType*))(Il2CppBase() + 0x11BEF44))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BF000))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BF0D8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PveWorldInfoType*, uintptr_t))(Il2CppBase() + 0x11BF13C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BF24C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PveWorldInfoType* other) {
		return ((R (*)(PveWorldInfoType*, ProtoModels::PveWorldInfoType*))(Il2CppBase() + 0x11BF348))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PveWorldInfoType*, uintptr_t))(Il2CppBase() + 0x11BF3B8))(this, input);
	}

};

}
