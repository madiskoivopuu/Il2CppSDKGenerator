#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildMainTopRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildMainTopRequest"));
	}

	template <typename T = MessageParser1GuildMainTopRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GuildMessageType*>*> static T& _repeated_guilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1GuildMessageType*>*> T& guilds_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UpdateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& update_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1GuildMainTopRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B345B8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B3461C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B3473C))(this);
	}
	template <typename T = GuildMainTopRequest*> T Clone() {
		return ((T (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B348A0))(this);
	}
	template <typename T = RepeatedField1GuildMessageType*>*> T get_Guilds() {
		return ((T (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B348FC))(this);
	}
	template <typename T = bool> T get_Update() {
		return ((T (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B34904))(this);
	}
	template <typename T = void> T set_Update(bool value) {
		return ((T (*)(GuildMainTopRequest*, bool))(Il2CppBase() + 0x1B3490C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildMainTopRequest*, Il2CppObject*))(Il2CppBase() + 0x1B34918))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildMainTopRequest* other) {
		return ((T (*)(GuildMainTopRequest*, GuildMainTopRequest*))(Il2CppBase() + 0x1B34988))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B34A2C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B34A8C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildMainTopRequest*, uintptr_t))(Il2CppBase() + 0x1B34AF0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildMainTopRequest*))(Il2CppBase() + 0x1B34BCC))(this);
	}
	template <typename T = void> T MergeFrom(GuildMainTopRequest* other) {
		return ((T (*)(GuildMainTopRequest*, GuildMainTopRequest*))(Il2CppBase() + 0x1B34C78))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildMainTopRequest*, uintptr_t))(Il2CppBase() + 0x1B34CF0))(this, input);
	}

};

}
