#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetInventoryDataResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetInventoryDataResponse"));
	}

	template <typename T = MessageParser1ArenaGetInventoryDataResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UserInventoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaUserInventoryData*> T& userInventory_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaGetInventoryDataResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2375C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E237C0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E238E0))(this);
	}
	template <typename T = ArenaGetInventoryDataResponse*> T Clone() {
		return ((T (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E239FC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23A58))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaGetInventoryDataResponse*, int32_t))(Il2CppBase() + 0x1E23A60))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23A68))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaGetInventoryDataResponse*, Il2CppString*))(Il2CppBase() + 0x1E23A70))(this, value);
	}
	template <typename T = ArenaUserInventoryData*> T get_UserInventory() {
		return ((T (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23AF0))(this);
	}
	template <typename T = void> T set_UserInventory(ArenaUserInventoryData* value) {
		return ((T (*)(ArenaGetInventoryDataResponse*, ArenaUserInventoryData*))(Il2CppBase() + 0x1E23AF8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGetInventoryDataResponse*, Il2CppObject*))(Il2CppBase() + 0x1E23B00))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGetInventoryDataResponse* other) {
		return ((T (*)(ArenaGetInventoryDataResponse*, ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23B70))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23BE4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23C70))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetInventoryDataResponse*, uintptr_t))(Il2CppBase() + 0x1E23CD4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23D8C))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGetInventoryDataResponse* other) {
		return ((T (*)(ArenaGetInventoryDataResponse*, ArenaGetInventoryDataResponse*))(Il2CppBase() + 0x1E23E90))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetInventoryDataResponse*, uintptr_t))(Il2CppBase() + 0x1E23F60))(this, input);
	}

};

}
