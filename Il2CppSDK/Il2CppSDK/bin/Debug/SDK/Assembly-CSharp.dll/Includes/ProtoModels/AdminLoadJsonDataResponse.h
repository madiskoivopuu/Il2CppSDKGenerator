#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminLoadJsonDataResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminLoadJsonDataResponse"));
	}

	 static MessageParser1<ProtoModels::AdminLoadJsonDataResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminLoadJsonDataResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& InventoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& inventory_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& WorldFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& world_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::AdminLoadJsonDataResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminLoadJsonDataResponse*>* (*)(void *))(Il2CppBase() + 0x1293A58))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1293ABC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293BDC))(this);
	}
	template <typename R = ProtoModels::AdminLoadJsonDataResponse*> R Clone() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293D10))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293D6C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminLoadJsonDataResponse*, int32_t))(Il2CppBase() + 0x1293D74))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293D7C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminLoadJsonDataResponse*, Il2CppString*))(Il2CppBase() + 0x1293D84))(this, value);
	}
	template <typename R = Il2CppString*> R get_Inventory() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293E04))(this);
	}
	template <typename R = void> R set_Inventory(Il2CppString* value) {
		return ((R (*)(AdminLoadJsonDataResponse*, Il2CppString*))(Il2CppBase() + 0x1293E0C))(this, value);
	}
	template <typename R = Il2CppString*> R get_World() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293E8C))(this);
	}
	template <typename R = void> R set_World(Il2CppString* value) {
		return ((R (*)(AdminLoadJsonDataResponse*, Il2CppString*))(Il2CppBase() + 0x1293E94))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminLoadJsonDataResponse*, Il2CppObject*))(Il2CppBase() + 0x1293F14))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminLoadJsonDataResponse* other) {
		return ((R (*)(AdminLoadJsonDataResponse*, ProtoModels::AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293F84))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1294010))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x12940C4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminLoadJsonDataResponse*, uintptr_t))(Il2CppBase() + 0x1294128))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x129421C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminLoadJsonDataResponse* other) {
		return ((R (*)(AdminLoadJsonDataResponse*, ProtoModels::AdminLoadJsonDataResponse*))(Il2CppBase() + 0x129436C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminLoadJsonDataResponse*, uintptr_t))(Il2CppBase() + 0x12943F0))(this, input);
	}

};

}
