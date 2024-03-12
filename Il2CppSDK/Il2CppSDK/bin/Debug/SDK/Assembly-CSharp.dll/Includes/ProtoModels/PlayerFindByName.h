#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlayerFindByName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlayerFindByName"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& SearchTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& searchType_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1567DD0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1567E34))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PlayerFindByName*))(Il2CppBase() + 0x1567F54))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PlayerFindByName*))(Il2CppBase() + 0x1568054))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(PlayerFindByName*))(Il2CppBase() + 0x15680B0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(PlayerFindByName*, int64_t))(Il2CppBase() + 0x15680B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PlayerFindByName*))(Il2CppBase() + 0x15680C0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(PlayerFindByName*, Il2CppString*))(Il2CppBase() + 0x15680C8))(this, value);
	}
	template <typename T = uintptr_t> T get_SearchType() {
		return ((T (*)(PlayerFindByName*))(Il2CppBase() + 0x1568148))(this);
	}
	template <typename T = void> T set_SearchType(uintptr_t value) {
		return ((T (*)(PlayerFindByName*, uintptr_t))(Il2CppBase() + 0x1568150))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PlayerFindByName*, uintptr_t))(Il2CppBase() + 0x1568158))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PlayerFindByName*, uintptr_t))(Il2CppBase() + 0x15681C8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PlayerFindByName*))(Il2CppBase() + 0x1568238))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayerFindByName*))(Il2CppBase() + 0x15682CC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PlayerFindByName*, uintptr_t))(Il2CppBase() + 0x1568330))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PlayerFindByName*))(Il2CppBase() + 0x15683E8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PlayerFindByName*, uintptr_t))(Il2CppBase() + 0x15684EC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PlayerFindByName*, uintptr_t))(Il2CppBase() + 0x1568544))(this, input);
	}

};

}
