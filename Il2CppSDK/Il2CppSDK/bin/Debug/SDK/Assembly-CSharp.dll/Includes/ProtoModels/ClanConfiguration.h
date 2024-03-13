#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanConfiguration"));
	}

	template <typename T = MessageParser1ClanConfiguration*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ClanGuildMinLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& clanGuildMinLevel_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1ClanConfiguration*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x157E7FC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x157E860))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClanConfiguration*))(Il2CppBase() + 0x157E980))(this);
	}
	template <typename T = ClanConfiguration*> T Clone() {
		return ((T (*)(ClanConfiguration*))(Il2CppBase() + 0x157EA18))(this);
	}
	template <typename T = int32_t> T get_ClanGuildMinLevel() {
		return ((T (*)(ClanConfiguration*))(Il2CppBase() + 0x157EA84))(this);
	}
	template <typename T = void> T set_ClanGuildMinLevel(int32_t value) {
		return ((T (*)(ClanConfiguration*, int32_t))(Il2CppBase() + 0x157EA8C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ClanConfiguration*, Il2CppObject*))(Il2CppBase() + 0x157EA94))(this, other);
	}
	template <typename T = bool> T Equals_1(ClanConfiguration* other) {
		return ((T (*)(ClanConfiguration*, ClanConfiguration*))(Il2CppBase() + 0x157EB20))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClanConfiguration*))(Il2CppBase() + 0x157EB50))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanConfiguration*))(Il2CppBase() + 0x157EB90))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClanConfiguration*, uintptr_t))(Il2CppBase() + 0x157EBF4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClanConfiguration*))(Il2CppBase() + 0x157EC4C))(this);
	}
	template <typename T = void> T MergeFrom(ClanConfiguration* other) {
		return ((T (*)(ClanConfiguration*, ClanConfiguration*))(Il2CppBase() + 0x157ECC8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClanConfiguration*, uintptr_t))(Il2CppBase() + 0x157ECDC))(this, input);
	}

};

}
