#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class EmptyCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "EmptyCell"));
	}

	 static MessageParser1<ProtoModels::EmptyCell*>*& _parser() {
		return *(MessageParser1<ProtoModels::EmptyCell*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EmptyJsonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& emptyJson_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::EmptyCell*>* get_Parser() {
		return ((MessageParser1<ProtoModels::EmptyCell*>* (*)(void *))(Il2CppBase() + 0x136FACC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x136FB30))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(EmptyCell*))(Il2CppBase() + 0x136FC50))(this);
	}
	template <typename R = ProtoModels::EmptyCell*> R Clone() {
		return ((R (*)(EmptyCell*))(Il2CppBase() + 0x136FD44))(this);
	}
	template <typename R = int32_t> R get_ID() {
		return ((R (*)(EmptyCell*))(Il2CppBase() + 0x136FDA0))(this);
	}
	template <typename R = void> R set_ID(int32_t value) {
		return ((R (*)(EmptyCell*, int32_t))(Il2CppBase() + 0x136FDA8))(this, value);
	}
	template <typename R = Il2CppString*> R get_EmptyJson() {
		return ((R (*)(EmptyCell*))(Il2CppBase() + 0x136FDB0))(this);
	}
	template <typename R = void> R set_EmptyJson(Il2CppString* value) {
		return ((R (*)(EmptyCell*, Il2CppString*))(Il2CppBase() + 0x136FDB8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(EmptyCell*, Il2CppObject*))(Il2CppBase() + 0x136FE38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::EmptyCell* other) {
		return ((R (*)(EmptyCell*, ProtoModels::EmptyCell*))(Il2CppBase() + 0x136FEA8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(EmptyCell*))(Il2CppBase() + 0x136FEFC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(EmptyCell*))(Il2CppBase() + 0x136FF70))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(EmptyCell*, uintptr_t))(Il2CppBase() + 0x136FFD4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(EmptyCell*))(Il2CppBase() + 0x1370060))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::EmptyCell* other) {
		return ((R (*)(EmptyCell*, ProtoModels::EmptyCell*))(Il2CppBase() + 0x1370120))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(EmptyCell*, uintptr_t))(Il2CppBase() + 0x1370154))(this, input);
	}

};

}
