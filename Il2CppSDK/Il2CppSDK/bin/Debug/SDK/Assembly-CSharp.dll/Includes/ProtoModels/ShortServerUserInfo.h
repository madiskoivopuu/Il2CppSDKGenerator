#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ShortServerUserInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ShortServerUserInfo"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& BattleTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& battleTag_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1630A8C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1630AF0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630C10))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630D3C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630D98))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ShortServerUserInfo*, Il2CppString*))(Il2CppBase() + 0x1630DA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_BattleTag() {
		return ((T (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630E20))(this);
	}
	template <typename T = void> T set_BattleTag(Il2CppString* value) {
		return ((T (*)(ShortServerUserInfo*, Il2CppString*))(Il2CppBase() + 0x1630E28))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(ShortServerUserInfo*))(Il2CppBase() + 0x1630EA8))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(ShortServerUserInfo*, Il2CppString*))(Il2CppBase() + 0x1630EB0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ShortServerUserInfo*, uintptr_t))(Il2CppBase() + 0x1630F30))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ShortServerUserInfo*, uintptr_t))(Il2CppBase() + 0x1630FA0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ShortServerUserInfo*))(Il2CppBase() + 0x163101C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ShortServerUserInfo*))(Il2CppBase() + 0x16310A8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ShortServerUserInfo*, uintptr_t))(Il2CppBase() + 0x163110C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ShortServerUserInfo*))(Il2CppBase() + 0x16311D4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ShortServerUserInfo*, uintptr_t))(Il2CppBase() + 0x16312F0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ShortServerUserInfo*, uintptr_t))(Il2CppBase() + 0x1631368))(this, input);
	}

};

}
