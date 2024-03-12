#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanAvatarsType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanAvatarsType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& userName_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MapSlotFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapSlot_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x174A4F0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x174A554))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A674))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A774))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A7D0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ClanAvatarsType*, int64_t))(Il2CppBase() + 0x174A7D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_UserName() {
		return ((T (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A7E0))(this);
	}
	template <typename T = void> T set_UserName(Il2CppString* value) {
		return ((T (*)(ClanAvatarsType*, Il2CppString*))(Il2CppBase() + 0x174A7E8))(this, value);
	}
	template <typename T = int64_t> T get_MapSlot() {
		return ((T (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A868))(this);
	}
	template <typename T = void> T set_MapSlot(int64_t value) {
		return ((T (*)(ClanAvatarsType*, int64_t))(Il2CppBase() + 0x174A870))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ClanAvatarsType*, uintptr_t))(Il2CppBase() + 0x174A878))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ClanAvatarsType*, uintptr_t))(Il2CppBase() + 0x174A8E8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A958))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A9E8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClanAvatarsType*, uintptr_t))(Il2CppBase() + 0x174AA4C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClanAvatarsType*))(Il2CppBase() + 0x174AB04))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ClanAvatarsType*, uintptr_t))(Il2CppBase() + 0x174AC08))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClanAvatarsType*, uintptr_t))(Il2CppBase() + 0x174AC60))(this, input);
	}

};

}
