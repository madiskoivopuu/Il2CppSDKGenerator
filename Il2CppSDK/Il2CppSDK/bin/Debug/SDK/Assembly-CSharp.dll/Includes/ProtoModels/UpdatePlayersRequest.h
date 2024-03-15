#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdatePlayersRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdatePlayersRequest"));
	}

	 static MessageParser1ProtoModels::UpdatePlayersRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::UpdatePlayersRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PlayersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Player*>*& _repeated_players_codec() {
		return *(FieldCodec1ProtoModels::Player*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::Player*>*& players_() {
		return *(RepeatedField1ProtoModels::Player*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::UpdatePlayersRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::UpdatePlayersRequest*>* (*)(void *))(Il2CppBase() + 0x153F820))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x153F884))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153F9A4))(this);
	}
	template <typename R = ProtoModels::UpdatePlayersRequest*> R Clone() {
		return ((R (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FAFC))(this);
	}
	 RepeatedField1ProtoModels::Player*>* get_Players() {
		return ((RepeatedField1ProtoModels::Player*>* (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FB58))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UpdatePlayersRequest*, Il2CppObject*))(Il2CppBase() + 0x153FB60))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UpdatePlayersRequest* other) {
		return ((R (*)(UpdatePlayersRequest*, ProtoModels::UpdatePlayersRequest*))(Il2CppBase() + 0x153FBD0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FC5C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FC88))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UpdatePlayersRequest*, uintptr_t))(Il2CppBase() + 0x153FCEC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UpdatePlayersRequest*))(Il2CppBase() + 0x153FD8C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UpdatePlayersRequest* other) {
		return ((R (*)(UpdatePlayersRequest*, ProtoModels::UpdatePlayersRequest*))(Il2CppBase() + 0x153FE1C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UpdatePlayersRequest*, uintptr_t))(Il2CppBase() + 0x153FE94))(this, input);
	}

};

}
