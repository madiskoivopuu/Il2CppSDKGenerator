#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreSavingsGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreSavingsGroup"));
	}

	template <typename T = MessageParser1ArenaStoreSavingsGroup*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& StageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& stage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaStoreSavingsGroup*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2720C10))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2720C74))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720D94))(this);
	}
	template <typename T = ArenaStoreSavingsGroup*> T Clone() {
		return ((T (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x271B028))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720E30))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaStoreSavingsGroup*, Il2CppString*))(Il2CppBase() + 0x2720E38))(this, value);
	}
	template <typename T = int32_t> T get_Stage() {
		return ((T (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720EB8))(this);
	}
	template <typename T = void> T set_Stage(int32_t value) {
		return ((T (*)(ArenaStoreSavingsGroup*, int32_t))(Il2CppBase() + 0x2720EC0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaStoreSavingsGroup*, Il2CppObject*))(Il2CppBase() + 0x2720EC8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaStoreSavingsGroup* other) {
		return ((T (*)(ArenaStoreSavingsGroup*, ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720F38))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720F98))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x272100C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStoreSavingsGroup*, uintptr_t))(Il2CppBase() + 0x2721070))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x27210FC))(this);
	}
	template <typename T = void> T MergeFrom(ArenaStoreSavingsGroup* other) {
		return ((T (*)(ArenaStoreSavingsGroup*, ArenaStoreSavingsGroup*))(Il2CppBase() + 0x271D7E8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStoreSavingsGroup*, uintptr_t))(Il2CppBase() + 0x27211C4))(this, input);
	}

};

}
