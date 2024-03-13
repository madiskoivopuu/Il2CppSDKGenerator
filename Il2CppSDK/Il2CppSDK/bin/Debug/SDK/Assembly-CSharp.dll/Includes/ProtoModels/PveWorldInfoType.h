#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PveWorldInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PveWorldInfoType"));
	}

	template <typename T = MessageParser1PveWorldInfoType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& SoloFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& solo_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& SoloCoopFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& soloCoop_() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> static T& FreeForAllFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& freeForAll_() {
		return *(T*)((uintptr_t)this + 0x22);
	}

	template <typename T = MessageParser1PveWorldInfoType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BEB10))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BEB74))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEC94))(this);
	}
	template <typename T = PveWorldInfoType*> T Clone() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEDA4))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEE00))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(PveWorldInfoType*, int64_t))(Il2CppBase() + 0x11BEE08))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEE10))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(PveWorldInfoType*, Il2CppString*))(Il2CppBase() + 0x11BEE18))(this, value);
	}
	template <typename T = bool> T get_Solo() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEE98))(this);
	}
	template <typename T = void> T set_Solo(bool value) {
		return ((T (*)(PveWorldInfoType*, bool))(Il2CppBase() + 0x11BEEA0))(this, value);
	}
	template <typename T = bool> T get_SoloCoop() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEEAC))(this);
	}
	template <typename T = void> T set_SoloCoop(bool value) {
		return ((T (*)(PveWorldInfoType*, bool))(Il2CppBase() + 0x11BEEB4))(this, value);
	}
	template <typename T = bool> T get_FreeForAll() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BEEC0))(this);
	}
	template <typename T = void> T set_FreeForAll(bool value) {
		return ((T (*)(PveWorldInfoType*, bool))(Il2CppBase() + 0x11BEEC8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PveWorldInfoType*, Il2CppObject*))(Il2CppBase() + 0x11BEED4))(this, other);
	}
	template <typename T = bool> T Equals_1(PveWorldInfoType* other) {
		return ((T (*)(PveWorldInfoType*, PveWorldInfoType*))(Il2CppBase() + 0x11BEF44))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BF000))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BF0D8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PveWorldInfoType*, uintptr_t))(Il2CppBase() + 0x11BF13C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PveWorldInfoType*))(Il2CppBase() + 0x11BF24C))(this);
	}
	template <typename T = void> T MergeFrom(PveWorldInfoType* other) {
		return ((T (*)(PveWorldInfoType*, PveWorldInfoType*))(Il2CppBase() + 0x11BF348))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PveWorldInfoType*, uintptr_t))(Il2CppBase() + 0x11BF3B8))(this, input);
	}

};

}
