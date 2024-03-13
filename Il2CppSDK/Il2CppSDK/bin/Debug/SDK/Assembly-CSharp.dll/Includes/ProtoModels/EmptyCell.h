#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class EmptyCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "EmptyCell"));
	}

	template <typename T = MessageParser1EmptyCell*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& EmptyJsonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& emptyJson_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1EmptyCell*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x136FACC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x136FB30))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(EmptyCell*))(Il2CppBase() + 0x136FC50))(this);
	}
	template <typename T = EmptyCell*> T Clone() {
		return ((T (*)(EmptyCell*))(Il2CppBase() + 0x136FD44))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(EmptyCell*))(Il2CppBase() + 0x136FDA0))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(EmptyCell*, int32_t))(Il2CppBase() + 0x136FDA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_EmptyJson() {
		return ((T (*)(EmptyCell*))(Il2CppBase() + 0x136FDB0))(this);
	}
	template <typename T = void> T set_EmptyJson(Il2CppString* value) {
		return ((T (*)(EmptyCell*, Il2CppString*))(Il2CppBase() + 0x136FDB8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(EmptyCell*, Il2CppObject*))(Il2CppBase() + 0x136FE38))(this, other);
	}
	template <typename T = bool> T Equals_1(EmptyCell* other) {
		return ((T (*)(EmptyCell*, EmptyCell*))(Il2CppBase() + 0x136FEA8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(EmptyCell*))(Il2CppBase() + 0x136FEFC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(EmptyCell*))(Il2CppBase() + 0x136FF70))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(EmptyCell*, uintptr_t))(Il2CppBase() + 0x136FFD4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(EmptyCell*))(Il2CppBase() + 0x1370060))(this);
	}
	template <typename T = void> T MergeFrom(EmptyCell* other) {
		return ((T (*)(EmptyCell*, EmptyCell*))(Il2CppBase() + 0x1370120))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(EmptyCell*, uintptr_t))(Il2CppBase() + 0x1370154))(this, input);
	}

};

}
