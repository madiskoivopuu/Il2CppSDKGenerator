#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreSavingsGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreSavingsGroup"));
	}

	 static MessageParser1<ProtoModels::ArenaStoreSavingsGroup*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaStoreSavingsGroup*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& StageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& stage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaStoreSavingsGroup*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaStoreSavingsGroup*>* (*)(void *))(Il2CppBase() + 0x2720C10))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2720C74))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720D94))(this);
	}
	template <typename R = ProtoModels::ArenaStoreSavingsGroup*> R Clone() {
		return ((R (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x271B028))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720E30))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaStoreSavingsGroup*, Il2CppString*))(Il2CppBase() + 0x2720E38))(this, value);
	}
	template <typename R = int32_t> R get_Stage() {
		return ((R (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720EB8))(this);
	}
	template <typename R = void> R set_Stage(int32_t value) {
		return ((R (*)(ArenaStoreSavingsGroup*, int32_t))(Il2CppBase() + 0x2720EC0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreSavingsGroup*, Il2CppObject*))(Il2CppBase() + 0x2720EC8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreSavingsGroup* other) {
		return ((R (*)(ArenaStoreSavingsGroup*, ProtoModels::ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720F38))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x2720F98))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x272100C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreSavingsGroup*, uintptr_t))(Il2CppBase() + 0x2721070))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreSavingsGroup*))(Il2CppBase() + 0x27210FC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreSavingsGroup* other) {
		return ((R (*)(ArenaStoreSavingsGroup*, ProtoModels::ArenaStoreSavingsGroup*))(Il2CppBase() + 0x271D7E8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreSavingsGroup*, uintptr_t))(Il2CppBase() + 0x27211C4))(this, input);
	}

};

}
