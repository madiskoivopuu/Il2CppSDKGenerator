#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetInventoryDataResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetInventoryDataResponse"));
	}

	 static MessageParser1ProtoModels::ArenaGetInventoryDataResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaGetInventoryDataResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& UserInventoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R& userInventory_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaGetInventoryDataResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaGetInventoryDataResponse*>* (*)(void *))(Il2CppBase() + 0x1E2375C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E237C0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E238E0))(this);
	}
	template <typename R = ProtoModels::ArenaGetInventoryDataResponse*> R Clone() {
		return ((R (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E239FC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23A58))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaGetInventoryDataResponse*, int32_t))(Il2CppBase() + 0x1E23A60))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23A68))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaGetInventoryDataResponse*, Il2CppString*))(Il2CppBase() + 0x1E23A70))(this, value);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R get_UserInventory() {
		return ((R (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23AF0))(this);
	}
	template <typename R = void> R set_UserInventory(ProtoModels::ArenaUserInventoryData* value) {
		return ((R (*)(ArenaGetInventoryDataResponse*, ProtoModels::ArenaUserInventoryData*))(Il2CppBase() + 0x1E23AF8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetInventoryDataResponse*, Il2CppObject*))(Il2CppBase() + 0x1E23B00))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetInventoryDataResponse* other) {
		return ((R (*)(ArenaGetInventoryDataResponse*, ProtoModels::ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23B70))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23BE4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23C70))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetInventoryDataResponse*, uintptr_t))(Il2CppBase() + 0x1E23CD4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23D8C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetInventoryDataResponse* other) {
		return ((R (*)(ArenaGetInventoryDataResponse*, ProtoModels::ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23E90))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetInventoryDataResponse*, uintptr_t))(Il2CppBase() + 0x1E23F60))(this, input);
	}

};

}
