#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PersonalEntities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PersonalEntities"));
	}

	 static MessageParser1<ProtoModels::PersonalEntities*>*& _parser() {
		return *(MessageParser1<ProtoModels::PersonalEntities*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& EntitiesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, Il2CppString*>*& _map_entities_codec() {
		return *(Codec<Il2CppString*, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2<Il2CppString*, Il2CppString*>*& entities_() {
		return *(MapField2<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::PersonalEntities*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PersonalEntities*>* (*)(void *))(Il2CppBase() + 0x11EA524))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11EA588))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PersonalEntities*))(Il2CppBase() + 0x11EA6A8))(this);
	}
	template <typename R = ProtoModels::PersonalEntities*> R Clone() {
		return ((R (*)(PersonalEntities*))(Il2CppBase() + 0x11EA800))(this);
	}
	 MapField2<Il2CppString*, Il2CppString*>* get_Entities() {
		return ((MapField2<Il2CppString*, Il2CppString*>* (*)(PersonalEntities*))(Il2CppBase() + 0x11EA85C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PersonalEntities*, Il2CppObject*))(Il2CppBase() + 0x11EA864))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PersonalEntities* other) {
		return ((R (*)(PersonalEntities*, ProtoModels::PersonalEntities*))(Il2CppBase() + 0x11EA8D4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PersonalEntities*))(Il2CppBase() + 0x11EA960))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PersonalEntities*))(Il2CppBase() + 0x11EA98C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PersonalEntities*, uintptr_t))(Il2CppBase() + 0x11EA9F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PersonalEntities*))(Il2CppBase() + 0x11EAA90))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PersonalEntities* other) {
		return ((R (*)(PersonalEntities*, ProtoModels::PersonalEntities*))(Il2CppBase() + 0x11EAB20))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PersonalEntities*, uintptr_t))(Il2CppBase() + 0x11EAB98))(this, input);
	}

};

}
