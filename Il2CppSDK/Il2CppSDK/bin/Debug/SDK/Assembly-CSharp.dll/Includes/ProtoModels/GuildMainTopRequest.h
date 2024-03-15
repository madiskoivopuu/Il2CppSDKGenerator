#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildMainTopRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildMainTopRequest"));
	}

	 static MessageParser1<ProtoModels::GuildMainTopRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildMainTopRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::GuildMessageType*>*& _repeated_guilds_codec() {
		return *(FieldCodec1<ProtoModels::GuildMessageType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::GuildMessageType*>*& guilds_() {
		return *(RepeatedField1<ProtoModels::GuildMessageType*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UpdateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& update_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::GuildMainTopRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildMainTopRequest*>* (*)(void *))(Il2CppBase() + 0x1B345B8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B3461C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B3473C))(this);
	}
	template <typename R = ProtoModels::GuildMainTopRequest*> R Clone() {
		return ((R (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B348A0))(this);
	}
	 RepeatedField1<ProtoModels::GuildMessageType*>* get_Guilds() {
		return ((RepeatedField1<ProtoModels::GuildMessageType*>* (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B348FC))(this);
	}
	template <typename R = bool> R get_Update() {
		return ((R (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B34904))(this);
	}
	template <typename R = void> R set_Update(bool value) {
		return ((R (*)(GuildMainTopRequest*, bool))(Il2CppBase() + 0x1B3490C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildMainTopRequest*, Il2CppObject*))(Il2CppBase() + 0x1B34918))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildMainTopRequest* other) {
		return ((R (*)(GuildMainTopRequest*, ProtoModels::GuildMainTopRequest*))(Il2CppBase() + 0x1B34988))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B34A2C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B34A8C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildMainTopRequest*, uintptr_t))(Il2CppBase() + 0x1B34AF0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B34BCC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildMainTopRequest* other) {
		return ((R (*)(GuildMainTopRequest*, ProtoModels::GuildMainTopRequest*))(Il2CppBase() + 0x1B34C78))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildMainTopRequest*, uintptr_t))(Il2CppBase() + 0x1B34CF0))(this, input);
	}

};

}
