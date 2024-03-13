#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaServerCheatRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaServerCheatRequest"));
	}

	template <typename T = MessageParser1ArenaServerCheatRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CommandFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaServerCheatCommandType*> T& command_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& IntParamsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_intParams_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1int64_t>*> T& intParams_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ArenaServerCheatRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2712608))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271266C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x271278C))(this);
	}
	template <typename T = ArenaServerCheatRequest*> T Clone() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x27128FC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712958))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaServerCheatRequest*, int64_t))(Il2CppBase() + 0x2712960))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712968))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaServerCheatRequest*, int64_t))(Il2CppBase() + 0x2712970))(this, value);
	}
	template <typename T = ArenaServerCheatCommandType*> T get_Command() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712978))(this);
	}
	template <typename T = void> T set_Command(ArenaServerCheatCommandType* value) {
		return ((T (*)(ArenaServerCheatRequest*, ArenaServerCheatCommandType*))(Il2CppBase() + 0x2712980))(this, value);
	}
	template <typename T = RepeatedField1int64_t>*> T get_IntParams() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712988))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaServerCheatRequest*, Il2CppObject*))(Il2CppBase() + 0x2712990))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaServerCheatRequest* other) {
		return ((T (*)(ArenaServerCheatRequest*, ArenaServerCheatRequest*))(Il2CppBase() + 0x2712A00))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712ABC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712B60))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaServerCheatRequest*, uintptr_t))(Il2CppBase() + 0x2712BC4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaServerCheatRequest*))(Il2CppBase() + 0x2712CE8))(this);
	}
	template <typename T = void> T MergeFrom(ArenaServerCheatRequest* other) {
		return ((T (*)(ArenaServerCheatRequest*, ArenaServerCheatRequest*))(Il2CppBase() + 0x2712E4C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaServerCheatRequest*, uintptr_t))(Il2CppBase() + 0x2712EE8))(this, input);
	}

};

}
