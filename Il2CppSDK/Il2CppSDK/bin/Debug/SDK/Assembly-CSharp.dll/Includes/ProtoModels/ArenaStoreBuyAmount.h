#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStoreBuyAmount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStoreBuyAmount"));
	}

	 static MessageParser1<ProtoModels::ArenaStoreBuyAmount*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaStoreBuyAmount*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ParentFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& parent_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaStoreBuyAmount*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaStoreBuyAmount*>* (*)(void *))(Il2CppBase() + 0x2717B00))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2717B64))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717C84))(this);
	}
	template <typename R = ProtoModels::ArenaStoreBuyAmount*> R Clone() {
		return ((R (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717D7C))(this);
	}
	template <typename R = Il2CppString*> R get_Parent() {
		return ((R (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717DD8))(this);
	}
	template <typename R = void> R set_Parent(Il2CppString* value) {
		return ((R (*)(ArenaStoreBuyAmount*, Il2CppString*))(Il2CppBase() + 0x2717DE0))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717E60))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(ArenaStoreBuyAmount*, int32_t))(Il2CppBase() + 0x2717E68))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaStoreBuyAmount*, Il2CppObject*))(Il2CppBase() + 0x2717E70))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaStoreBuyAmount* other) {
		return ((R (*)(ArenaStoreBuyAmount*, ProtoModels::ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717EE0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717F40))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x2717FB4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaStoreBuyAmount*, uintptr_t))(Il2CppBase() + 0x2718018))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaStoreBuyAmount*))(Il2CppBase() + 0x27180A4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaStoreBuyAmount* other) {
		return ((R (*)(ArenaStoreBuyAmount*, ProtoModels::ArenaStoreBuyAmount*))(Il2CppBase() + 0x271816C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaStoreBuyAmount*, uintptr_t))(Il2CppBase() + 0x27181B8))(this, input);
	}

};

}
