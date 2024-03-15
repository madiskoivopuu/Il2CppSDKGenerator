#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBackupWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBackupWorldRequest"));
	}

	 static MessageParser1ProtoModels::ArenaBackupWorldRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaBackupWorldRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldsIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldsID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& WorldJsonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_worldJson_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& worldJson_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& UserInventoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ArenaBackupUserInventory*>*& _repeated_userInventory_codec() {
		return *(FieldCodec1ProtoModels::ArenaBackupUserInventory*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::ArenaBackupUserInventory*>*& userInventory_() {
		return *(RepeatedField1ProtoModels::ArenaBackupUserInventory*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaBackupWorldRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaBackupWorldRequest*>* (*)(void *))(Il2CppBase() + 0x1A164F0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A16554))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16674))(this);
	}
	template <typename R = ProtoModels::ArenaBackupWorldRequest*> R Clone() {
		return ((R (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A1685C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A168B8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaBackupWorldRequest*, int64_t))(Il2CppBase() + 0x1A168C0))(this, value);
	}
	template <typename R = int64_t> R get_WorldsID() {
		return ((R (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A168C8))(this);
	}
	template <typename R = void> R set_WorldsID(int64_t value) {
		return ((R (*)(ArenaBackupWorldRequest*, int64_t))(Il2CppBase() + 0x1A168D0))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_WorldJson() {
		return ((RepeatedField1Il2CppString*>* (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A168D8))(this);
	}
	 RepeatedField1ProtoModels::ArenaBackupUserInventory*>* get_UserInventory() {
		return ((RepeatedField1ProtoModels::ArenaBackupUserInventory*>* (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A168E0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaBackupWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x1A168E8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaBackupWorldRequest* other) {
		return ((R (*)(ArenaBackupWorldRequest*, ProtoModels::ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16958))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16A30))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16AD0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaBackupWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A16B34))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16C60))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaBackupWorldRequest* other) {
		return ((R (*)(ArenaBackupWorldRequest*, ProtoModels::ArenaBackupWorldRequest*))(Il2CppBase() + 0x1A16DC0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaBackupWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A16E78))(this, input);
	}

};

}
