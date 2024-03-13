#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminLoadJsonDataResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminLoadJsonDataResponse"));
	}

	template <typename T = MessageParser1AdminLoadJsonDataResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& InventoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& inventory_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& WorldFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& world_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1AdminLoadJsonDataResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1293A58))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1293ABC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293BDC))(this);
	}
	template <typename T = AdminLoadJsonDataResponse*> T Clone() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293D10))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293D6C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminLoadJsonDataResponse*, int32_t))(Il2CppBase() + 0x1293D74))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293D7C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminLoadJsonDataResponse*, Il2CppString*))(Il2CppBase() + 0x1293D84))(this, value);
	}
	template <typename T = Il2CppString*> T get_Inventory() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293E04))(this);
	}
	template <typename T = void> T set_Inventory(Il2CppString* value) {
		return ((T (*)(AdminLoadJsonDataResponse*, Il2CppString*))(Il2CppBase() + 0x1293E0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_World() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293E8C))(this);
	}
	template <typename T = void> T set_World(Il2CppString* value) {
		return ((T (*)(AdminLoadJsonDataResponse*, Il2CppString*))(Il2CppBase() + 0x1293E94))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminLoadJsonDataResponse*, Il2CppObject*))(Il2CppBase() + 0x1293F14))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminLoadJsonDataResponse* other) {
		return ((T (*)(AdminLoadJsonDataResponse*, AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1293F84))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x1294010))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x12940C4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminLoadJsonDataResponse*, uintptr_t))(Il2CppBase() + 0x1294128))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminLoadJsonDataResponse*))(Il2CppBase() + 0x129421C))(this);
	}
	template <typename T = void> T MergeFrom(AdminLoadJsonDataResponse* other) {
		return ((T (*)(AdminLoadJsonDataResponse*, AdminLoadJsonDataResponse*))(Il2CppBase() + 0x129436C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminLoadJsonDataResponse*, uintptr_t))(Il2CppBase() + 0x12943F0))(this, input);
	}

};

}
