#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PersonalEntities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PersonalEntities"));
	}

	template <typename T = MessageParser1PersonalEntities*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& EntitiesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, Il2CppString*>*> static T& _map_entities_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = MapField2Il2CppString*, Il2CppString*>*> T& entities_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1PersonalEntities*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11EA524))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11EA588))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PersonalEntities*))(Il2CppBase() + 0x11EA6A8))(this);
	}
	template <typename T = PersonalEntities*> T Clone() {
		return ((T (*)(PersonalEntities*))(Il2CppBase() + 0x11EA800))(this);
	}
	template <typename T = MapField2Il2CppString*, Il2CppString*>*> T get_Entities() {
		return ((T (*)(PersonalEntities*))(Il2CppBase() + 0x11EA85C))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PersonalEntities*, Il2CppObject*))(Il2CppBase() + 0x11EA864))(this, other);
	}
	template <typename T = bool> T Equals_1(PersonalEntities* other) {
		return ((T (*)(PersonalEntities*, PersonalEntities*))(Il2CppBase() + 0x11EA8D4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PersonalEntities*))(Il2CppBase() + 0x11EA960))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PersonalEntities*))(Il2CppBase() + 0x11EA98C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PersonalEntities*, uintptr_t))(Il2CppBase() + 0x11EA9F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PersonalEntities*))(Il2CppBase() + 0x11EAA90))(this);
	}
	template <typename T = void> T MergeFrom(PersonalEntities* other) {
		return ((T (*)(PersonalEntities*, PersonalEntities*))(Il2CppBase() + 0x11EAB20))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PersonalEntities*, uintptr_t))(Il2CppBase() + 0x11EAB98))(this, input);
	}

};

}
