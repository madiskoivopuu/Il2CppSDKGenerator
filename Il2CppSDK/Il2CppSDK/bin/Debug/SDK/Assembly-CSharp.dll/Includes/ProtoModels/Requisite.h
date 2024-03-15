#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Requisite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Requisite"));
	}

	 static MessageParser1<ProtoModels::Requisite*>*& _parser() {
		return *(MessageParser1<ProtoModels::Requisite*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TotalCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& totalCount_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& RequireCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& requireCount_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& TargetNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& targetName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::Requisite*>* get_Parser() {
		return ((MessageParser1<ProtoModels::Requisite*>* (*)(void *))(Il2CppBase() + 0x1199904))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1199968))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199A88))(this);
	}
	template <typename R = ProtoModels::Requisite*> R Clone() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199BB4))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199C10))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(Requisite*, int64_t))(Il2CppBase() + 0x1199C18))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199C20))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(Requisite*, Il2CppString*))(Il2CppBase() + 0x1199C28))(this, value);
	}
	template <typename R = int32_t> R get_TotalCount() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199CA8))(this);
	}
	template <typename R = void> R set_TotalCount(int32_t value) {
		return ((R (*)(Requisite*, int32_t))(Il2CppBase() + 0x1199CB0))(this, value);
	}
	template <typename R = int32_t> R get_RequireCount() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199CB8))(this);
	}
	template <typename R = void> R set_RequireCount(int32_t value) {
		return ((R (*)(Requisite*, int32_t))(Il2CppBase() + 0x1199CC0))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199CC8))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(Requisite*, int32_t))(Il2CppBase() + 0x1199CD0))(this, value);
	}
	template <typename R = Il2CppString*> R get_TargetName() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199CD8))(this);
	}
	template <typename R = void> R set_TargetName(Il2CppString* value) {
		return ((R (*)(Requisite*, Il2CppString*))(Il2CppBase() + 0x1199CE0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Requisite*, Il2CppObject*))(Il2CppBase() + 0x1199D60))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Requisite* other) {
		return ((R (*)(Requisite*, ProtoModels::Requisite*))(Il2CppBase() + 0x1199DD0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199E78))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x1199F64))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Requisite*, uintptr_t))(Il2CppBase() + 0x1199FC8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Requisite*))(Il2CppBase() + 0x119A10C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Requisite* other) {
		return ((R (*)(Requisite*, ProtoModels::Requisite*))(Il2CppBase() + 0x119A2CC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Requisite*, uintptr_t))(Il2CppBase() + 0x119A35C))(this, input);
	}

};

}
