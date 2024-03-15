#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanConfiguration"));
	}

	 static MessageParser1<ProtoModels::ClanConfiguration*>*& _parser() {
		return *(MessageParser1<ProtoModels::ClanConfiguration*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ClanGuildMinLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& clanGuildMinLevel_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::ClanConfiguration*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ClanConfiguration*>* (*)(void *))(Il2CppBase() + 0x157E7FC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x157E860))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClanConfiguration*))(Il2CppBase() + 0x157E980))(this);
	}
	template <typename R = ProtoModels::ClanConfiguration*> R Clone() {
		return ((R (*)(ClanConfiguration*))(Il2CppBase() + 0x157EA18))(this);
	}
	template <typename R = int32_t> R get_ClanGuildMinLevel() {
		return ((R (*)(ClanConfiguration*))(Il2CppBase() + 0x157EA84))(this);
	}
	template <typename R = void> R set_ClanGuildMinLevel(int32_t value) {
		return ((R (*)(ClanConfiguration*, int32_t))(Il2CppBase() + 0x157EA8C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClanConfiguration*, Il2CppObject*))(Il2CppBase() + 0x157EA94))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClanConfiguration* other) {
		return ((R (*)(ClanConfiguration*, ProtoModels::ClanConfiguration*))(Il2CppBase() + 0x157EB20))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClanConfiguration*))(Il2CppBase() + 0x157EB50))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanConfiguration*))(Il2CppBase() + 0x157EB90))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClanConfiguration*, uintptr_t))(Il2CppBase() + 0x157EBF4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClanConfiguration*))(Il2CppBase() + 0x157EC4C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClanConfiguration* other) {
		return ((R (*)(ClanConfiguration*, ProtoModels::ClanConfiguration*))(Il2CppBase() + 0x157ECC8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClanConfiguration*, uintptr_t))(Il2CppBase() + 0x157ECDC))(this, input);
	}

};

}
