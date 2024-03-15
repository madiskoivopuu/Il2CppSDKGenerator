#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaServerCheatRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaServerCheatRequest"));
	}

	 static MessageParser1ProtoModels::ArenaServerCheatRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaServerCheatRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CommandFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaServerCheatCommandType*> R& command_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& IntParamsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_intParams_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1int64_t>*& intParams_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaServerCheatRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaServerCheatRequest*>* (*)(void *))(Il2CppBase() + 0x2712608))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x271266C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x271278C))(this);
	}
	template <typename R = ProtoModels::ArenaServerCheatRequest*> R Clone() {
		return ((R (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x27128FC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712958))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaServerCheatRequest*, int64_t))(Il2CppBase() + 0x2712960))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712968))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaServerCheatRequest*, int64_t))(Il2CppBase() + 0x2712970))(this, value);
	}
	template <typename R = ProtoModels::ArenaServerCheatCommandType*> R get_Command() {
		return ((R (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712978))(this);
	}
	template <typename R = void> R set_Command(ProtoModels::ArenaServerCheatCommandType* value) {
		return ((R (*)(ArenaServerCheatRequest*, ProtoModels::ArenaServerCheatCommandType*))(Il2CppBase() + 0x2712980))(this, value);
	}
	 RepeatedField1int64_t>* get_IntParams() {
		return ((RepeatedField1int64_t>* (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712988))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaServerCheatRequest*, Il2CppObject*))(Il2CppBase() + 0x2712990))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaServerCheatRequest* other) {
		return ((R (*)(ArenaServerCheatRequest*, ProtoModels::ArenaServerCheatRequest*))(Il2CppBase() + 0x2712A00))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712ABC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712B60))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaServerCheatRequest*, uintptr_t))(Il2CppBase() + 0x2712BC4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712CE8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaServerCheatRequest* other) {
		return ((R (*)(ArenaServerCheatRequest*, ProtoModels::ArenaServerCheatRequest*))(Il2CppBase() + 0x2712E4C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaServerCheatRequest*, uintptr_t))(Il2CppBase() + 0x2712EE8))(this, input);
	}

};

}
